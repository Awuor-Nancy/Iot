int red=13;
int green=12;
int yellow=8;
  
  
void setup()
{
  
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  
}

void loop()
{
  digitalWrite(red,HIGH);
  delay(5000);
    digitalWrite(red,LOW);
  
  digitalWrite(green,HIGH);
  delay(2000);
    digitalWrite(green,LOW);
    
    
  digitalWrite(yellow,HIGH);
  delay(1000);
    digitalWrite(yellow,LOW);
               
}
    