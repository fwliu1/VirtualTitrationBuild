void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //initalize serial communication at 9600 bits per second

}

void loop() {
  // put your main code here, to run repeatedly:
int SensorValue = analogRead(A0); //read input at analog pin A0

Serial.println(SensorValue); //prints the value of the variable SensorValue

delay(20); //delay in between reads for stability

}
