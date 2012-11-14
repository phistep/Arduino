/*
 *      x   x   x
 *      0   1   2
 *
 * y0   0 - 1 - 2
 *      |   |   |
 * y1   3 - 4 - 5
 *      |   |   |
 * y2   6 - 7 - 8
 *
 *      |---n---|
 *
 *    p = n * y + x
 */

// number of LEDs on one edge
#define EDGENUMBER 3
// height level pins, anode, HIGH
int lvl[EDGENUMBER] = {11, 12, 13};
// ground grid pins, cathode, LOW
int grd[EDGENUMBER*EDGENUMBER] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

// functions
void reset(){
  for(int i = 0; i < EDGENUMBER; i++){
    digitalWrite(lvl[i], LOW);
    digitalWrite(grd[i], HIGH);
    digitalWrite(grd[i+EDGENUMBER], HIGH);
    digitalWrite(grd[i+2*EDGENUMBER], HIGH);
  }
}
void light(int x, int y, int z, int duration){
  // coordinate mapping
  int pos = EDGENUMBER * y + x;
  
  reset();

  // set LEDs
  digitalWrite(lvl[z], HIGH);
  digitalWrite(grd[pos], LOW);
  
  delay(duration);
  
  // specific reset
  digitalWrite(lvl[z], LOW);
  digitalWrite(grd[pos], HIGH);
}

void setup() {
  for(int i = 0; i < EDGENUMBER; i++){
    pinMode(lvl[i], OUTPUT);
    pinMode(grd[i], OUTPUT);
    pinMode(grd[i+EDGENUMBER], OUTPUT);
    pinMode(grd[i+2*EDGENUMBER], OUTPUT);
  }
  reset();
}

void loop(){
///* Cube in Cube
for(int j = 0; j < 5; j++){
  light(0, 0, 0, 500);
  for(int i = 0; i < 62; i++){
    light(0, 0, 0, 1);
    light(1, 0, 0, 1);
    light(0, 1, 0, 1);
    light(1, 1, 0, 1);
    
    light(0, 0, 1, 1);
    light(1, 0, 1, 1);
    light(0, 1, 1, 1);
    light(1, 1, 1, 1);
  }
  for(int i = 0; i < 18; i++){
    light(0, 0, 0, 1);
    light(1, 0, 0, 1);
    light(0, 1, 0, 1);
    light(1, 1, 0, 1);
    light(2, 0, 0, 1);
    light(0, 2, 0, 1);
    light(2, 2, 0, 1);
    light(2, 1, 0, 1);
    light(1, 2, 0, 1);
    
    light(0, 0, 1, 1);
    light(1, 0, 1, 1);
    light(0, 1, 1, 1);
    light(1, 1, 1, 1);
    light(2, 0, 1, 1);
    light(0, 2, 1, 1);
    light(2, 2, 1, 1);
    light(2, 1, 1, 1);
    light(1, 2, 1, 1);
    
    light(0, 0, 2, 1);
    light(1, 0, 2, 1);
    light(0, 1, 2, 1);
    light(1, 1, 2, 1);
    light(2, 0, 2, 1);
    light(0, 2, 2, 1);
    light(2, 2, 2, 1);
    light(2, 1, 2, 1);
    light(1, 2, 2, 1);
  }
  for(int i = 0; i < 62; i++){
    light(0, 0, 0, 1);
    light(1, 0, 0, 1);
    light(0, 1, 0, 1);
    light(1, 1, 0, 1);
    
    light(0, 0, 1, 1);
    light(1, 0, 1, 1);
    light(0, 1, 1, 1);
    light(1, 1, 1, 1);
  }
}
//*/
// /* Spinning Wheel
for(int f = 0; f < 5; f++){
  for(int i = 0; i < 55; i++){
    light(0, 0, 2, 1);
    light(1, 0, 2, 1);
    light(2, 0, 2, 1);
    
    light(0, 1, 1, 1);
    light(1, 1, 1, 1);
    light(2, 1, 1, 1);
 
    light(0, 2, 0, 1);
    light(1, 2, 0, 1);
    light(2, 2, 0, 1);
  }
  for(int i = 0; i < 55; i++){  
    light(0, 0, 1, 1);
    light(1, 0, 1, 1);
    light(0, 1, 1, 1);
    
    light(1, 1, 1, 1);
    light(2, 0, 1, 1);
    light(0, 2, 1, 1);
     
    light(2, 2, 1, 1);
    light(2, 1, 1, 1);
    light(1, 2, 1, 1);
  }
  for(int i = 0; i < 55; i++){
    light(0, 0, 0, 1);
    light(1, 0, 0, 1);
    light(2, 0, 0, 1);
    
    light(0, 1, 1, 1);
    light(1, 1, 1, 1);
    light(2, 1, 1, 1);
 
    light(0, 2, 2, 1);
    light(1, 2, 2, 1);
    light(2, 2, 2, 1);
  }
  for(int i = 0; i < 55; i++){
    light(0, 1, 0, 1);
    light(1, 1, 0, 1);
    light(2, 1, 0, 1);
   
    light(0, 1, 1, 1);
    light(1, 1, 1, 1);
    light(2, 1, 1, 1);
   
    light(0, 1, 2, 1);
    light(1, 1, 2, 1);
    light(2, 1, 2, 1); 
  }
}
// */
}
