#define PIN_LDR A0

uint8_t valorLdr = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_LDR, INPUT);

}

void loop() {
  valorLdr = analogRead(PIN_LDR);
  Serial.println(valorLdr);
  delay(500);
}
