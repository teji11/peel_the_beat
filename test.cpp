// #include <iostream>
// #include <string>
// using namespace std;

int const thresh = 80;
int const del = 1000;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (0 == 1){

  }
  if (analogRead(A0) < thresh)
  {
    // Serial.println("A0");
    tone(8, 523, 130);
    delay(del);
  }
  else if (analogRead(A1) < thresh)
  {
    // Serial.println("A1");
    tone(8, 587, 130);
    delay(del);
  }
  else if (analogRead(A2) < thresh)
  {
    Serial.println("A2");
    tone(8, 659, 130);
    delay(del);
  }
  else if (analogRead(A3) < thresh)
  {
    Serial.println("A3");
    tone(8, 699, 130);
    delay(del);
  }
  else if (analogRead(A4) < thresh)
  {
    Serial.println("A4");
    tone(8, 784, 130);
    delay(del);
  }
  // else if (analogRead(A5) < thresh)
  // {
  //   Serial.println("A5");
  //   tone(8, 880, 130);
  //   delay(del);
  // }
  else
  {
    Serial.println("nothing");
    delay(del);
  }
  // Serial.println("Outside the loop");

}
