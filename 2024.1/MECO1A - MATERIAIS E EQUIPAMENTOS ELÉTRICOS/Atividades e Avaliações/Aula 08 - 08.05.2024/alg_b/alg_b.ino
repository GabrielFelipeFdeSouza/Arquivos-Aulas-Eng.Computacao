//Declarando as variaveis:
#define LEDG 12
#define LEDR 13
#define BUTTON 2
bool estado_vermelho = 0, estado_button = 0, estado_verde = 0, estado_button_anterior = 0;
unsigned long tempo_atual = 0, tempo_anterior = 0;

void setup(){

  //Definindo as pinagens:
  pinMode(LEDG, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(BUTTON, INPUT);

} //Fim SETUP

void desliga(){ //Função para desligar o led vermelho

    estado_vermelho = 0; //Puxa para LOW o estado_vermelho
    digitalWrite(LEDR, estado_vermelho);

} //Fim DESLIGA

void led(){ //Função para trocar estado led vermelho pelo botão

  estado_button = digitalRead(BUTTON);
  
  if(estado_button == 1 && estado_button_anterior == 0){

    estado_vermelho =! estado_vermelho;
    digitalWrite(LEDR, estado_vermelho);

  } //Fim if

  estado_button_anterior = estado_button;
  
} //Fim LED



void loop(){

  tempo_atual = millis();
  estado_button = digitalRead(BUTTON); //Recebe o estado atual do botão 

  if((tempo_atual - tempo_anterior) > 1000){
  
    estado_verde =! estado_verde;
    digitalWrite(LEDG, estado_verde);
    desliga(); //Chama a função desliga a cada troca do estado do led verde

    tempo_anterior = tempo_atual;

  } //Fim if

  attachInterrupt(digitalPinToInterrupt(BUTTON), led, CHANGE); //A cada troca de estado do botão chama a função do botão 

} //Fim LOOP
