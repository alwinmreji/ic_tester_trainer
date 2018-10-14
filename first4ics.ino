#include <Arduino.h>
//void inputhighpins(unsigned char pins[], unsigned char n);
//void inputlowpins(unsigned char pins[],unsigned char n);
void ic7408();
void ic7432();
void ic7400();
void ic7402();

/*void inputhighpins(unsigned char pins[], unsigned char n)
{
 unsigned char i;
 for(i = 1; i < n; i++)
 digitalWrite(pins, HIGH);
}*/

/*void inputlowpins(unsigned char pins[], unsigned char n)
{
 unsigned char i;
 for (i = 1; i < n; i++)
digitalWrite(pins, LOW);
}*/

void ictester();
// void ictrainer();
using namespace std;


void setup()
 {
  Serial.begin(9600);  // put your setup code here, to run once:
}

void loop()
{
 Serial.println("1-IC Trainer \n Enter choice: \n");//\n 2-IC Tester
 int choice= Serial.read();
 switch(choice)
 {
   case 1: ictester();
         break;
  // case 2: ictrainer();
          // break;
  default: Serial.print("INVALID!!");//ictrainer();
 }
}


void ictester()
{
  Serial.println("\n\tSelect IC: \n1. 7408\n2.7432\n3.7400\n4.7402\n5.7486\n6.747266\n7.7404\nEnter Your Choice:\t");
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
  case 5: ic_7486();
          break;
  case 6: ic_747266();
          break;
  case 7: ic_7404();
          break;
  default: ;
};
}

void ic7408()
{
   //QUAD TWO INPUT AND GATES;
   /*"replacing this by DDRD and DDRB"
   {pinMode(4,INPUT);
   pinMode(7,INPUT);
   pinMode(11,INPUT);
   pinMode(8,INPUT);
   unsigned char hpins[8] = {13, 12, 10, 9, 5, 6, 2, 3};
   inputhighpins(hpins, 8);}*/
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
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
   // pinMode(4,INPUT);
   // pinMode(7,INPUT);
   // pinMode(11,INPUT);
   // pinMode(8,INPUT);
   // unsigned char hpins[4] = {13, 10, 5, 2};
   // unsigned char lpins[4] = {12, 9, 6, 3};
   // inputhighpins(hpins,4);
   // inputlowpins(lpins,4);
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
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

   // pinMode(4,INPUT);
   // pinMode(7,INPUT);
   // pinMode(11,INPUT);
   // pinMode(8,INPUT);
   // unsigned char hpins[8] = {13, 12, 10, 9, 5, 6, 2, 3};
   // inputhighpins(hpins, 8);
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
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
   // pinMode(13,INPUT);
   // pinMode(10,INPUT);
   // pinMode(5,INPUT);
   // pinMode(2,INPUT);
   // unsigned char lpins[8] = {12, 11, 8, 9, 7, 6, 4, 3};
   // inputlowpins(lpins, 8);
   DDRD = B11011000; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B011011; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B11011000;
   PORTB = B011011;
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
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
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
void ic_747266()
{
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
   if(digitalRead(4))
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(digitalRead(7))
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(digitalRead(8))
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(digitalRead(11))
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");
}
void ic_7486()
{
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
   if(digitalRead(4)==0)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(digitalRead(7)==0)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(digitalRead(8)==0)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(digitalRead(11)==0)
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");
}
void ic_7404()
{
  DDRD = B01010100;
  DDRB = B101010;
  PORTD = B01010100;
  PORTB = B101010;
  if(digitalRead(3)==0)
  Serial.println("Gate 1 is working");
  else Serial.println("Gate 1 is not working");
  if(digitalRead(5)==0)
  Serial.println("Gate 2 is working");
  else Serial.println("Gate 2 is not working");
  if(digitalRead(7)==0)
  Serial.println("Gate 3 is working");
  else Serial.println("Gate 3 is not working");
  if(digitalRead(8)==0)
  Serial.println("Gate 4 is working");
  else Serial.println("Gate 4 is not working");
  if(digitalRead(10)==0)
  Serial.println("Gate 5 is working");
  else Serial.println("Gate 5 is not working");
  if(digitalRead(12)==0)
  Serial.println("Gate 6 is working");
  else Serial.println("Gate 6 is not working");
}
