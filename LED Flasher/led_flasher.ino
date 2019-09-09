void setup()
{
  for (int i=5; i<8; i++)
  	pinMode(i,OUTPUT);
}

void loop()
{
  for (int i=5; i<8; i++)
  	digitalWrite(i,HIGH);
  delay(200);
  for (int i=5; i<8; i++)
  	digitalWrite(i,LOW);
  delay(200);
}