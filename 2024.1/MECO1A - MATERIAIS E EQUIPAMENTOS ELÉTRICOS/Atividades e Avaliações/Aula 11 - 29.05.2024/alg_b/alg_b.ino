#include <Servo.h>
//Declarando variaveis:
#define servo_pino 3
#define pot_pin A0
#define botao_1_pin 13
#define botao_2_pin 12

int valor_potenciometro, posicao = 0;
bool valor_botao1 = 0;
bool valor_botao2 = 0;

Servo servo_motor; //Criando Objeto Servo

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial

  servo_motor.attach(servo_pino); //Inicializando controle Servo
} //Fim SETUP

void loop(){
  valor_potenciometro = analogRead(pot_pin);
  valor_botao1 = digitalRead(botao_1_pin);
  valor_botao2 = digitalRead(botao_2_pin);

  //Checagem e incrementador de posição:
  if(valor_botao1 == 1)
    posicao++;
  if(valor_botao2 == 1)
    posicao--;

  //Limitador de posição:
  if(posicao < 0)
    posicao = 0;
  if(posicao >  180)
    posicao = 180;

  servo_motor.write(posicao);

  Serial.println(posicao); //Exibe a posição na serial

  delay(map(valor_potenciometro, 0, 1023, 20, 175)); //Usa como delay o potenciometro

} //Fim VOID

