const int relay1=6;
const int relay2=13;

void setup()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);

}

void loop()
{
  digitalWrite(relay1, HIGH);
  delay(500); 
  digitalWrite(relay1, LOW);
  delay(100);
  
  digitalWrite(relay2, HIGH);
  delay(500); 
  digitalWrite(relay2, LOW);
  delay(100);
}
