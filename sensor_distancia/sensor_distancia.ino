#define PIN_TRIG 8
#define PIN_ECHO 7
#define VELOCIDADE_SOM_MICRO_S 0.000340
#define TEMPO_DO_PULSO 10
#define UNIDADE_METRO_CM 100
#define UNIDADE_METRO 1

float tempoEcho = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_TRIG, OUTPUT);
  digitalWrite(PIN_TRIG, LOW);
  pinMode(PIN_ECHO, INPUT);
}

void loop()
{
  disparoPulsoTrig(TEMPO_DO_PULSO);
  tempoEcho = pulseIn(PIN_ECHO, HIGH);

  float distancia = calculoDaDistancia(tempoEcho, UNIDADE_METRO_CM);
  float distanciaMetro = calculoDaDistancia(tempoEcho, UNIDADE_METRO);


  Serial.print("distancia ");
  Serial.println(distancia);
  Serial.print("Metros ");
  Serial.println(distanciaMetro);

  delay(500);
}

void disparoPulsoTrig(uint8_t tempoDoPulso)
{
  digitalWrite(PIN_TRIG, HIGH);
  delay(tempoDoPulso);
  digitalWrite(PIN_TRIG, LOW);
}

float calculoDaDistancia(float tempoUs, uint8_t unidade)
{
  return (((tempoUs * VELOCIDADE_SOM_MICRO_S) / 2) * unidade);
}
