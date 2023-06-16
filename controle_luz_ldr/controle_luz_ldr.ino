#define PIN_LDR A0
#define LED_AMARELO 10
#define LED_VERMELHO 9
#define LED_2AMARELO 8
#define VALOR_NOITE 50
#define VALOR_TRANSITORIO 100
#define VALOR_DIA 150

uint8_t valorLdr = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_LDR, INPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_2AMARELO, OUTPUT);
}

void loop()
{
  valorLdr = analogRead(PIN_LDR);

  if (valorLdr < VALOR_NOITE)
  {
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_2AMARELO, HIGH);
  }
  else if ((valorLdr > VALOR_NOITE) && (valorLdr < VALOR_TRANSITORIO))
  {
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_2AMARELO, HIGH);
  }
  else if ((valorLdr > VALOR_TRANSITORIO) && (valorLdr < VALOR_DIA))
  {
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_2AMARELO, HIGH);
  }
  else
  {
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_2AMARELO, LOW);
  }
}
