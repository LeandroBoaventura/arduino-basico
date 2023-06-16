int ledVerdeSemafaro = 4;
int ledAmareloSemafaro = 2;
int ledVermelhoSemafaro = 3;

int SemafaroLedVerde = A1;
int SemafaroledAmarelo = A2;
int SemafaroledVermelho = A3;

int bottonPedestre = 8;
int PedestreledVermelho = 10;
int PedestreledVerde = 9;



void setup() {
  // Configuracao dos pinos
  pinMode(ledVerdeSemafaro, OUTPUT);
  pinMode(ledAmareloSemafaro, OUTPUT);
  pinMode(ledVermelhoSemafaro, OUTPUT);
  pinMode(PedestreledVermelho, OUTPUT);
  pinMode(PedestreledVerde, OUTPUT);
  pinMode(SemafaroLedVerde, OUTPUT);
  pinMode(SemafaroledAmarelo, OUTPUT);
  pinMode(SemafaroledVermelho, OUTPUT);
  pinMode(bottonPedestre, INPUT);

  digitalWrite(PedestreledVermelho, HIGH);
  digitalWrite(ledVermelhoSemafaro, HIGH);
  digitalWrite(SemafaroledVermelho, HIGH);
  delay(2000);
}

void loop() {
  digitalWrite(ledVerdeSemafaro, HIGH);
  digitalWrite(ledVermelhoSemafaro, LOW);
  delay(2000);
  digitalWrite(ledAmareloSemafaro, HIGH);
  digitalWrite(ledVerdeSemafaro, LOW);
  delay(500);
  digitalWrite(ledVermelhoSemafaro, HIGH);
  digitalWrite(ledAmareloSemafaro, LOW);
  delay(2000);

  if (digitalRead(bottonPedestre) == HIGH)
  {
    digitalWrite(PedestreledVerde, HIGH);
    digitalWrite(PedestreledVermelho, LOW);
    delay(2000);
    digitalWrite(PedestreledVermelho, HIGH);
    digitalWrite(PedestreledVerde, LOW);
  }

  digitalWrite(SemafaroledVermelho, LOW);
  digitalWrite(SemafaroLedVerde, HIGH);
  delay(2000);
  digitalWrite(SemafaroLedVerde, LOW);
  digitalWrite(SemafaroledAmarelo, HIGH);
  delay(500);
  digitalWrite(SemafaroledVermelho, HIGH);
  digitalWrite(SemafaroledAmarelo, LOW);
  delay(500);

  if (digitalRead(bottonPedestre) == HIGH)
  {
    digitalWrite(PedestreledVerde, HIGH);
    digitalWrite(PedestreledVermelho, LOW);
    delay(2000);
    digitalWrite(PedestreledVermelho, HIGH);
    digitalWrite(PedestreledVerde, LOW);
  }

}
