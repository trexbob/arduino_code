//assignment 6

int ledPin=13;
int random_x;
int while_counter;

void setup()
{
  pinMode(ledPin, OUTPUT); //LED pin as output
  Serial.begin(9600);
}

void loop()
{
  random_x = random(1,11);
  //Serial.println(random_x); for diagnostic purposes
  if(random_x <= 5 ){
    blinkLED(random_x);
  }
  else {
  Serial.print("The value of the number is: ");
  Serial.println(random_x);
  delay(500);
  }
  if(random_x > 5){
    while_counter+=1;
  }
  while(while_counter >3){
    Serial.print("Significant number of high values have been generated.");
    while_counter=0;
  }
  delay(500);
}

void blinkLED(int random_x)
{
  for(int i=0; i<random_x; i+=1)
 {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
 }
}


