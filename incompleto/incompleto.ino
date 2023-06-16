const int analogInPin = A1;
const int analogInPinDois = A2;
const int botaoPin = A3;
const int analogAmareloLed = 9;
const int ledVermelhoAnalog = 10;

int sensorUrxValor = 0;
int UrySensorValor = 0;
int botaoValorSensor = 0;

int outputUrxValor = 0;
int UryOutputValor = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {

  sensorUrxValor = analogRead (analogInPin);
  UrySensorValor = analogRead (analogInPinDois);

  outputUrxValor = map (sensorUrxValor, 0, 500, 500, 1000);
  UryOutputValor = map (UrySensorValor, 0, 1023, 0, 255);

  analogWrite(analogInPin, outputUrxValor);

  Serial.print("sensor URX =");
  Serial.println(sensorUrxValor);
  Serial.print("Saida URX =");
  Serial.println(outputUrxValor);

  delay (1000);

  analogWrite(analogInPinDois, UryOutputValor);

  Serial.print("sensor URY =");
  Serial.println(UrySensorValor);
  Serial.print("Saida URY =");
  Serial.println(UryOutputValor);

}
