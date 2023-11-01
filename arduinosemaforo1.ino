int botao = 4;

void setup()
{
  pinMode(1, OUTPUT); //vermelho
  pinMode(2, OUTPUT); //amarelo
  pinMode(3, OUTPUT); //verde
  
  pinMode(botao, INPUT_PULLUP); // butão
}

void loop()
{
  int b = digitalRead (botao);
  
  if (b == LOW)
  {
    // Botão pressionado, fechar o sinal
    digitalWrite(3, HIGH); // verde
    digitalWrite(2, LOW);  // amarelo
    digitalWrite(1, LOW);  // vermelho
  }
  else
  {
    // Botão não pressionado, operação normal
    digitalWrite(2, HIGH); // amarelo
    digitalWrite(3, LOW); // verde
    delay(3000);
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH); // vermelho
    delay(6000);

    digitalWrite(1, LOW); // vermelho
    digitalWrite(2, HIGH); // AMARELO
    delay(3000);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(10000);
  }
}