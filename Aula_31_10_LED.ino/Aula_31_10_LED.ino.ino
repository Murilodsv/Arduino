
int myPins[] = {2, 4, 6, 8, 10};

void setup() {
  
  Serial.begin(9600);

  int i;

  for(i = 0; i < 5; i++){

  pinMode(myPins[i], OUTPUT); 
        
  }

}

void loop() {

  int i;

  for(i = 0; i <32; i++){
    
    Serial.print(i);
    Serial.print("\t");
    Serial.print(i,BIN);
    Serial.print("\t");
    
    digitalWrite(myPins[0],bitRead(i,0));
    digitalWrite(myPins[1],bitRead(i,1));
    digitalWrite(myPins[2],bitRead(i,2));
    digitalWrite(myPins[3],bitRead(i,3));
    digitalWrite(myPins[4],bitRead(i,4));

    Serial.print(bitRead(i,4));
    Serial.print(bitRead(i,3));
    Serial.print(bitRead(i,2));
    Serial.print(bitRead(i,1));
    Serial.println(bitRead(i,0));

    delay(1000);
    
    }

}
