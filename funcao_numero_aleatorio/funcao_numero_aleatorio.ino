uint16_t aleatorio1;
uint16_t aleatorio2;
uint16_t resultado;

void setup() {
  Serial.begin(9600);

  randomSeed(analogRead(0));
}

void loop() {
  aleatorio1 = random(300);
  aleatorio2 = random(300);
  resultado = comparacao(aleatorio1, aleatorio2);

  Serial.print("entre o numero: ");
  Serial.print(aleatorio1);
  Serial.print(" e " );
  Serial.println(aleatorio2);
  Serial.print("menor numero e: ");
  Serial.println(resultado);
  delay(1000);

}
uint16_t comparacao(uint16_t numero1, uint16_t numero2)
{
  uint16_t menorNumero = 0;

  if (numero1 < numero2)
  {
    menorNumero = numero1;
  }
  else
  {
    menorNumero = numero2;
  }
  return menorNumero;
}
