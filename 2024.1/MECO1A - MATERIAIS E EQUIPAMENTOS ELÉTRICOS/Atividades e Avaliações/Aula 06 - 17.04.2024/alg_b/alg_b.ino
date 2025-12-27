//VARIAVEIS
int passo;
int laco;
int intervalo;

void setup(){
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  intervalo = 500; //INTERVALO ORIGINAL
  passo = 1; // SETA O PASSO PARA 1, PARA RECOMEÇAR A SEQUENCIA
  while(passo <= 8){ 
    laco = 0; //SETA O LAÇO PARA 0 E RECOMEÇA AS SAIDAS
    while(laco < passo){
        digitalWrite(13, HIGH);
        delay(intervalo);
        digitalWrite(13, LOW);
        delay(intervalo);
        laco++; //SOMA AO LAÇO PARA CONCLUIR O LAÇO NO Nº CORRETO
    }

    intervalo = intervalo / 2; //REDUZ  O INTERVALO PARA A METADE
    passo *= 2; //DOBRA O Nº DE PASSOS
  }
  //FINAL
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);

}