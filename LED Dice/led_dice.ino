void setup()
{
  for (int i=2; i<8; i++)
  	pinMode(i,OUTPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  int Random = random(2,9);
  for (int i=2; i<Random; i++)
  	digitalWrite(i,HIGH);
  delay(500);
  for (int i=2; i<Random; i++)
  	digitalWrite(i,LOW);
  delay(500);
  
}