#define led1 13
#define led2 12
#define BUTTON 2
int estado = 0;

void setup() {
  pinMode(led2, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(BUTTON,OUTPUT);

}

void loop() {
 estado = digitalRead(BUTTON);

  if (estado == HIGH)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
  
}