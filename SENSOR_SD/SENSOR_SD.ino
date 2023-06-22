#include <pulsoUltraSonico.h>
#include <SPI.h>
#include <SD.h>
#define PIN_TRIG 8
#define PIN_ECHO 7
#define INTERVALO 10000
uint32_t previcaoTempo = 0;

const int chipSelect = 4;

pulsoUltraSonico Sensor(PIN_TRIG, PIN_ECHO);

void setup(void)
{
  Serial.begin(9600);

  Serial.print("Initializing SD card...");

  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");

    while (1);
  }
  Serial.println("card initialized.");
}
void loop(void)
{

  float distancia = Sensor.getDistancia();
  String distanciaString = String(distancia);

  Serial.print("distancia: ");
  Serial.println(distancia);

  uint32_t tempoAtual = millis();
  if (tempoAtual - previcaoTempo >= INTERVALO)
  {
    previcaoTempo = tempoAtual;

    File dataFile = SD.open("datalog.txt", FILE_WRITE);

    dataFile.print("distancia: ");
    dataFile.println(distanciaString);
    dataFile.close();
    Serial.println("Gravando no Cartao");
  }
  else {
    Serial.println("aguardando o tempo de gravacao");
  }

  delay(1000);

}
