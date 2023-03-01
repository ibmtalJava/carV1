#include "car.h"
Car car(11,10,12,13,8,9);
void setup() {
  car.setup();
}

void loop(){
  car.fire();
}
