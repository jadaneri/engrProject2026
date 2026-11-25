// servo development
int DELTA;
int MILLIS;
int FREQUENCY;
int EPSILON;
int stepSize = 1000; // strangely...this is a unit of time?
int numOfSubIntervals;
int dataPoint;
int subIntPOINT;

void setup() {

  Serial.begin(9600);
}

void loop() {

  MILLIS = millis();
  DELTA =  MILLIS % stepSize;
  FREQUENCY = 1;

  Serial.print("millis():");
  Serial.print(MILLIS);
  Serial.print(" Delta: ");
  Serial.print(DELTA);

  // sub intreval stuff
  numOfSubIntervals = FREQUENCY * 4;
  subIntPOINT = DELTA / numOfSubIntervals;
  EPSILON = DELTA % subIntPOINT;

/*
 Serial.print(" numOfSubIntervals: ");
 Serial.print(numOfSubIntervals);
 
 Serial.print(" SubIntVals: ");
 Serial.print(subIntPOINT);
 
 Serial.print(" EPSILON ");
 Serial.println(EPSILON);
 */
Serial.print(" point: ");
 if (DELTA >= 750){
  Serial.println(" 0");
 }
 else if (DELTA >= 500){
  Serial.println(" 1");
 }
 else if (DELTA >= 250){
  Serial.println(" 2");
 }
 else if (DELTA >= 0){
  Serial.println(" 3");
 }
 

  //dataPoint = // grab sine wave value HERE

  
}
