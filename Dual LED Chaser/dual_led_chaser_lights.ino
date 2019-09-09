int i;

void setup()
{
  for (i=2; i<8; i++)
  	pinMode(i,OUTPUT);
}

void loop()
{
  for (i=2;i<8;i++) {
    for (int j=2; j<8; j++)
    	digitalWrite(j,LOW);
  	delay(150);
    
    digitalWrite(i,HIGH);
    if(i!=7) {
      digitalWrite(i+1,HIGH);
    }
    else {
      i=1;
      digitalWrite(i+1,HIGH);
    }
    delay(150);
  }
}