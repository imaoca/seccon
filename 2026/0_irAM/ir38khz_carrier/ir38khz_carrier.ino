int ledPin=3;

void on(int num){
    for(int i = 0; i < num; i++) {
      PORTD |= 8;
      delayMicroseconds(9);
      PORTD &= ~8;
      delayMicroseconds(17);
    }
  }
/*
void on(int num){
    for(int i = 0; i < num; i++) {
      PORTD = 0xff;
      delayMicroseconds(9);
      PORTD = 0x00;
      delayMicroseconds(17);
    }
  }
*/

 void setup(){
    pinMode(ledPin, OUTPUT); 
  }
/*
 void loop(){
  on(32);
  delayMicroseconds((17+9)*32);
  }
 */
/*
  void loop(){
  on(32);
  //0110-1001 0x69 'I'
  delayMicroseconds((17+9)*32); //0
  on(64);                       //11
  delayMicroseconds((17+9)*32); //0
  on(32);                       //1
  delayMicroseconds((17+9)*64); //00
  on(32);                       //1
  delay(500);
  }
*/
/*
  void loop(){
  on(32);
  //0100-0001 0x41 'A'
  delayMicroseconds((17+9)*32); //0
  on(32);                       //1
  delayMicroseconds((17+9)*32*5); //00000
  on(32);                       //1
  delay(200);
  }  

  void loop(){
  on(32);
  //0100-0001 0x41 'A'
  delayMicroseconds((17+9)*32); //0
  on(32);                       //1
  delayMicroseconds((17+9)*32*4); //00000
  on(64);                       //1
  delay(200);
  } 
*/

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
