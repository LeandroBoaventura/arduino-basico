#define RELE_N1 9
#define RELE_N2 10

bool x = true;
char entrada = 0;

void setup() {
  pinMode (RELE_N1, OUTPUT);
  pinMode (RELE_N2, OUTPUT);

  Serial.begin(9600);
  Serial.println("bora acionar esse Bagulhete!!!!");
  Serial.println("Digite para Acionar O Rele -> 1");
  Serial.println("Digite para Desligar O Rele -> 0");
  Serial.println("Para inverter o estado do Rele digite -> 3");
  Serial.println("Aguardando o comando");
}

void loop()
{
  if (Serial.available() > 0)
  {
    entrada = Serial.read();

    if (entrada == '1')
    {
      digitalWrite(RELE_N1, HIGH);
      Serial.println("O Rele esta ligado");
    }
    else if (entrada == '0')
    {
      digitalWrite(RELE_N1, LOW);
      Serial.println("O Rele esta desligado");
    }
    else if (entrada == '3')
    {
      digitalWrite(RELE_N1, !digitalRead(RELE_N1));
      Serial.println("O Rele esta desligado");
    }
    else
    {
      Serial.println("Comando invalido");
    }
  }
}
