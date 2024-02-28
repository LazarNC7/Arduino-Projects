int myPins[]={13,12,8,7};
void setup() {
  pinMode(myPins[0], OUTPUT);
  pinMode(myPins[1], OUTPUT);
  pinMode(myPins[2], OUTPUT);
  pinMode(myPins[3], OUTPUT);
}

void loop() {
  int n=15;
  for(int i=0;i<=15;i++){
    int isActive[4];
    for(int j=0;j<4;j++){
      isActive[j]=((i&(1<<j)) != 0)? 1: 0;
      digitalWrite(myPins[j],isActive[j]);
    }
    delay(1000);
  }

}
