int ledVerde = 4;
int ledAmarelo = 2;
int ledVermelho = 3;
int ledVerde1 = 10;
int ledAmarelo1 = 9;
int ledVermelho1 = 8;

void setup() {
  // Configuracao dos pinos
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVermelho1, HIGH);
  delay(2000);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(2000);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(500);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  delay(500);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVerde1, HIGH);
  delay(2000);
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarelo1, HIGH);
  delay(500);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledAmarelo1, LOW);
  delay(500);


}
