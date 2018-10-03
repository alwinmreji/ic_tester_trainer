#include <Arduino.h>
int opin;
int ipin1;
int ipin2;
int icchoice;
void ictester();
void ictrainer();
using namespace std;
void setup() {
  pinMode(opin,OUTPUT);
  pinMode(ipin1,INPUT);
  pinMode(ipin2,INPUT);
  Serial.begin(9600);  // put your setup code here, to run once:
}
int choice;
void loop()
{

printf("1-IC Trainer \n 2-IC Tester \n Enter choice: \n");
scanf("%d",&choice);
switch(choice)
{
  case 1: ictrainer();
          break;
  case 2: ictester();
          break;
  default: ictrainer();
};
}
void ictester()
{}
void ictrainer()
{}
