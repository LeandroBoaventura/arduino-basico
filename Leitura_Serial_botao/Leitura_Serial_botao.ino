const int buttonDireita = 2;
const int buttonEsquerda = 3;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonDireita, INPUT);
  pinMode(buttonEsquerda, INPUT);
}

void loop() {

  if ((digitalRead(buttonDireita) == HIGH) || (digitalRead(buttonEsquerda) == HIGH))
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
