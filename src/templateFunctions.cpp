#include "vex.h"
using namespace vex;

event checkRed = event();
event checkBlue = event();
event checkGreen = event();

void hasBlueCallback() {
  Brain.Screen.setFont(mono40);
  Brain.Screen.clearLine(1, black);
  Brain.Screen.setCursor(Brain.Screen.row(), 1);
  Brain.Screen.setCursor(1, 1);
  Vision5.takeSnapshot(Vision5__BLUEBOX);
  if (Vision5.objectCount > 0) {
    Brain.Screen.print("Blue Object Found");
  } else {
    Brain.Screen.print("No Blue Object");
  }
}

void hasRedCallback() {
  Brain.Screen.setFont(mono40);
  Brain.Screen.clearLine(3, black);
  Brain.Screen.setCursor(Brain.Screen.row(), 1);
  Brain.Screen.setCursor(3, 1);
  Vision5.takeSnapshot(Vision5__REDBOX);
  if (Vision5.objectCount > 0) {
    Brain.Screen.print("Red Object Found");
  } else {
    Brain.Screen.print("No Red Object");
  }
}

void hasGreenCallback() {
  Brain.Screen.setFont(mono40);
  Brain.Screen.clearLine(5, black);
  Brain.Screen.setCursor(Brain.Screen.row(), 1);
  Brain.Screen.setCursor(5, 1);
  Vision5.takeSnapshot(Vision5__GREENBOX);
  if (Vision5.objectCount > 0) {
    Brain.Screen.print("Green Object Found");
  } else {
    Brain.Screen.print("No Green Object");
  }
}