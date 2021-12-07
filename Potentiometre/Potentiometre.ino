#define potentiometer A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potentio = analogRead(potentiometer);
  // Convertion de la lecture analogique (de 0 à 1023) à un voltage (0 à 5V)
  float voltage = potentio * (5.0 / 1023.0);
  Serial.println(potentio);
  Serial.println(voltage);
  Serial.println();
  delay(100);
}
