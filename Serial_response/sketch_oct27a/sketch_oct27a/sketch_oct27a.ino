int a=0;
int dig1,dig2,dig3,dig4;

void setup()
{
  Serial.begin(9600);
  
}

void newpass()
{
  if (Serial.available())
  {
    dig1=Serial.parseInt();
    dig2=Serial.parseInt();
    dig3=Serial.parseInt();
    dig4=Serial.parseInt();
     Serial.print("SUA SENHA EH: ");
    Serial.print(dig1);
    Serial.print(dig2);
    Serial.print(dig3);
    Serial.println(dig4);
   
  }
  

    
}
void Start()
{
  Serial.println("TRANCA REMOTA");
  Serial.println("=========================");
  if (a==0)
  {
    newpass();
  }
  else
  {
    Serial.println("haah");
  }
}


void loop()
{
  Start();
  
  
}
