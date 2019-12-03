 #include<Servo.h>
  void stop();
  void forward();
  void left();
  void mid();
  void right();
  void cyx();
  void zhua1();
  void zhua2();
  void fang1();
  void fang2();
  void sao1();
  void sao2();
  void scan1();
  void scan2();
  void scan3();
  void sao3();
  void sao4();
  void sao5();
  void huiqu();
  
  int  jishu=0;
  int a=0;
  int b=0;
  int c=0;
  int x=0;
  int y=0;
  int z=0;
  int j=0;
  
  int tim=30;
  int flag=0;
  int count=0;
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
     pinMode( 2, INPUT); 
    pinMode( 13, INPUT);
    pinMode( 14, INPUT); 
    pinMode( 19, INPUT);
    
    pinMode( 15, INPUT); 
   
    pinMode( 10, OUTPUT);
    pinMode( 6, OUTPUT);
    pinMode( 5, OUTPUT);
    pinMode( 9, OUTPUT);
    servo_pin_3.attach(3);
    servo_pin_4.attach(4);
    servo_pin_7.attach(7);
    servo_pin_8.attach(8);
    servo_pin_11.attach(11);
    servo_pin_12.attach(12);
    servo_pin_3.write( 97 );
    servo_pin_4.write( 130);
    servo_pin_7.write( 50 );
    servo_pin_8.write( 170);
    servo_pin_11.write( 60 );
    servo_pin_12.write( 60 );
    forward();
    delay( 300 );

}

void loop() {
  
    
    _ABVAR_1_a = 400 ;
    _ABVAR_2_b = 400 ;
    _ABVAR_3_c = 120 ;
    
  
    
   
if (( ( ( analogRead(16) ) < ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) < ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) ) ) ) ))
  {
    forward();
  }
if (( ( ( analogRead(16) ) < ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) > ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) ) ) )))
  {
    left();
  }
if (( ( ( analogRead(16) ) > ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) < ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) )  ))))
  {
    right();
  }
if (( ( ( analogRead(16) ) > ( _ABVAR_1_a ) ) && ( ( ( analogRead(17) ) > ( _ABVAR_2_b ) ) && ( ( ( analogRead(18) ) > ( _ABVAR_3_c ) )  ))))
  {
    forward();
  }
   if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 0 ) //上坡前横线
    {
        stop();
        delay(500);
        forward();
        delay(1800);
     jishu = jishu + 1;     
  
    }
   
     if  ( ( analogRead(18) ) <(  _ABVAR_3_c)&&jishu == 1) //上坡第一条横线
    { 
      stop();
      delay(200);
      forward();
      delay(150);
      stop();
      delay(100);  
     
      sao5();
      delay(5000);
      scan1();
      
      sao2();
      delay(5000);
      scan2();
           
      jishu = jishu + 1;
    }
   if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 2 ) //上坡第二条横线
    {
      stop();
      delay(150);
      forward();
      delay(150);
      stop();
      delay(100);  
     
      sao1();
      delay(5000);
      scan1();
      
    if(j<3){
      sao2();
      delay(5000);
      scan2();
    }
    else 
    { 
      cyx();  
    }
       
        jishu = jishu + 1;
    }
   
    if  ( ( analogRead(18) ) <(_ABVAR_3_c)&&jishu == 3 ) //上坡第三条横线
    {
    
      stop();
      delay(200);
      forward();
      delay(150);
      stop();
      delay(100);  
     if(j<3){
      sao1();
      delay(5000);
      scan1();
     
      sao2();
      delay(5000);
      scan2();
      }
     
      
      cyx();  
       
      jishu = jishu + 1;
     }
    
      if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 4 ) //避障起始点横线
    {
      
      stop();
      delay(500);
      left();
      delay(100);
      forward();
      delay(1000);
      jishu = jishu + 1;
      mid();
      jishu=jishu+1;
   }
   
  if( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 6 ) //走出避障区循迹
    {
      stop();
      delay(1000);
      forward();
      delay(600);
      left();
      delay(1000);
      jishu=jishu+1;
    }
    if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 7 ) //下料1
    {
      stop();
      delay(500);
      forward();
      delay(200);
      jishu = jishu + 1;
    }
     if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 8 ) //下料2
    {
      stop();
      delay(500);
      forward();
      delay(200);
      jishu = jishu + 1;
    }
        if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 9 ) //下料3
    {
      stop();
      delay(500);

      
      forward();
      delay(200);
      jishu = jishu + 1;
    }
     if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 10 ) //下料4
    {
      stop();
      delay(500);
      forward();
      delay(150);
      stop();
      delay(100);
      
      
      sao3();
      delay(5000);
      scan3();     
      forward();
      delay(200); 
        
      jishu = jishu + 1;
    }
     if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 11 ) //下料5
    {
      stop();
      delay(500);
      forward();
      delay(150);
      stop();
      delay(100);
      
     
      sao4();
      delay(5000);
      scan3();     
      forward();
      delay(200); 
            
      jishu = jishu + 1;
    }
     if  ( ( analogRead(18) ) <( _ABVAR_3_c )&&jishu == 12 ) //下料6
    {
      stop();
      delay(500);
      forward();
      delay(150);
      stop();
      delay(100);
      
     
      sao4();
      delay(5000);
      scan3();     
      forward();
      delay(200); 
            
      jishu = jishu + 1;
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
    analogWrite(6 , 255);
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
    analogWrite(10 , 255);
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
  stop();
  delay(1000);
  left();
  delay(800);
  forward();
  delay(1400);
  right();
  delay(1600);
 
 } 
void zhua1 () //抓下 
{
     ////////////////////////////
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 5 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 80 + _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 55 ); _ABVAR_1_i++ )
  {
    servo_pin_11.write( ( 60 + _ABVAR_1_i ) );
    delay( 10 );
  }
  ///////////////////////
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 155 + _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 10   ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 85 - _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 32 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 118+ _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 158- _ABVAR_1_i ) );
    delay( tim );
  }
  ////////////////////////////
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 5 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 150+ _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 75 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 170 - _ABVAR_1_i ) );
    delay( tim );
  }
  
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 50 ); _ABVAR_1_i++ )
  {
    servo_pin_11.write( ( 110- _ABVAR_1_i ) );
    delay( 10 );
  }
 for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 75 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 95+ _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 25 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 75- _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 155- _ABVAR_1_i ) );
    delay( tim );
  }
 }
void zhua2()//抓上
{
  
 
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 55 ); _ABVAR_1_i++ )
  {
    servo_pin_11.write( ( 60 + _ABVAR_1_i ) );
    delay( 10 );
  }
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 20 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 125 + _ABVAR_1_i ) );
    delay( tim );
  }
  ////////////////////////
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 5 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 35 - _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 45 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 105 + _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 158- _ABVAR_1_i ) );
    delay( tim );
  }
  ///////////////////////////////
    
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 5 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 150+ _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 50 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 145 - _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 45 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 30+ _ABVAR_1_i ) );
    delay( tim );
  }
   
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 50 ); _ABVAR_1_i++ )
  {
    servo_pin_11.write( ( 110- _ABVAR_1_i ) );
    delay( 10 );
  }
 for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 75 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 95+ _ABVAR_1_i ) );
    delay( tim );
  } 
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 25 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 75- _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 155- _ABVAR_1_i ) );
    delay( tim );
  }
  
}
void fang1()     //下料
{
  
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 5); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 140+_ABVAR_1_i ) );
    delay( tim );
  }
  
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 50+_ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 75); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 170 - _ABVAR_1_i ) );
    delay( tim );
  }
 
 
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 55 ); _ABVAR_1_i++ )
  {
    servo_pin_11.write( ( 60+ _ABVAR_1_i ) );
    delay( 10 );
  }
 
 ////////////////////////////////////////
   
     for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 20); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 95 + _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 57 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 100+ _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 45 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 65-_ABVAR_1_i ) );
     servo_pin_4.write( ( 150- _ABVAR_1_i ) );
    delay( tim );
  }
  
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 50 ); _ABVAR_1_i++ )
  {
    servo_pin_11.write( ( 110-_ABVAR_1_i ) );
    delay( 10 );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 25); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 115 + _ABVAR_1_i ) );
    
    servo_pin_7.write( ( 25 + _ABVAR_1_i ) );
    
    servo_pin_4.write( ( 105 + _ABVAR_1_i ) );
    delay(tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 30); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 140 + _ABVAR_1_i ) );
    delay( tim );
  }
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 10); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 130 + _ABVAR_1_i ) );
    delay(tim );
  }
   
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= (61); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 158 -_ABVAR_1_i ) );
    delay( tim );
  }
}
void scan1()//判断下是什么
{
 
  if ( ( digitalRead(19) ) == ( 1 )&&( digitalRead(14) ) == ( 0 )&&( digitalRead(13) ) == ( 1 )&&a==0)//6
 {
  servo_pin_12.write( 20 );
  zhua1();
  a=1;
  j++;
 
 }

  else  if ( ( digitalRead(19) ) == ( 0 )&&( digitalRead(14) ) == ( 1 )&&( digitalRead(13) ) == ( 0 )&&b==0)//N
 {
  servo_pin_12.write( 100 );
  zhua1();
  b=1;
  j++;
  }

  else if ( ( digitalRead(19) ) == ( 0 )&&( digitalRead(14) ) == ( 1 )&&( digitalRead(13) ) == ( 1 )&&c==0)//三角
 {
  servo_pin_12.write( 179 );
  zhua1();
  c=1;
  j++;
    }
  
   else 
  {
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 22 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 118+ _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 30 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 80- _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 155+ _ABVAR_1_i ) );
    delay( tim);
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 58 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 158 - _ABVAR_1_i ) );
    delay( tim );
  }
}
}
void scan2()//判断上是什么
{
  if ( ( digitalRead(19) ) == ( 1 )&&( digitalRead(14) ) == ( 0 )&&( digitalRead(13) ) == ( 1 )&&a==0)//6
 { 
   servo_pin_12.write( 20 );
   zhua2();
   a=1;
   j++;
  }

   else if ( ( digitalRead(19) ) == ( 0 )&&( digitalRead(14) ) == ( 1 )&&( digitalRead(13) ) == ( 0 )&&b==0)//N
 {
   servo_pin_12.write( 100 );
   zhua2();
   b=1;
   j++;
  }


 else if ( ( digitalRead(19) ) == ( 0 )&&( digitalRead(14) ) == ( 1 )&&( digitalRead(13) ) == ( 1 )&&c==0)//三角
 { 
  servo_pin_12.write( 179 );
  zhua2();
  c=1;
  j++;
  }
  
  else 
  {
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 30 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 110 + _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 35 + _ABVAR_1_i ) );
    delay( tim );
  }
 for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 55); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 115 + _ABVAR_1_i ) );
    delay( tim );
  }
     for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 158- _ABVAR_1_i ) );
    delay( tim );
  }
//  }

}
}
void scan3()   //下料区判断
{          
  
  if ( ( digitalRead(19) ) == ( 1 )&&( digitalRead(14) ) == ( 0 )&&( digitalRead(13) ) == (1)&&x==0)//6
 { 
   huiqu();
   servo_pin_12.write( 20 );
  
   fang1();
   count++;
   x=1;
  }

   else if ( ( digitalRead(19) ) == ( 0 )&&( digitalRead(14) ) == ( 1 )&&( digitalRead(13) ) == ( 0 )&&y==0)//N
 {
   huiqu();
   servo_pin_12.write( 100 );
   
   fang1();
   count++;
   y=1;
  }


 else if ( ( digitalRead(19) ) == ( 0 )&&( digitalRead(14) ) == ( 1 )&&( digitalRead(13) ) == ( 1 )&&z==0)//三角
 {
  huiqu(); 
  servo_pin_12.write( 179 );
  fang1();
  count++;
  z=1;
  }
  
  else 
  {
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 10); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 130+ _ABVAR_1_i ) );
    delay( tim );
  }  
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= (40 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 90- _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 155+ _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 158 - _ABVAR_1_i ) );
    delay( tim);
  }
  }

  }  
void sao1()//识别下
{
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 30 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 140+ _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 30 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 50 + _ABVAR_1_i ) );
    delay( tim );
  }
  
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 97 + _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 52 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 170- _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 170- _ABVAR_1_i ) );
    delay( tim );
  } 
}
void sao2()//识别上
{
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 97+ _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 50 - _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 30 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 140 - _ABVAR_1_i ) );
    delay( tim );
  }
  
 for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 55); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 170 - _ABVAR_1_i ) );
    delay( tim );
  }
}
void sao3()//第一条线识别下料
{
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15); _ABVAR_1_i++ )
  {
    servo_pin_4.write( (125+ _ABVAR_1_i ) );
    delay( tim );
  }
     for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 97+ _ABVAR_1_i ) );
    delay( tim);
  }
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 40); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 50+_ABVAR_1_i ) );
    delay(tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 10); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 140- _ABVAR_1_i ) );
    delay( tim);
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 170- _ABVAR_1_i ) );
    delay( tim);
  }
  }
void sao4()//后面两条识别下料
{
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 58 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 100+ _ABVAR_1_i ) );
    delay( tim );
  }
    for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 40); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 50+_ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 10); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 140- _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 170- _ABVAR_1_i ) );
    delay( tim );
  }}
void cyx()//下坡RESET机械臂
{
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 140- _ABVAR_1_i ) );
    delay( tim );
  }
  } 
void huiqu()//识别放后进行
{
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 10); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 130+ _ABVAR_1_i ) );
    delay( tim );
  }  
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= (40 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 90- _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 155+ _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 158 - _ABVAR_1_i ) );
    delay( tim );
  }
    }
    void sao5()//识别下
{
  
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 61 ); _ABVAR_1_i++ )
  {
    servo_pin_3.write( ( 97 + _ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 30 ); _ABVAR_1_i++ )
  {
    servo_pin_7.write( ( 50 + _ABVAR_1_i ) );
    delay( tim );
  }
   for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 12 ); _ABVAR_1_i++ )
  {
    servo_pin_4.write( ( 130 -_ABVAR_1_i ) );
    delay( tim );
  }
  for (_ABVAR_1_i= 1; _ABVAR_1_i<= ( 15 ); _ABVAR_1_i++ )
  {
    servo_pin_8.write( ( 170- _ABVAR_1_i ) );
    delay( tim );
  } 
}
