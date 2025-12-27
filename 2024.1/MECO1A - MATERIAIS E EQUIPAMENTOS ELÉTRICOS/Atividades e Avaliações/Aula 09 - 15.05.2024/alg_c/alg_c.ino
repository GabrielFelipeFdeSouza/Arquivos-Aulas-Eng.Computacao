//Declarando variaveis:
#define led5 13
#define led4 12
#define led3 11
#define led2 10
#define led1 9
#define pino_pot A0
int valor_pot = 0;
int vetor_valores[30]; //Criando o vetor que amazena os ultimos 30 valores
int media = 0, ponto = 0; //Criando a media e o ponto de troca do contador de medias

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

} //Fim SETUP

void loop(){
  valor_pot = analogRead(pino_pot); //Le o valor do potenciometro

    vetor_valores[ponto] = valor_pot; //Armazena o valor lido  em alguma posição do vetor

    //Garante que os 30 valores sejam os mais atuais:
    ponto++; 

    if(ponto >= 30)
      ponto = 0; 

  for(int i = 0; i < 30; i++){

    media += vetor_valores[i]; 

  }
  
    media = media / 30;

  int porcentagem = map(media,0,950,0,100); //Mapeia e converte o valor das medias para porcentagem

  //LEDS: 

  if(porcentagem > 0 )
    digitalWrite(led5, HIGH);
  else
    digitalWrite(led5, LOW);

  if(porcentagem > 20 )
    digitalWrite(led4, HIGH);
  else
    digitalWrite(led4, LOW);

  if(porcentagem > 40 )
    digitalWrite(led3, HIGH);
  else
    digitalWrite(led3, LOW);

  if(porcentagem > 60 )
    digitalWrite(led2, HIGH);
  else
    digitalWrite(led2, LOW);

  if(porcentagem > 80 )
    digitalWrite(led1, HIGH);
  else
    digitalWrite(led1, LOW);

  Serial.println(porcentagem); //Exibição da porcentagem na serial
  delay(100);

} //Fim VOID