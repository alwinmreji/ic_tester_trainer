#include <Arduino.h>
void ictester();
void ictrainer();
using namespace std;
void setup()
{
  Serial.begin(9600);
}
char choice;
void loop()
{
  Searial.print("1-IC Trainer \n 2-IC Tester \n\t Enter choice: \n");
  choice = Searial.read();
  switch(choice)
  {
    case '1': ictrainer();
            break;
    case '2': ictester();
            break;
    default: ictrainer();
  }
}
void ictester()
{}
void ictrainer()
{}
