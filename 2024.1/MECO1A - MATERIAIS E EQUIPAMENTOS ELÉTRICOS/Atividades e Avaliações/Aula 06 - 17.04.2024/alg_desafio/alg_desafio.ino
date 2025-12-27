//VARIAVEIS
int x = 0;
int counter;
int counter2;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  x = 250;
  for (counter = 0; counter < 9; ++counter) {
    x = (x - 25); //FAZENDO A SUBTRAÇÃO PARA O LAÇO DIMINUIR POR CICLO
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(x); // 
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(x); 
  }
  x = 0;
  for (counter2 = 0; counter2 < 9; ++counter2) {
    x = (x + 25); //FAZ O PASSO INVERSO DO 1º FOR
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(x); 
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(x); 
  }
}

