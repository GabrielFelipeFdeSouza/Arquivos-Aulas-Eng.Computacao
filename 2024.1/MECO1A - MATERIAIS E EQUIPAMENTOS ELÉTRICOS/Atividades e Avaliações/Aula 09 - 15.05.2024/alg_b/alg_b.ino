//Declarando variaveis:
#define led5 13
#define led4 12
#define led3 11
#define led2 10
#define led1 9
#define pino_ldr A0
int valor_ldr = 0;

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

} //Fim SETUP

void loop(){
  valor_ldr = analogRead(pino_ldr); //Le o valor do LDR

  int porcentagem = map(valor_ldr,260,900,0,100); //Mapeia e converte o valor do LDR para porcentagem (Usa de calibrações iniciais)

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