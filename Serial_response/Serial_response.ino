int a,b,c;
boolean cnt;

void setup()
{
  Serial.begin(19200);
}

void loop()
{

if (Serial.available())
{
 a=Serial.parseInt();
 b=Serial.parseInt();
 c=Serial.parseInt();
 
 Serial.println("##############################################################");
 Serial.print("Data1= ");
 Serial.println(a);
 Serial.print("Data2= ");
 Serial.println(b);
 Serial.print("Data3= ");
 Serial.println(c);
 cnt=false;
}
else
{
  
}
}
