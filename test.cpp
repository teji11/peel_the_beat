//sample code

int const thresh = 800;
int const delay = 80;
void setup() {
}

void loop() {
  if (analogRead(A0) < thresh)
  {
    tone(8, 523, 130);
    delay(delay);
  }
  else if (analogRead(A1) < thresh)
  {
    tone(8, 587, 130);
    delay(delay);
  }
  else if (analogRead(A2) < thresh)
  {
    tone(8, 659, 130);
    delay(delay);
  }
  else if (analogRead(A3) < thresh)
  {
    tone(8, 699, 130);
    delay(delay);
  }
  else if (analogRead(A4) < thresh)
  {
    tone(8, 784, 130);
    delay(delay);
  }
  else if (analogRead(A5) < thresh)
  {
    tone(8, 880, 130);
    delay(delay);
  }
}
