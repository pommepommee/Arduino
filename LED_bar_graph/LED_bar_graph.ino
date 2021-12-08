#define analogPin A0
#define nbLed 8

int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < nbLed ; i++){
    pinMode(leds[i], OUTPUT);  
  }
}

void loop() {
  int pot = analogRead(analogPin);
  int ledLevel = map(pot, 0, 1023, 0, nbLed);
  for (int i = 0; i < nbLed; i++){
    if(i < ledLevel){
      digitalWrite(leds[i], HIGH);
    } else {
      digitalWrite(leds[i], LOW);
    }
  } 

}
