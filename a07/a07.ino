//assignment 7

int ledPin=13;
int incomingByte = 0;   // for incoming serial data
int blinks=0;

void setup()
{
  pinMode(ledPin, OUTPUT); //LED pin as output
  Serial.begin(9600);
}

void loop()
{
  user_prompt();
  blinkLED(blinks);
  delay(2000);
}

int user_prompt()
{
      Serial.print("Enter the number of times for LED to blink.");
                       //while(!Serial.available()){
                      //wait for user input
     if(Serial.available())
     {
                      //read the incoming byte:
    
       char ch = Serial.read();
       if(isDigit(ch) ) //is this an ascii digit between 0 and 9?
      {  
        blinks = (ch - '0'); //ASCII value converted to numeric value
      }

      return blinks;
     }
    else{
    Serial.print("Input outside of range, please enter a number between 0 and 9.");
    }
}


void blinkLED(int blinks)
{
  for(int i=0; i<blinks; i+=1)
 {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
 }
}

