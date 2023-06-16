#define BOTAO_PIN A3

void setup() {
  pinMode(BOTAO_PIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(BOTAO_PIN));
  delay(500);
}
