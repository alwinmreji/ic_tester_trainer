#include <Arduino.h>
using namespace std;

char ch;
int gate=1;
bool e,d;

void ictester();
void ictrainer();
bool test_11(int,int,int);
bool test_10(int,int,int);
bool test_01(int,int,int);
bool test_00(int,int,int);


void setup()
{
  Serial.begin(9600);
  for (int i=2; i<=9; i++)
    pinMode(i,OUTPUT);
  for (int i=10; i<=13; i++)
    pinMode(i,INPUT);
}


bool test_11(int a,int b, int c)
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  return digitalRead(c);
}


bool test_10(int a,int b, int c)
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  return digitalRead(c);
}


bool test_01(int a,int b, int c)
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  return digitalRead(c);
}


bool test_00(int a,int b, int c)
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  return digitalRead(c);
}

void ic_7486()
{
  for(int i=0; i<8 ; i+=2)
  {
    d = test_01(2+i,3+i,10+gate) && test_10(2+i, 3+i, 10+gate);
    e = test_00(2+i,3+i,10+gate) && test_11(2+i, 3+i, 10+gate);
    if (d && (!e))
      Serial.println("Gate ");Serial.print(gate);Serial.print(" is working");
    else
      Serial.println("Gate ");Serial.print(gate);Serial.print(" is not working !!");
    gate++;
  }
}


void ic_747266()
{
  for(int i=0; i<8 ; i+=2)
  {
    d = test_01(2+i,3+i,10+gate) && test_10(2+i, 3+i, 10+gate);
    e = test_00(2+i,3+i,10+gate) && test_11(2+i, 3+i, 10+gate);
    if ((!d)&&e)
      Serial.println("Gate ");Serial.print(gate);Serial.print(" is working");
    else
      Serial.println("Gate ");Serial.print(gate);Serial.print(" is not working !!");
    gate++;
  }
}


// void ic_7404(){}

void ictester()
{
  Serial.print("\n\tChoose the IC \n1. 7486\n2. 747266\nEnter your choice:\t")
  ch = Serial.read()
  switch (ch)
  {
    case '1':ic_7486();
    break;
    case '2':ic_747266();
    break;
    // case '3':ic_7404();
    // break;
    default: Serial.print("!!!....INVALID....!!!");
  }
}
void ictrainer()
{}


void loop()
{
  Serial.print("\n\t\tWelcome \n1-IC Trainer \n2-IC Tester \n\t Enter your choice: \t");
  ch = Searial.read();
  switch(ch)
  {
    case '1': ictrainer();
    break;
    case '2': ictester();
    break;
    default: Serial.print("!!!....INVALID....!!!");
  }
}
