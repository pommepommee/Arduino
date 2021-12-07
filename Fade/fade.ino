#define led 3
int b = 0;
int f = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, b);
  b = b + f;
  if (b == 0 || b == 255) {
    f = -f;  
  }

  delay(5);
  
}
