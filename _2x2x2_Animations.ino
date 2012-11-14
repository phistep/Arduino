void setup() {
  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT);  
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);    
  pinMode(7, OUTPUT);    
}

void loop() {
  for(int k = 0; k<5; k++){
    for(int i = 0; i<=50; i++){
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
  
      digitalWrite(5, LOW);
      digitalWrite(2, HIGH);
      delay(1);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(1);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(1);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(1);
    }
    digitalWrite(5, LOW);
 
    for(int i = 0; i<=50; i++){
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
  
      digitalWrite(5, LOW);
      digitalWrite(2, HIGH);
      delay(1);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(1);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      delay(1);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(1);
    }
    digitalWrite(5, LOW);
  }

  for(int j = 0; j<5; j++){
    for(int i = 0; i<=50; i++){
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
  
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
      delay(1);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(1);
  
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
  
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
      delay(1);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(1);
    } 
    digitalWrite(3, LOW);


  for(int i = 0; i<=50; i++){
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
  
      digitalWrite(5, LOW);
      digitalWrite(4, HIGH);
      delay(1);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(1);
  
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
  
      digitalWrite(5, LOW);
      digitalWrite(4, HIGH);
      delay(1);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(1);
    } 
    digitalWrite(5, LOW);
  }

}
