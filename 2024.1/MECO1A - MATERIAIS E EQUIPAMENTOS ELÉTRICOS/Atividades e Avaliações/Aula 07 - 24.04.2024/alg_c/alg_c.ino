#define led1 12
#define led2 13
#define BUTTON 2
int estado = 0;
int tempo = 1000;

void setup() {
  pinMode(led2, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(BUTTON,OUTPUT);
}

void loop() {
//Faz com que o tempo menor ou igual que 50 retorne a 1000
//Há 2 vereficadores de botão precionado if que roda em sincronia com a função de piscar
if(tempo <= 50)
  tempo = 1000;

digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
estado = digitalRead(BUTTON);

if(estado == HIGH)
  tempo = tempo -100;

delay(tempo);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
delay(tempo);

if(estado == HIGH)
  tempo = tempo -100;

  
} //Fim void loop