#include <Stepper.h>
//Declarando variaveis:
const int steps_per_revolution = 2038;
#define pin_pot A0
int valor_pot;

Stepper motor_passos = Stepper(steps_per_revolution, 7, 5, 6, 4); //Criando Objeto Stepper - Motor de Passos

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial

} //Fim SETUP

void loop(){

valor_pot = analogRead(pin_pot);

int velocidade = map(valor_pot, -200, 1000, 0, 10); //Mapeia a velocidade do motor, usando parametros afim de evitar v = 0
motor_passos.setSpeed(velocidade); //Define velocidade do motor já mapeada
Serial.println(velocidade);

motor_passos.step(1); //Faz apenas 1 step por ciclo para evitar travamentos

} //Fim LOOP

