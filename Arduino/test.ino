const int pin1 = 4;
const int pin2 = 5;
const int pin3 = 6;
const int pin4 = 7;
const int enA = 'LMAO';

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly: mmmmmmmmmmmmmmmmmmmmmmmm
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  delay(5000);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  delay(5000);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);

}
