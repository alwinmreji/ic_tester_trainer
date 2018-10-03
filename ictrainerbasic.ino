int opin=11;
int ipin1=12;
int ipin2=13;
int icchoice=1;
void itester()
{
  Serial.println("Select IC: \n");
  Serial.read(icchoice);
switch(icchoice)
{
  case 1: ic7408();
          break;
  case 2: ic7432();
          break;
  case 3: ic7400();
          break;
  case 4: ic7402();
          break;
  case 5: ;
          break;
  case 6: ;
          break;
  case 7: ;
          break;
  case 8: ;
          break;
  case 9: ;
          break;
  case 10: ;
          break;

  default: ;
};
}
void ic7408()
{
   //QUAD TWO INPUT AND GATES;
   digitalWrite(ipin1,HIGH);
   digitalWrite(ipin2,HIGH);
   // digitalWrite(ipin1,LOW);
   // digitalWrite(ipin2,LOW);
   if( digitalRead(opin)==HIGH)
   Serial.println("IC is working :D");
   else
   Serial.println("IC is not working :(");

}
void ic7432()
{
   //QUAD 2 INPUT OR GATES
   digitalWrite(ipin1,HIGH);
   //digitalWrite(ipin2,HIGH);
   //digitalWrite(ipin1,LOW);
   digitalWrite(ipin2,LOW);
   if( digitalRead(opin)==HIGH)
   Serial.println("IC is working :D");
   else
   Serial.println("IC is not working :(");

}
void ic7400()
{
   //QUAD 2 INPUT NAND GATES
   digitalWrite(ipin1,HIGH);
   digitalWrite(ipin2,HIGH);
   // digitalWrite(ipin1,LOW);
   // digitalWrite(ipin2,LOW);
   if( digitalRead(opin)==LOW)
   Serial.println("IC is working :D");
   else
   Serial.println("IC is not working :(");

}
void ic7402()
{
   //QUAD 2 INPUT NOR GATES
   ipin1=12;
   ipin2=11;
   opin=13;
   // digitalWrite(ipin1,HIGH);
   // digitalWrite(ipin2,HIGH);
   digitalWrite(ipin1,LOW);
   digitalWrite(ipin2,LOW);
   if( digitalRead(opin)==HIGH)
   Serial.println("IC is working :D");
   else
   Serial.println("IC is not working :(");

}
