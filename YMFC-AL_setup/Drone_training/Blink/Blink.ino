void setup() {
  DDRB |= (1 << DDB5);
  // pinmode(13,OUTPUT);
}

void loop() {
  PORTB |= (1 << PORTB5);
  delay(1000);
  PORTB &= ~(1 << PORTB5);

  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(1000)
  // digitalWrite(LED_BUILTIN, LOW);
  }