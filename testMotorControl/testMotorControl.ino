//Arduino PWM Speed Control：
int pinsentidomotor1=4;
int pinvelmotor1=5;
int pinsentidomotor2=9;
int pinvelmotor2=10;
 
void setup() 
{ 
    pinMode(pinsentidomotor1, OUTPUT);   
    pinMode(pinsentidomotor2, OUTPUT);   
} 
 
void loop() 
{ 
  
  int value;
  boolean sentidoavance=true;
  
  if(sentidoavance)
  { 
    digitalWrite(pinsentidomotor1,LOW);  
 digitalWrite(pinsentidomotor2,LOW);    
    for(value = 0 ; value <= 255; value+=5) 
      { 
        analogWrite(pinvelmotor1, value);   //PWM Speed Control
        analogWrite(pinvelmotor2, value);   //PWM Speed Control
        delay(500); 
    } 
  }
  
  else
  { 
    digitalWrite(pinsentidomotor1,HIGH);  
    digitalWrite(pinsentidomotor2,HIGH);      
    for(value = 255 ; value > 0; value-=5) 
      { 
        analogWrite(pinvelmotor1, value);   //PWM Speed Control
        analogWrite(pinvelmotor2, value);   //PWM Speed Control
        delay(300); 
    } 
  }
  
 
  
  analogWrite(pinvelmotor1, 0);   //PWM Speed Control
  analogWrite(pinvelmotor2, 0);   //PWM Speed Control
  delay(3000); 
  
  
}
