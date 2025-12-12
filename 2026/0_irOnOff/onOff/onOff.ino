
 void setup(){
    pinMode(3, OUTPUT);
    pinMode(4,INPUT_PULLUP); 
    for(;;) if (digitalRead(4)==0){
      PORTD |= 8;
      delayMicroseconds(9);
      PORTD &= ~8;
      delayMicroseconds(17);
      }
 }
  
void loop(){};
