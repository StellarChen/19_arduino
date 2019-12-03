 #include<Servo.h>

  int _ABVAR_1_a ;
  int _ABVAR_2_b ;
  int _ABVAR_3_c ;
  int _ABVAR_4_d ;
  int _ABVAR_1_i = 0;
  
  
  
  Servo servo_pin_3;
  Servo servo_pin_4;
  Servo servo_pin_7;
  Servo servo_pin_8;
  Servo servo_pin_11;
  Servo servo_pin_12;
  
  void setup() 
  {
    servo_pin_3.attach(3);
    servo_pin_4.attach(4);
    servo_pin_7.attach(7);
    servo_pin_8.attach(8);
    servo_pin_11.attach(11);
    servo_pin_12.attach(12);
 
  }
 void loop()
  {
   
    servo_pin_3.write( 158 );
    servo_pin_4.write( 118);
    servo_pin_7.write( 80 );
    servo_pin_8.write( 155);
    servo_pin_11.write( 60 );
    servo_pin_12.write( 20 );
 }
 
  
  
