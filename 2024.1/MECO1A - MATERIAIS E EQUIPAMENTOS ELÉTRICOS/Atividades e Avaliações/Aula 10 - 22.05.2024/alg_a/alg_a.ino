//Declarando variaveis:
#define led1 11
int ciclo = 0, potencia_led = 0, saida = 0;

void setup(){
  Serial.begin(9600); //Iniciando a comunicação serial
  pinMode(led1, OUTPUT);

} //Fim SETUP

void loop(){

  for(int i = 0; i < 1000; i++, potencia_led += 3){

    saida = map(potencia_led, 0, 3000, 0, 255); //Mapeia a saida da porcentagem
    analogWrite(led1, saida);

    delay(1); // 1 ms para 1000 vezes, portanto 1 segundo
  } //Fim for contador para evitar usar millis


  for(int i = 0; i < 3000; i++, potencia_led -= 1){

    saida = map(potencia_led, 0, 3000, 0, 255); //Mapeia a saida da porcentagem
    analogWrite(led1, saida);

    delay(1); // 1 ms para 3000 vezes, portanto 3 segundo
  } //Fim for contador para evitar usar millis

} //Fim VOID

/* Relembrando que esse tempo será apoximado, afinal as funções dentro do for devem ser "instantaneas" 
para que seja exato, ou seja, adicionar comandos que sejam processualmente pesados, "desconfigura" o tempo alinhado */