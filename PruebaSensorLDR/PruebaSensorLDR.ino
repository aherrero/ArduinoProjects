int led = 13;
int actuador = 12;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(led, OUTPUT);    
  pinMode(actuador, OUTPUT);     
 
  digitalWrite(actuador, HIGH); 
  delay(1000); 
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  double sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(10);        // delay in between reads for stability
  
  if (sensorValue<65)
  {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
     digitalWrite(actuador, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else
  {
     digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
     digitalWrite(actuador, LOW);    // turn the LED off by making the voltage LOW
  }
}
