#define sensor 2          //Sensor pada pin D2
#define pump 8

void setup() {
  pinMode(sensor, INPUT);   //Setting I/O
  pinMode(pump, OUTPUT);
  digitalWrite(pump, HIGH);
}

void loop() {
  if(digitalRead(sensor) == LOW){     //Jika sensor bernilai LOW, maka
    digitalWrite(pump, LOW);
  }
  else{                               //Jika sensor bernilai HIGH, maka
    digitalWrite(pump, HIGH);
  }
}
