// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 

char incomingByte[100];	// para el byte leido
int numchar=0;

int posServoGlobal = 0;

void setup() {
  Serial.begin(9600);	// abre el puerto serie a 9600 bps
  Serial.println("Funcionamiento de un servo de 0 a 180 grados ");
  Serial.println("Para enviar un dato, escriba el numero y finalize con '.'");
  Serial.println("Ejemplo: Para mover 45 grados, escriba '45.' ");
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte[numchar] = Serial.read();
    numchar++;
    delay(10);
  }
  
 
  for (int i = 0; i < sizeof(incomingByte); i++)
  {
    int numincoming=0;
    if(incomingByte[i] == '.')
    {
      numincoming=atoi(incomingByte);
      posServoGlobal=posServoGlobal+numincoming;
      Serial.print("Incoming: ");
      Serial.println(numincoming);
      
      Serial.print("Global: ");
      Serial.println(posServoGlobal);
      
      memset(incomingByte, 0, sizeof(incomingByte));	//Borra cadena
      numchar=0;
    }
  }

  myservo.write(posServoGlobal);              // tell servo to go to position in variable 'pos' 
  delay(10);                       // waits 15ms for the servo to reach the position 
}
