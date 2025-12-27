#include <Stepper.h>
//Declarando variaveis:
const int steps_per_revolution = 2038;

Stepper motor_passos = Stepper(steps_per_revolution, 7, 5, 6, 4); //Criando Objeto Stepper - Motor de Passos

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial

  motor_passos.setSpeed(5); //Define a velocidade inicial de giro do motor
} //Fim SETUP

void loop(){

motor_passos.step(steps_per_revolution/2);

motor_passos.step(-steps_per_revolution/4);
} //Fim LOOP

