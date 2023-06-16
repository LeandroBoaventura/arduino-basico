#define ANALOG_X A1
#define ANALOG_Y A2
#define LED_AMARELO 9
#define LED_VERMELHO 10
#define BOTAO_PIN A3

uint8_t valorLedAmarelo = 0;
uint8_t valorLedVermelho = 0;
uint16_t XpotenciometroValor = 0;
uint16_t YpotenciometroValor = 0;

void setup() {
  pinMode(ANALOG_X, INPUT);
  pinMode(ANALOG_Y, INPUT);
  pinMode(BOTAO_PIN, INPUT);

  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(BOTAO_PIN) == HIGH)
  {
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
  }
  else
  {
    XpotenciometroValor = analogRead(ANALOG_X);
    YpotenciometroValor = analogRead(ANALOG_Y);

    valorLedAmarelo = map(XpotenciometroValor, 0, 1023, 0, 255);
    valorLedVermelho = map(YpotenciometroValor, 0, 1023, 0, 255);

    analogWrite(LED_AMARELO, valorLedAmarelo);
    analogWrite(LED_VERMELHO, valorLedVermelho);
  }
}
