#include "mcs-12085.cpp"


int x_cord,y_cord;
void setup() {
  
  //Initialising initial co_ordinates.
  Serial.begin(9600);
  x_cord=0;
  y_cord=0;
}

void loop() {
  //Getting change in co-ordinates
  int x_change=mcs12085_dx();
  int y_change=mcs12085_dy();

  //updating co-ordinates
  x_cord=x_cord+x_change;
  y_cord=y_cord+y_change;

  //Displaying co-ordinates on the Serial Monitor.
  Serial.println(x_cord+" , "+y_cord);
}
