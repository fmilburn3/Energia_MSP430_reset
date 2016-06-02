void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
}

void loop()
{
  unsigned int i;
  for (i = 1; i < 5; i++) {
    digitalWrite(RED_LED, HIGH);
    delay(500);
    digitalWrite(RED_LED, LOW);
    delay(500);
  }

  WDTCTL = 0x00;                         // causes a reset

  for(;;) {
    digitalWrite(GREEN_LED, HIGH);       // this line is never reached
  }
}
