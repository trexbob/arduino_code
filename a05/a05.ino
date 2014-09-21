//assignment 5

int ledPin=13;
int incomingByte = 0;   // for incoming serial data
int x=0;

void setup()
{
  pinMode(ledPin, OUTPUT); //LED pin as output
  Serial.begin(9600);
  
}

void loop()
{
  blinkLED(1);
  delay(100);
  x+=1;
  while (Serial.available() >0){
    //read the incoming byte:
    incomingByte = Serial.read();
    //say what you got:
      
    Serial.print("The number of times the LED blinked: ");
    Serial.println(x);
    delay(5000);
    x=0;
  }
}

void blinkLED(int blinks)
{
  for(int i=0; i<blinks; i+=1)
 {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
 }
}


