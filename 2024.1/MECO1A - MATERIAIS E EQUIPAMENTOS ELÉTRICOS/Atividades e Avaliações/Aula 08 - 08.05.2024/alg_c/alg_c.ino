//Declarando as variaveis:
#define LEDG 13
#define BUTTON 2
bool estado_button = 0, estado_button_anterior = 0, estado_verde = 0;
unsigned long tempo_atual = 0, tempo_anterior = 0;

void setup(){

  //Definindo as pinagens:
  pinMode(LEDG, OUTPUT);
  pinMode(BUTTON, INPUT);

} //Fim SETUP


void loop(){

  tempo_atual = millis();
  estado_button = digitalRead(BUTTON); //Recebe o estado atual do botão 
  
  if(estado_button == 1 && estado_button_anterior == 0 && (tempo_atual - tempo_anterior) > 200){ //Coreção do efeito bounce pelo aguardo de 200 mS

    estado_verde =! estado_verde;
    digitalWrite(LEDG, estado_verde);
  
    tempo_anterior = tempo_atual;

  } //Fim if

  estado_button_anterior = estado_button;

} //Fim VOID
