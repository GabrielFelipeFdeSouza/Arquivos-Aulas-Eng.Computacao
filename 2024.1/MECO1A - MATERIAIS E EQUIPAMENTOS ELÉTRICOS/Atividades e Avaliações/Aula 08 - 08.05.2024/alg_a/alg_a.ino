//Declarando variaveis:
#define led1 13
#define led2 12
unsigned long tempo_anterior = 0, tempo_atual = 0;
bool estado = 0, estado2 = 0;
unsigned long tempo_anterior2 = 0, tempo_atual2 = 0;

void setup(){
  //Setando as pinagens:
  pinMode(led2, OUTPUT);
  pinMode(led1, OUTPUT);

} //Fim SETUP

void loop(){
  //Atualizando tempo atual com a função millis
  tempo_atual = millis();
  tempo_atual2 = millis();

  //Duas verificações if para criar as alterações assincronas:

  if ((tempo_atual - tempo_anterior) > 1000){
    estado =! estado;
    digitalWrite(led1, estado); 
    tempo_anterior = tempo_atual; 
    } //Fim if

  if ((tempo_atual2 - tempo_anterior2) > 700){
    estado2 =! estado2;
    digitalWrite(led2, estado2); 
    tempo_anterior2 = tempo_atual2; 
    } //Fim if

} //Fim VOID