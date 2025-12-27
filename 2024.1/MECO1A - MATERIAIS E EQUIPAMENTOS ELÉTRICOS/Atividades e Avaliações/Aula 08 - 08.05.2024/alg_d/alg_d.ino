/*
======================================
JOGO DA TOUPEIRA:
DESENVOLVIDO POR: Gabriel Felipe F. de Souza
PROFESSOR RESPONSÁVEL: Prof. Dr. Daniel Prado de Campos
DATA: 09/05/2024
VERSÃO: 1.0
--------------------------------
OBSERVAÇÕES: Neste jogo o objetivo é clicar no botão enquanto o led verde está ativo, caso clique
antes, o led vermelho acende por 2 segundos e reseta o jogo, caso clique na marca, o led vermelho pisca
por 10 vezes de 50 milisSegundos, e caso você não faça nada, o led vermelho pisca 3 vezes assíncrono de 
100-500 milisSegundos, caso você segure o botão antes do led verde acender, e solte-o na sua ligação,
o jogo desconsidera este "clique". 
--------------------------------
FUTURAS MELHORIAS POSSÍVEIS: Pode ser testado outros métodos de compressão de código, a fim de deixá-lo
menor e mais  otimizado, além disso não fiz o uso da interrupção e poderia implementá-lo em alguma
parte do jogo, no quesito de redução de código!
======================================
*/

//Declarando as variáveis:
#define LEDG 13
#define LEDR 12
#define BUTTON 2
bool estado_button = 0, estado_button_anterior = 0, estado_verde = 0, estado_vermelho = 0;
//Foi separado em 2 tempos de timers para gerar randoms diferentes para ligar o led verde e para apagá-lo:
unsigned long tempo_atual = 0, tempo_anterior = 0, tempo_topeira = 0, tempo_anterior2 = 0 ,tempo_topeira2 = 0;

void reset(){ //Função que após ser chamada reseta os parametros do game e atribui novos valores random

    tempo_atual = millis();

    tempo_anterior = tempo_atual;
    tempo_anterior2 = tempo_atual;
    tempo_topeira = random(400, 1500);
    tempo_topeira2 = random(400, 1500) + random(250, 1500);

    estado_button_anterior = estado_button; //Atualiza o estado do botão afim de evitar o clique segurado

} //Fim RESET

void setup(){

  //Definindo as pinagens:
  pinMode(LEDG, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(BUTTON, INPUT);

  //Definindo primeiros valores do game:
  tempo_topeira = random(400, 1500);
  tempo_topeira2 = random(400, 1500) + random(250, 1500);;

} //Fim SETUP

void loop(){

  //Lendo o tempo e atualizando e lendo entrada botão:
  tempo_atual = millis();
  estado_button = digitalRead(BUTTON);
  

  if(tempo_atual - tempo_anterior > tempo_topeira && estado_verde == 0){ //If que acende o led verder

    estado_verde =! estado_verde;
    digitalWrite(LEDG, estado_verde);

  } //Fim if

  if(tempo_atual - tempo_anterior2 > tempo_topeira2 && estado_verde == 1){ //If que verifica o tempo e se o usuário não clicou no botão, acende vermelho + reset
    
    estado_verde =! estado_verde;
    digitalWrite(LEDG, estado_verde);

    for(int i = 0; i < 3; i++){ //Pisca de led

    digitalWrite(LEDR, HIGH);
    delay(200);
    digitalWrite(LEDR, LOW);  
    delay(500);

    } //Fim for

    reset(); //Chama a função reset

  } //Fim if

  if(estado_button == 1 && estado_verde == 0 && estado_button_anterior == 0){ //If que verifica se o botão foi pressionado antes do led verde estar acesso

    digitalWrite(LEDR, HIGH);
    delay(2000);
    digitalWrite(LEDR, LOW);

    reset(); //Chama a função reset
    
  } //Fim if

  if(estado_button == 1 && estado_verde == 1 && estado_button_anterior == 0){//If que verifica se o botão foi pressionado no tempo correto

  estado_verde =! estado_verde;
  digitalWrite(LEDG, estado_verde);

  for(int i = 0; i < 10; i++){ //Pisca de led

    digitalWrite(LEDR, HIGH);
    delay(50);
    digitalWrite(LEDR, LOW);  
    delay(50);

    } //Fim for

  reset(); //Chama a função reset

  } //Fim if

  estado_button_anterior = estado_button; //Atualiza o estado do borão afim de evitar o clique segurado

} //Fim LOOP
