//9/20/14

// exercise in blinking LED again

int ledPin=13;
int x;

void setup()
{
  pinMode(ledPin, OUTPUT); //LED pin as output
}

void loop()
{
  x = random(1,5);
  switchCase(x);
  delay(1000);
}

void blinkLED(int blinks, int freq)
{
  for(int i=0; i<blinks; i+=1)
 {
    digitalWrite(ledPin, HIGH);
    delay(1000/freq);
    digitalWrite(ledPin, LOW);
    delay(1000/freq);
 }
}

void switchCase(int condition)
{
  switch (condition)
  {
    case 1:
      blinkLED(2,1);
      break;
    case 2:
      blinkLED(4,2);
      break;
    case 3:
      blinkLED(10,5);
      break;
    default:
      Serial.println("Expecting input of 1 to 3");
      break;
  }
}

