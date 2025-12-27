#include <Servo.h>
//Declarando variaveis:
#define servo_pino 3
#define pot_pin A0
int valor_potenciometro;

Servo servo_motor; //Criando Objeto Servo

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial

  servo_motor.attach(servo_pino); //Inicializando controle Servo
} //Fim SETUP

void loop(){
  valor_potenciometro = analogRead(pot_pin);

  int posicao = map(valor_potenciometro, 0, 1023, 15, 165); //Mapeia a posição apartir da entrada do potenciometro
  servo_motor.write(posicao);

  Serial.println(posicao); //Exibe a posição na serial

} //Fim VOID

