// Define macros
#define PINNUMBER 0


// Analog to digital converter registers addresses on the Arduino.
volatile uint8_t* const adMUX = (uint8_t*) 0x7c;
volatile uint8_t* const adcSRA = (uint8_t*) 0x7a;
volatile uint8_t* const adcSRB = (uint8_t*) 0x7b;
volatile uint16_t* const adcData = (uint16_t*) 0x78;

void setup() 
{
  // ADC setup
  adcInit();
  // Enable all interrupts.
  sei();
  
  Serial.begin(9600);
}

void loop() {}


// Sets the required initial settings for the adc
void adcInit()
{
  // Bits 6 and 7 are the reference selection bits for the register.
  // Bits 0 - 4 are the bits used to select which analog pin will be used.
  *adMUX = 0b01000000;
  
  // Bit 7 enables the ADC.
  // Bit 6 is used to start the conversion for the ADC.
  // Bit 5 controls whether the ADC autotriggers.
  // Bit 4 is changed whenever a conversion is finished. If Bit 3 is set to 1 this will call the interrupt.
  // Bit 3 is enables the interrupt for the ADC.
  // Bits 0 - 2 are used for prescaling.
  *adcSRA = 0b10001000;

  // Bit 6 controls the whether or not the comparator is enabled.
  // Bits 0 - 2 control the auto trigger value. Since it is disabled we can leave them as 0.
  *adcSRB = 0b00000000;

  // Chooses which pin is being set to input.
  *adMUX |= PINNUMBER;

  // Begins the conversion.
  *adcSRA |= (1 << 6);

}

// Interrupt for when the converter finishes.
ISR(ADC_vect)
{
  Serial.println(*adcData);

  // Once the data is printed out we reset the bit to start the conversion over again.
  *adcSRA |= (1 << 6);
}
