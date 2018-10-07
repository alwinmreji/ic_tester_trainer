#include <Arduino.h>
// int gate1=0;
// int gate2=0;
// int gate3=0;
// int gate4=0;
void inputhighpins(unsigned char pins[], unsigned char n);
void inputlowpins(unsigned char pins[],unsigned char n);
void ic7408();
void ic7432();
void ic7400();
void ic7402();

void inputhighpins(unsigned char pins[], unsigned char n)
{
 unsigned char i;
 for(i = 1; i < n; i++)
 digitalWrite(pins, HIGH);
}

void inputlowpins(unsigned char pins[], unsigned char n)
{
 unsigned char i;
 for (i = 1; i < n; i++)
digitalWrite(pins, LOW);
}



void ictester();
// void ictrainer();
using namespace std;
void setup() {

  Serial.begin(9600);  // put your setup code here, to run once:
}

void loop()
{
Serial.println("1-IC Trainer \n 2-IC Tester \n Enter choice: \n");
int choice= Serial.read();
switch(choice)
{
  // case 1: ictrainer();
          break;
  case 2: ictester();
          break;
  // default: ictrainer();
};
}

void ictester()
{
  Serial.println("Select IC: \n");
  int icchoice=Serial.read();
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
   pinMode(4,INPUT);
   pinMode(7,INPUT);
   pinMode(11,INPUT);
   pinMode(8,INPUT);
   unsigned char hpins[8] = {13, 12, 10, 9, 5, 6, 2, 3};
   inputhighpins(hpins, 8);
   if(digitalRead(13))
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(digitalRead(10))
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(digitalRead(5))
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(digitalRead(2))
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");
}
void ic7432()
{
   //QUAD 2 INPUT OR GATES
   pinMode(4,INPUT);
   pinMode(7,INPUT);
   pinMode(11,INPUT);
   pinMode(8,INPUT);
   unsigned char hpins[4] = {13, 10, 5, 2};
   unsigned char lpins[4] = {12, 9, 6, 3};
   inputhighpins(hpins,4);
   inputlowpins(lpins,4);
   if(digitalRead(13))
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(digitalRead(10))
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(digitalRead(5))
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(digitalRead(2))
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");
}
void ic7400()
{
   //QUAD 2 INPUT NAND GATES

   pinMode(4,INPUT);
   pinMode(7,INPUT);
   pinMode(11,INPUT);
   pinMode(8,INPUT);
   unsigned char hpins[8] = {13, 12, 10, 9, 5, 6, 2, 3};
   inputhighpins(hpins, 8);
   if(digitalRead(13)==0)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(digitalRead(10)==0)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(digitalRead(5)==0)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(digitalRead(2)==0)
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");

}
void ic7402()
{
   //QUAD 2 INPUT NOR GATES
   pinMode(13,INPUT);
   pinMode(10,INPUT);
   pinMode(5,INPUT);
   pinMode(2,INPUT);
   unsigned char lpins[8] = {12, 11, 8, 9, 7, 6, 4, 3};
   inputlowpins(lpins, 8);

   if(digitalRead(13))
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(digitalRead(10))
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(digitalRead(5))
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(digitalRead(2))
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");

}
