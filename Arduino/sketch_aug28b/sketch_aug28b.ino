#include <Sparki.h> // include the sparki library

void setup()
{

}

void loop()
{
 sparki.clearLCD();
 sparki.drawString(0,0,"Lauren iz a luzer");
 sparki.drawString(0,1,"Tom is kul");
 sparki.drawString(0,2,"Lauren leiks smelly");
 sparki.drawString(0,3,"cheese");
 sparki.updateLCD();
 delay(100);
}
