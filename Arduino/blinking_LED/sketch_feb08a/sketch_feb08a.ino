

void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int poop = analogRead(A0);
  Serial.println(analogRead(A0));
  digitalWrite(12, HIGH);
  delay(poop);
  digitalWrite(12, LOW);
  delay(poop);
//  digitalWrite(12,HIGH);
//  delay(300);
//  digitalWrite(12, LOW);
//  delay(150);
//  digitalWrite(12, HIGH);
//  delay(300);
//  digitalWrite(12,LOW);
//  delay(1200);
//  // put your main code here, to run repeatedly:

}
