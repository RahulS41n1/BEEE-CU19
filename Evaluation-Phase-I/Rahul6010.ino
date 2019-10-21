void setup()
{
  for (int i=11; i<=13; i++)
  	pinMode(i,OUTPUT);
  randomSeed(4);
  Serial.begin(9600);
}

void LEDoff(){
  for(int i=11;i<=13;i++)
    digitalWrite(i,LOW);
}

void loop()
{
  int Random = random(1,7);
  Serial.println(Random);
  if(Random==2){
    LEDoff();
    digitalWrite(12,HIGH);
  }
  else if(Random==4){
    LEDoff();
    digitalWrite(11,HIGH);
  }
  else if(Random==6){
    LEDoff();
    digitalWrite(13,HIGH);
  } 
  delay(1000);
}