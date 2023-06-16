uint16_t aleatorio1;
uint16_t aleatorio2;
uint16_t resultado;
uint16_t valorSoma;
uint16_t valorSubtracao;
uint16_t valorMultiplicacao;
float valorDivisao;

void setup() {
  Serial.begin(9600);

  randomSeed(analogRead(0));
}

void loop() {
  aleatorio1 = random(300);
  aleatorio2 = random(300);
  resultado = comparacao(aleatorio1, aleatorio2);

  valorSoma = soma(aleatorio1, aleatorio2);
  imprimirResultado(String("soma"), aleatorio1, aleatorio2, valorSoma);
  delay(1000);
  valorSubtracao = subtracao(aleatorio1, aleatorio2);
  imprimirResultado(String("subtracao"), aleatorio1, aleatorio2, valorSubtracao);
  delay(1000);
  valorMultiplicacao = multiplicacao(aleatorio1, aleatorio2);
  imprimirResultado(String("multiplicacao"), aleatorio1, aleatorio2, valorMultiplicacao);
  delay(1000);
  valorDivisao = divisao(aleatorio1, aleatorio2);
  imprimirResultado(String("divisao"), aleatorio1, aleatorio2, valorDivisao);

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

void imprimirResultado(String texto, uint16_t numero1, uint16_t numero2, float resultadoFuncao )
{
  Serial.println(texto);

  Serial.print(" entre o numero: ");
  Serial.print(numero1);
  Serial.print(" e " );
  Serial.println(numero2);
  Serial.print(" o resultado e: ");
  Serial.println(resultadoFuncao);
  delay(1000);

}

uint16_t soma(uint16_t numero1, uint16_t numero2)
{
  uint16_t somaResultado = (numero1 + numero2);
  return somaResultado;
}

int16_t subtracao(int16_t numero1, int16_t numero2)
{
  int16_t subtracaoResultado = (numero1 - numero2);
  return subtracaoResultado;
}


uint16_t multiplicacao(uint16_t numero1, uint16_t numero2)
{
  uint16_t multiplicacaoResultado = (numero1 * numero2);
  return multiplicacaoResultado;
}


float divisao(uint16_t numero1, uint16_t numero2)
{
  float divisaoResultado = (numero1 / numero2);
  return divisaoResultado;
}
