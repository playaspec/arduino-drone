int cnt=0;
int dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("FECHADURA REMOTA");
 Serial.println("=============================");
 if (cnt!=0)
 {
  Serial.println("Envie a senha");
 cnt++; 
  delay(1000);
 }
  if (cnt==0);
 {
  Serial.println("PRIMEIRA INICIALIZAÇÃO...");
  cnt++;
  Serial.println("ENVIE UMA NOVA SENHA DE 8(OITO) DIGITOS SEPARADOS POR ',' VÍRGULA");
  goto x;
 }

 x:  if (Serial.available())
  {
    dig1=Serial.parseInt();
    dig2=Serial.parseInt();
    dig3=Serial.parseInt();
    dig4=Serial.parseInt();
    dig5=Serial.parseInt();
    dig6=Serial.parseInt();
    dig7=Serial.parseInt();
    dig8=Serial.parseInt();
  }
   else
 {
   goto x;
}

  Serial.print("SUA SENHA É: ");
  Serial.print(dig1);
  Serial.print(dig2);
  Serial.print(dig3);
  Serial.print(dig4);
  Serial.print(dig5);
  Serial.print(dig6);
  Serial.print(dig7);
  Serial.println(dig8);


 }


