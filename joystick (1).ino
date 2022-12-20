const int xPin = A0;  // x-axis of the joystick
const int yPin = A1;  // y-axis of the joystick
const int buttonPin = 7;  // button pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int xVal = analogRead(xPin);  // read the value from the x-axis
  int yVal = analogRead(yPin);  // read the value from the y-axis
  int buttonVal = digitalRead(buttonPin);  // read the value of the button


  // Check if the joystick is in the up position
  if (yVal < 200) {
    Serial.println("up");
  }
  // Check if the joystick is in the up-right position
  else if (yVal < 400 ) {
    Serial.println("up-right");
  }
  // Check if the joystick is in the right position
  else if (xVal > 800) {
    Serial.println("right");
  }
  // Check if the joystick is in the down-right position
  else if (yVal > 600 && xVal > 800) {
    Serial.println("down-right");
  }
  // Check if the joystick is in the down position
  else if (yVal > 600) {
    Serial.println("down");
  }
  // Check if the joystick is in the down-left position
  else if (yVal > 600 && xVal < 200) {
    Serial.println("down-left");
  }
  // Check if the joystick is in the left position
  else if (xVal < 200 & yVal >400) {
    Serial.println("left");
  }
  // Check if the joystick is in the up-left position
  else if (yVal < 400 && xVal < 200) {
    Serial.println("up-left");
  }
  // If none of the above conditions are met, the joystick is in the center position
  else {
    Serial.println("Center");
  }
  delay(1000);  // delay to allow the joystick to settle before reading again
}


