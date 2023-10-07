//Declaring pin connections
const int sensorPin = A0;
const int highA = 5;
const int highB = 6;
const int lowA = 7;
const int lowB = 8;
const int grnd = 13;
const int grnd2 = 12;

//photodiode value holder
int sensorValue = 0;

void setup()
{
  pinMode(highA, OUTPUT);
  pinMode(highB, OUTPUT);
  pinMode(lowA, OUTPUT);
  pinMode(lowB, OUTPUT);
  pinMode(grnd, OUTPUT);
  pinMode(grnd2, OUTPUT);
  Serial.begin(9600);
}

void loop ()
{
  //read the value from photo diode:
  digitalWrite (grnd,LOW);
  digitalWrite (grnd2,LOW);
  sensorValue = analogRead(sensorPin);
  digitalWrite (lowA,HIGH);
  digitalWrite (lowB,HIGH);
  // print sensor value on serial monitor:
  Serial.println(sensorValue);
  // turns off led when sensor value above 350
  if (sensorValue >= 350){
    digitalWrite(highA, LOW);
    digitalWrite(highB, LOW);
    delay(1200);
  }
  // turn the high LEDs on when sensorValue is negligible:
  if (sensorValue <= 95){
    digitalWrite(highA, HIGH);
    digitalWrite(highB, HIGH);
  }
}
