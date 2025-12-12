void on(int num){
    for(int i = 0; i < num; i++) {
      PORTD |= 8;
      delayMicroseconds(9);
      PORTD &= ~8;
      delayMicroseconds(17);
    }
  }

 void setup(){
    pinMode(3, OUTPUT); 
  }

void loop(){
  on(32);
  //1000-0010 0x41 'A'
  //0111-1101
  delayMicroseconds((17+9)*32); //0
  on(32*5);                      //11111
  delayMicroseconds((17+9)*32); //0
  on(32);                       //1
  delay(200);
  } 
/*
void loop(){
  on(32*4);
  //1000-0010 0x41 'A'
  //0111-1101
  delayMicroseconds((17+9)*32*4); //0
  on(32*5*4);                      //11111
  delayMicroseconds((17+9)*32*4); //0
  on(32*4);                       //1
  delay(200);
  }
*/ 
