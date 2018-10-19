#include <Arduino.h>
//void inputhighpins(unsigned char pins[], unsigned char n);
//void inputlowpins(unsigned char pins[],unsigned char n);
void ic7408();
void ic7432();
void ic7400();
void ic7402();

bool g1f,g1s, g2f,g2s, g3f,g3s, g4f,g4s;
int ch;
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
  Serial.println("\n\t\t\tWelcome to IC Tester\n")
 /* Serial.println("1-IC Trainer \n Enter choice: \n");//\n 2-IC Tester
 // int choice= Serial.read();
 // switch(choice)
 // {
   case 1:*/ ictester();
 //         break;
 //  // case 2: ictrainer();
 //          // break;
 //  default: Serial.print("INVALID!!");//ictrainer();
 }
}

void choice()
{
 ch = Serial.read();
  if (ch>0 && ch<9)
  return;
  choice();
}

void ictester()
{
  Serial.println("\n\tSelect IC: \n1. 7408\n2.7432\n3.7400\n4.7402\n5.7486\n6.747266\n7.7404\nEnter Your Choice:\t");
  choice();
switch(ch)
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
  default:Serial.println("\n\t!!INVALID!!");
}
}

void ic7408()
{
  //AND GATES
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
   g1f=digitalRead(11);
   g2f=digitalRead(8);
   g3f=digitalRead(4);
   g4f=digitalRead(7);
   PORTD = B01001000;
   PORTB = B100100;
   g1s=digitalRead(11);
   g2s=digitalRead(8);
   g3s=digitalRead(4);
   g4s=digitalRead(7);
   if(g1f&& !g1s)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(g2f&& !g2s)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(g3f&& !g3s)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(g4f&& !g4s)
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");
}

void ic7400()
{
  //NAND GATES
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
   g1f=digitalRead(11);
   g2f=digitalRead(8);
   g3f=digitalRead(4);
   g4f=digitalRead(7);
   PORTD = B01001000;
   PORTB = B100100;
   g1s=digitalRead(11);
   g2s=digitalRead(8);
   g3s=digitalRead(4);
   g4s=digitalRead(7);
   if(!g1f&&g1s)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(!g2f&&g2s)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(!g3f&&g3s)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(!g4f&&g4s)
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");
}
void ic7432()
{
   //OR GATES
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01001000;
   PORTB = B100100;
   g1f=digitalRead(11);
   g2f=digitalRead(8);
   g3f=digitalRead(4);
   g4f=digitalRead(7);
   PORTD = B00000000;
   PORTB = B000000;
   g1s=digitalRead(11);
   g2s=digitalRead(8);
   g3s=digitalRead(4);
   g4s=digitalRead(7);
   if(g1f&& !g1s)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(g2f&& !g2s)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(g3f&& !g3s)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(g4f&& !g4s)
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");

}
void ic7402()
{
   //QUAD 2 INPUT NOR GATES
   DDRD = B11011000; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B011011; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01001000;
   PORTB = B100100;
   g1f=digitalRead(2);
   g2f=digitalRead(5);
   g3f=digitalRead(10);
   g4f=digitalRead(13);
   PORTD = B00000000;
   PORTB = B000000;
   g1s=digitalRead(2);
   g2s=digitalRead(5);
   g3s=digitalRead(10);
   g4s=digitalRead(13);
   if(!g1f&& g1s)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(!g2f&& g2s)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(!g3f&& g3s)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(!g4f&& g4s)
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");

}


void ic_747266()
{
   DDRD = B11001100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110011; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B11001100;
   PORTB = B110011;
   g1f = digitalRead(4);
   g2f = digitalRead(5);
   g3f = digitalRead(10);
   g4f = digitalRead(11);
   PORTD = B01001000;
   PORTB = B100010;
   g1s = digitalRead(4);
   g2s = digitalRead(5);
   g3s = digitalRead(10);
   g4s = digitalRead(11);
   if(g1f && !g1s)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(g2f && !g2s)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(g3f && !g3s)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(g4f && !g4s)
   Serial.println("Gate 4 is working");
   else Serial.println("Gate 4 is not working");
}
void ic_7486()
{
   DDRD = B01101100; //B 7 6 5 4 3 2 1 0 -> 1=OUTPUT, 0 = INPUT
   DDRB = B110110; //B 13 12 11 10 9 8 -> 1=OUTPUT, 0 = INPUT
   PORTD = B01101100;
   PORTB = B110110;
   g1f = digitalRead(4);
   g2f = digitalRead(7);
   g3f = digitalRead(8);
   g4f = digitalRead(11);
   PORTD = B00101000;
   PORTB = B100010;
   g1s = digitalRead(4);
   g2s = digitalRead(7);
   g3s = digitalRead(8);
   g4s = digitalRead(11);
   if(!g1f&& g1s)
   Serial.println("Gate 1 is working");
   else Serial.println("Gate 1 is not working");
   if(!g2f&& g2s)
   Serial.println("Gate 2 is working");
   else Serial.println("Gate 2 is not working");
   if(!g3f&& g3s)
   Serial.println("Gate 3 is working");
   else Serial.println("Gate 3 is not working");
   if(!g4f&& g4s)
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
