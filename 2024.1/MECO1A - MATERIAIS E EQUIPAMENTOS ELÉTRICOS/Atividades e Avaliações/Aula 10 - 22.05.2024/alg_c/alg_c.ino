//Declarando variaveis:
#define ledr 9
#define ledb 10
#define ledg 6

int matriz[8][3] = {{128, 0, 128}, {255, 128, 180}, {0, 255, 30}, {204, 137, 13}, {128, 20, 200}, {200, 20, 20}, {118, 136, 85}, {10, 31, 217}}; //Valores de cores pré definidos

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial
  pinMode(ledr, OUTPUT);
  pinMode(ledb, OUTPUT);
  pinMode(ledg, OUTPUT);
  
} //Fim SETUP

void loop(){

for(int i = 0; i < 8; i++){

  analogWrite(ledr, matriz[i][0]);
  analogWrite(ledb, matriz[i][1]);
  analogWrite(ledg, matriz[i][2]);
  delay(1000);

} //Fim for alterações de cores
  
} //Fim VOID