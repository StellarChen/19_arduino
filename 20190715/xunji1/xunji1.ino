#include<Servo.h>
void stop();
void forward();
void left();
void mid();
void right();
void back();
 
int _ABVAR_1_a ;
int _ABVAR_2_b ;
int _ABVAR_3_c ;
int _ABVAR_4_d ;

void setup() 
{
  
  pinMode( 14, INPUT);
  pinMode( 10, OUTPUT);
  pinMode( 6, OUTPUT);
  pinMode( 5, OUTPUT);
  pinMode( 9, OUTPUT);
 
  forward();
  delay(300);
//   Serial.begin(9600);
//  while(Serial.available() > 0)
//  { Serial.read();}
}







void loop() {
  
  
  _ABVAR_1_a =350 ;
  _ABVAR_2_b = 350 ;
  _ABVAR_3_c = 150 ;
  _ABVAR_4_d = 150 ;
  
//  if (( ( ( analogRead(16) ) < ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) < ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) ) && ( ( analogRead(19) ) > ( _ABVAR_4_d ) ) ) ) ))
//  {
//    forward();
//  }
//  if (( ( ( analogRead(16) ) < ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) > ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) ) && ( ( analogRead(19) ) > ( _ABVAR_4_d ) ) ) ) ))
//  {
//    left();
//  }
//  if (( ( ( analogRead(16) ) > ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) < ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) ) && ( ( analogRead(19) ) > ( _ABVAR_4_d ) ) ) ) ))
//  {
//    right();
//  }
//    if (( ( ( analogRead(16) ) > ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) > ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) ) && ( ( analogRead(19) ) > ( _ABVAR_4_d ) ) ) ) ))
//  {
//      forward();
//  }



 if (( ( ( analogRead(16) ) < ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) < ( _ABVAR_2_b ) ))))
  {
    forward();
  }
  if (( ( ( analogRead(16) ) < ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) > ( _ABVAR_2_b ) ) ) ) )
  {
    left();
  }
  if (( ( ( analogRead(16) ) > ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) < ( _ABVAR_2_b ) )  ) ) ) 
  {
    right();
  }
    if (( ( ( analogRead(16) ) > ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) > ( _ABVAR_2_b ) ) ) ) ) 
  {
      forward();
  }
  
}


void stop()
{
  analogWrite(5 , 255);
  analogWrite(6 , 255);
  analogWrite(9 , 255);
  analogWrite(10 , 255);
}

void right()
{
  analogWrite(5 , 255);
  analogWrite(6 , 0);
  analogWrite(9 , 0);
  analogWrite(10 , 255);
}

void forward()
{
  analogWrite(5 , 0);
  analogWrite(6 , 255);
  analogWrite(9 , 0);
  analogWrite(10 , 255);
}

void left()
{
  analogWrite(5 , 0);
  analogWrite(6 , 255);
  analogWrite(9 , 255);
  analogWrite(10 , 0);
}



void back()
{
  analogWrite(5 , 255);
  analogWrite(6 , 0);
  analogWrite(9 , 255);
  analogWrite(10 , 0);
}


  
void mid()
{
//   stop();                 //挡板1
//   delay(500);
//   back(); 
//   delay(200);
//   left();
//   delay(900);
//   forward();
//   delay(2200);
//   right();
//   delay(1400);
//   forward();
//   delay(2200);             
   ///////////////////////////////////////////
//   stop();                   //挡板2
//   delay(500);
//   back(); 
//   delay(200);
//   left();
//   delay(900);
//   forward();
//   delay(2200);
//   right();
//   delay(1400);
//   forward();
//   delay(1500);             
  ///////////////////////////////////////////
   stop();                 //挡板3
   delay(500);
   back(); 
   delay(200);
   left();
   delay(900);
   forward();
   delay(1000);
   right();
   delay(1100);
   forward();
   delay(1700);
   left();
   delay(800);
   forward();
   delay(200);
}
