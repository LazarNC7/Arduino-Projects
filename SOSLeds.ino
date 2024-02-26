int ledPin = 8;
int constantDelay = 500;
int dotDelay = 300;
int dashDelay = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  int cnt = 0;
  while (cnt != 3) {
    digitalWrite(ledPin, HIGH);
    delay(dotDelay);
    digitalWrite(ledPin, LOW);
    delay(constantDelay);
    cnt++;
  }

  cnt = 0;
  while (cnt != 3) {
    digitalWrite(ledPin, HIGH);
    delay(dashDelay);
    digitalWrite(ledPin, LOW);
    delay(constantDelay);
    cnt++;
  }

  cnt = 0;
  while (cnt != 3) {
    digitalWrite(ledPin, HIGH);
    delay(dotDelay);
    digitalWrite(ledPin, LOW);
    delay(constantDelay);
    cnt++;
  }
}
