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
  int velavance=100;
  int MAXVEL=150;
  
  digitalWrite(pinsentidomotor1,LOW);  
  digitalWrite(pinsentidomotor2,LOW);    
  analogWrite(pinvelmotor1, velavance);   //PWM Speed Control
  analogWrite(pinvelmotor2, velavance);   //PWM Speed Control
  
  delay(5000); 
  
  
  digitalWrite(pinsentidomotor1,HIGH);  
  digitalWrite(pinsentidomotor2,LOW);    
  analogWrite(pinvelmotor1, velavance);   //PWM Speed Control
  analogWrite(pinvelmotor2, velavance);   //PWM Speed Control
  
  delay(5000); 
}
