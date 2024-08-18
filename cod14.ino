const int pinoBotao = 15;    
const int ledPin =  2; 

void setup() {  
  pinMode(ledPin, OUTPUT);  
  pinMode(pinoBotao, INPUT_PULLUP);  
}
void loop(){  
  int botaoEstado = digitalRead(pinoBotao);
  if (botaoEstado != HIGH) {            
    digitalWrite(ledPin, HIGH);  
  } 
  else {   
    digitalWrite(ledPin, LOW); 
  }
}




