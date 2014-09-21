//assignment 6

int ledPin=13;
int incomingByte = 0;   // for incoming serial data

void setup()
{
  pinMode(ledPin, OUTPUT); //LED pin as output
  Serial.begin(9600);
}

void loop()
{
  user_prompt();
  blinkLED(incomingByte);
  delay(2000);
  
}

int user_prompt()
{
    Serial.print("Enter the number of times for LED to blink.");
    //while(!Serial.available){
                      //wait for user input
     while(Serial.available() <=0){
                      //read the incoming byte:
    incomingByte = Serial.read();
    if((incomingByte >0) && (incomingByte<10)){
      return incomingByte;
    }
    else{
      Serial.print("Input outside of range, please enter a number between 0 and 9.");
    }
    }
}


void blinkLED(int numBlinks)
{
  for(int i=0; i<numBlinks; i+=1)
 {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
 }
}

