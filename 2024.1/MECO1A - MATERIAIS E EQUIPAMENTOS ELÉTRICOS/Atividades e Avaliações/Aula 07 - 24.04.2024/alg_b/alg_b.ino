#define led1 12
#define led2 13
#define BUTTON 2
int estado = 0;
int tempo_aleatorio;

void setup() {
  pinMode(led2, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(BUTTON,OUTPUT);

}

void loop() {

digitalWrite(led2, LOW);
  tempo_aleatorio = random(100, 3000);

  delay(tempo_aleatorio);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  
  estado = digitalRead(BUTTON);


 while(estado == LOW){
    estado = digitalRead(BUTTON); //Faz a leitura mesmo em low para sair do laço se nescessário
  } //Fim while LOW

  while(estado == HIGH){
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    estado = digitalRead(BUTTON);
  } //Fim while HIGH
  
} //Fim void loop