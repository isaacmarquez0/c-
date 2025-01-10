#include "Arduino_LED_Matrix.h"


ArduinoLEDMatrix matrix;


void setup() {
  Serial.begin(115200);
  matrix.begin();
}


uint8_t frame[8][12] = {
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};


void sketch(){
  //Left eye
  frame[1][7] = 1;
  frame[1][6] = 1;
  frame[1][5] = 1;
  frame[1][4] = 1;
  frame[1][9] = 1;
  frame[3][5] = 1;
  frame[3][4] = 1;
  frame[2][5] = 1;
  frame[3][6] = 1;
  frame[3][2] = 1;
  frame[3][7] = 1;
  frame[3][2] = 1;
  frame[3][3] = 1;
  frame[4][1] = 1;
  frame[5][0] = 1;
  frame[6][0] = 1;
  frame[7][0] = 1;
  frame[7][3] = 1;
  frame[7][1] = 1;
  frame[7][2] = 1;
  frame[2][4] = 1;
  frame[7][4] = 1;
  frame[7][5] = 1;
  frame[7][6] = 1;
  frame[7][7] = 1;
  frame[7][8] = 1;
  frame[7][9] = 1;
  frame[7][10] = 1;
  frame[7][11] = 1;
  frame[7][12] = 1;
  frame[6][12] = 1;
  frame[6][11] = 1;
  frame[5][12] = 1;
  frame[5][11] = 1;
  frame[4][10] = 1;
  frame[3][9] = 1;
  frame[3][8] = 1;
  frame[2][7] = 1;
  frame[2][6] = 1;
  frame[1][8] = 1;
  frame[1][10] = 1;
  frame[1][11] = 1;
}


void loop(){
sketch();


matrix.renderBitmap(frame, 8, 12);
delay(1000);
}
