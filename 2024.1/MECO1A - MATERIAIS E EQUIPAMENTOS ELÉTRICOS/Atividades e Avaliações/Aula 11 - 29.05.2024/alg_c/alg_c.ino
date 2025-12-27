//Neste código pode ser incluida funções para encurta-lo, poém com o foco é apenas didático, prefiri manter mais simples:

#include <Servo.h>
//Declarando variaveis:
#define servo_pino 3
#define pot_pin A0
#define botao_1_pin 13
#define botao_2_pin 12
#define buzer_pin 8

int valor_potenciometro, posicao = 0;
bool valor_botao1 = 0;
bool valor_botao2 = 0;
bool saida = 1;
unsigned long tempo = 0, tempo_anterior = 0; 

Servo servo_motor; //Criando Objeto Servo

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial
  pinMode(buzer_pin, OUTPUT);
  servo_motor.attach(servo_pino); //Inicializando controle Servo
} //Fim SETUP

void buzer(){

  digitalWrite(buzer_pin, 1);
  delay(350);
  digitalWrite(buzer_pin, 0);

} //Fim função Buzer - emite um beep em um buzer a cada troca de função

void controle_man(){

  while(saida == 0){
    tempo = millis();
    valor_botao1 = digitalRead(botao_1_pin);
    valor_botao2 = digitalRead(botao_2_pin);
    valor_potenciometro = analogRead(pot_pin);
    Serial.println("slave"); //Exibe o modo de operação na serial
    Serial.println(posicao); //Exibe a posição na serial

    posicao = map(valor_potenciometro, 0, 1023, 15, 165); //Mapeia a posição apartir da entrada do potenciometro
    servo_motor.write(posicao);


  if(valor_botao1 == 1 && valor_botao2 == 1){
    if(tempo - tempo_anterior > 3000){

    saida = 1;
    buzer();
    tempo_anterior = tempo;

  } } else{
    
  tempo_anterior = tempo;
  
  }//Fim if-else checagens - entra modo de config por botãos 

  } //Fim while controla função manual (repetição até saida)

} //Fim controle função manual

void loop(){
  tempo = millis();

  valor_potenciometro = analogRead(pot_pin);
  valor_botao1 = digitalRead(botao_1_pin);
  valor_botao2 = digitalRead(botao_2_pin);

  //Checagem e incrementador de posição:
  if(valor_botao1 == 1 && valor_botao2 == 0)
    posicao++;
  if(valor_botao2 == 1 && valor_botao1 == 0)
    posicao--;

  if(valor_botao1 == 1 && valor_botao2 == 1){
    if(tempo - tempo_anterior > 3000){

    saida = 0;
    tempo_anterior = tempo;
    buzer();
    controle_man();

  } } else{
    
  tempo_anterior = tempo;
  
  }//Fim if-else checagens - entra modo de config por potenciometro

  //Limitador de posição:
  if(posicao < 0)
    posicao = 0;
  if(posicao >  180)
    posicao = 180;

  servo_motor.write(posicao);

  Serial.println("main"); //Exibe o modo de operação na serial
  Serial.println(posicao); //Exibe a posição na serial

  delay(map(valor_potenciometro, 0, 1023, 20, 175)); //Usa como delay o potenciometro

} //Fim VOID

