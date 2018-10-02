int opin;
int ipin1;
int ipin2;
int icchoice;
void ictrainer()
{
  Serial.println("Select IC: \n");
  //choices
}
switch(icchoice)
{
  case 1: ;
          break;
  case 2: ;
          break;
  case 3: ;
          break;
  case 4: ;
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
void generalic()
{
   //comment statements based on required input;
   digitalWrite(ipin1,HIGH);
   digitalWrite(ipin2,HIGH);
   digitalWrite(ipin1,LOW);
   digitalWrite(ipin2,LOW);
   if( digitalRead(opin)==HIGH)
   Serial.println("IC is working :D");
   else
   Serial.println("IC is not working :(")

}
