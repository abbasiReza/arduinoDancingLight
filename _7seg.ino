char data = 0;
int sega = 2, segc = 3, segd = 4, sege = 5, segf = 6, segg = 7, segh = 8, rgb1 = 9, rgb2 = 10, rgb3 = 11, red = 12, blue = 13;
void setup()
{
  Serial.begin(9600);
  for (int A = 2; A < 14; A++)
    pinMode(A, OUTPUT);

  digitalWrite(rgb1, LOW);
  digitalWrite(rgb2, HIGH);
  digitalWrite(rgb3, HIGH);
  delay(100);
  digitalWrite(rgb1, HIGH);
  digitalWrite(rgb2, HIGH);
  digitalWrite(rgb3, HIGH);
  delay(100);
  digitalWrite(rgb2, LOW);
  digitalWrite(rgb1, HIGH);
  digitalWrite(rgb3, HIGH);
  delay(100);
  digitalWrite(rgb1, HIGH);
  digitalWrite(rgb2, HIGH);
  digitalWrite(rgb3, HIGH);
  delay(100);
  digitalWrite(rgb3, LOW);
  digitalWrite(rgb2, HIGH);
  digitalWrite(rgb1, HIGH);
  delay(100);
  digitalWrite(rgb1, HIGH);
  digitalWrite(rgb2, HIGH);
  digitalWrite(rgb3, HIGH);
  delay(100);
}
void loop()
{
  if (Serial.available() > 0)
  {
A:
    data = Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if (data == '1') {
      for (;;) {
        data = Serial.read();
        Serial.print(data);
        Serial.print("\n");
        if (data == 'x') {
          for (int a = 2; a < 14; a++) {
            digitalWrite(a, LOW);
            digitalWrite(rgb1, HIGH);
            digitalWrite(rgb2, HIGH);
            digitalWrite(rgb3, HIGH);
            goto A;
          }
        }
        for (int a = 3; a < 8; a++) {
          digitalWrite(a, HIGH);
          delay(100);
          digitalWrite(a, LOW);
        }
        for (int a = 6; a >= 2; a--) {
          digitalWrite(a, HIGH);
          delay(100);
          digitalWrite(a, LOW);
        }
      }
    }
    if (data == '2') {
      for (;;) {
        int x = 1023;
        for (int a = x; a > 0; a--) {
          analogWrite(10, a);
          delay(5);
          data = Serial.read();
          if (data == 'x') {
            for (int a = 2; a < 14; a++) {
              digitalWrite(a, LOW);
              digitalWrite(rgb1, HIGH);
              digitalWrite(rgb2, HIGH);
              digitalWrite(rgb3, HIGH);
              goto A;
            }
          }
        }
        for (int a = x; a >= 0; a--) {
          analogWrite(11, a);
          delay(5);
          data = Serial.read();
          if (data == 'x') {
            for (int a = 2; a < 14; a++) {
              digitalWrite(a, LOW);
              digitalWrite(rgb1, HIGH);
              digitalWrite(rgb2, HIGH);
              digitalWrite(rgb3, HIGH);
              goto A;
            }
          }
        }
        for (int a = 0; a < x; a++) {
          analogWrite(10, a);
          delay(5);
          data = Serial.read();
          if (data == 'x') {
            for (int a = 2; a < 14; a++) {
              digitalWrite(a, LOW);
              digitalWrite(rgb1, HIGH);
              digitalWrite(rgb2, HIGH);
              digitalWrite(rgb3, HIGH);
              goto A;
            }
          }
        }
        for (int a = 0; a < x; a++) {
          analogWrite(11, a);
          delay(5);
          data = Serial.read();
          if (data == 'x') {
            for (int a = 2; a < 14; a++) {
              digitalWrite(a, LOW);
              digitalWrite(rgb1, HIGH);
              digitalWrite(rgb2, HIGH);
              digitalWrite(rgb3, HIGH);
              goto A;
            }
          }
        }
        data = Serial.read();
        if (data == 'x') {
          for (int a = 2; a < 14; a++) {
            digitalWrite(a, LOW);
            digitalWrite(rgb1, HIGH);
            digitalWrite(rgb2, HIGH);
            digitalWrite(rgb3, HIGH);
            goto A;
          }
        }
      }
    }
    if (data == '3') {
      for (;;) {
        data = Serial.read();
        Serial.print(data);
        Serial.print("\n");
        if (data == 'x') {
          for (int a = 2; a < 14; a++) {
            digitalWrite(a, LOW);
            digitalWrite(rgb1, HIGH);
            digitalWrite(rgb2, HIGH);
            digitalWrite(rgb3, HIGH);
            goto A;
          }
        }
        for (int a = 2; a < 9; a++)
          for (int b = 5; b >= 0; b--) {
            digitalWrite(a, HIGH);
            delay(50);
            digitalWrite(a, LOW);
            delay(50);
          }
      }
    }
    if (data == '4') {
      for (;;) {
        data = Serial.read();
        Serial.print(data);
        Serial.print("\n");
        if (data == 'x') {
          for (int a = 2; a < 14; a++) {
            digitalWrite(a, LOW);
            digitalWrite(rgb1, HIGH);
            digitalWrite(rgb2, HIGH);
            digitalWrite(rgb3, HIGH);
            goto A;
          }
        }
        for (int b = 5; b >= 0; b--) {
          digitalWrite(rgb1, LOW);
          delay(50);
          digitalWrite(rgb1, HIGH);
          delay(50);
        }
        for (int b = 5; b >= 0; b--) {
          digitalWrite(rgb2, LOW);
          delay(50);
          digitalWrite(rgb2, HIGH);
          delay(50);
        }
        for (int b = 5; b >= 0; b--) {
          digitalWrite(rgb3, LOW);
          delay(50);
          digitalWrite(rgb3, HIGH);
          delay(50);
        }
      }
    }
    if (data == '5') {
      for (;;) {
        data = Serial.read();
        Serial.print(data);
        Serial.print("\n");
        if (data == 'x') {
          for (int a = 2; a < 14; a++) {
            digitalWrite(a, LOW);
            digitalWrite(rgb1, HIGH);
            digitalWrite(rgb2, HIGH);
            digitalWrite(rgb3, HIGH);
            goto A;
          }
        }
        for (int b = 5; b >= 0; b--) {
          digitalWrite(red, HIGH);
          delay(50);
          digitalWrite(red, LOW);
          delay(50);
        }
        for (int b = 5; b >= 0; b--) {
          digitalWrite(blue, HIGH);
          delay(50);
          digitalWrite(blue, LOW);
          delay(50);
        }
      }
    }
