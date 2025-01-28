const int ledPin1 = 2;
const int ledPin2 = 3;
const int ledPin3 = 4;
const int ledPin4 = 5;
const int ledPin5 = 6;
const int potPin = A0;
int potValue = 5000;
int delayValue = 5000;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  delayValue = map(potValue, 0, 1023, 0, 5000);
  //Acende o led 1
  digitalWrite(ledPin1, HIGH);
  Serial.println("Led 1 On");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);
    
  //Apaga o led
  digitalWrite(ledPin1, LOW);
  Serial.println("Led 1 Off");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);

  //Acende o led 2
  digitalWrite(ledPin2, HIGH);
  Serial.println("Led 2 On");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);
    
  //Apaga o led
  digitalWrite(ledPin2, LOW);
  Serial.println("Led 2 Off");

  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);

  //Acende o led 3
  digitalWrite(ledPin3, HIGH);
  Serial.println("Led 3 On");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);
    
  //Apaga o led
  digitalWrite(ledPin3, LOW);
  Serial.println("Led 3 Off");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);

  //Acende o led 4
  digitalWrite(ledPin4, HIGH);
  Serial.println("Led 4 On");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);
    
  //Apaga o led
  digitalWrite(ledPin4, LOW);
  Serial.println("Led 4 Off");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);

  //Acende o led 5
  digitalWrite(ledPin5, HIGH);
  Serial.println("Led 5 On");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);
    
  //Apaga o led
  digitalWrite(ledPin5, LOW);
  Serial.println("Led 5 Off");
    
  //Aguarda intervalo de tempo em milissegundos
 delay(delayValue);

}