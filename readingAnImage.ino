// attempting to figure out how to read an image from a photoresistor
// i think first we should specify dimentions. 
int length;
int height;
String digits;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 

  // now we need a flow. It shoudl be 
  // 1. position (wait for user input to confirm?)
  // 2. read value from photoresistor
  // 3. concatenate it to a string

 //? we have to figure out logic for turning arbitrary values into 0-7


  // ok so the user will position the ph. the program will wait for them to confirm
  // maybe we'd put this in a for loop that will make sure we can't read more pixels that desired?
  if (Serial.available() > 0){
    // OK  BOOM! if we press a key, it'll enter this loop

    // grab current photoresistor reading
    // for now we'll enter it in manually.
    char input = Serial.read();
    

    // now we have to append this to string of numbers.
    // first we should confirm if p2 can read the full string syntax or if thats just p1
    // actually ill do it later
    digits += input;

  };

  Serial.println(digits);
}
