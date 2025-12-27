//Declarando variaveis:
#define led1 9
#define ldr A1
int luminosidade = 0, saida = 0;

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial
  pinMode(led1, OUTPUT);
  
} //Fim SETUP

void loop(){
  luminosidade = analogRead(ldr); //Le a entrada do LDR

  saida = map(luminosidade, 10, 90, 0, 255); //Mapiea o valor de 0-1023 do LDR para 0-255 do pwm

  analogWrite(led1, saida); //saida no led

  Serial.println(luminosidade);
} //Fim VOID