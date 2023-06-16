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
  pinMode(analogInPin, INPUT);
  pinMode(analogInPinDois, INPUT);


}

void loop() {

  sensorUrxValor = analogRead(analogInPin);
  UrySensorValor = analogRead(analogInPinDois);

  outputUrxValor = map(sensorUrxValor, 0, 1023, 0, 255);

  analogWrite(analogInPin, outputUrxValor);

  Serial.print("sensor URX =");
  Serial.println(sensorUrxValor);
  Serial.print("Saida URX =");
  Serial.println(outputUrxValor);

  delay (100);



}
