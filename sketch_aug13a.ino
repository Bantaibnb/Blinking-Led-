
//#define LED  D6
void setup() {
 pinMode(D7,OUTPUT); 
  pinMode(D4,OUTPUT); 

}
 static int i=1;
void loop() {
  
for(;i<=5;i++)
{
digitalWrite(D7,HIGH);
delay(500);
digitalWrite(D7,LOW);
delay(500);
}
if(i>5)
{digitalWrite(D4,HIGH);}
}
