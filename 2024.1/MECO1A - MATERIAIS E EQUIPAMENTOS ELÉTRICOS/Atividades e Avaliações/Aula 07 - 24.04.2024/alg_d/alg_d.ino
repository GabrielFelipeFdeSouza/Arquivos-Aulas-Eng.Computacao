//Declarando as variaveis:
#define led1 12
#define led2 13
#define BUTTON 2
int estado = 0;
int estado_anterior = 0;
int mudar_led, estado_led1 = 1, estado_led2;

void setup() {
pinMode(led2, OUTPUT);
pinMode(led1,OUTPUT);
pinMode(BUTTON,OUTPUT);
}

void loop() {

mudar_led = 0;
estado = digitalRead(BUTTON);

//Verefica se o estado atual é 1 e anterior é 0
if(estado == HIGH && estado_anterior == LOW){
estado = digitalRead(BUTTON);

//Reverifica se o botão ainda está precionado
if(estado == HIGH){

//Faz a troca do led acesso
mudar_led = estado_led1;
estado_led1 = estado_led2;
estado_led2 = mudar_led;
digitalWrite(led1, estado_led1);
digitalWrite(led2, estado_led2);


} } //Fim de ambos os ifs
estado_anterior = estado; //Passa o estado anterior ao atual paraevitar loops ao segurar o botão
}