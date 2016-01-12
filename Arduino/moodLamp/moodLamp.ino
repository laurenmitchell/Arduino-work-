int bluePin = 11;
int greenPin = 10;
int redPin = 9;
int blueSpins = A0;

void setup() {
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(blueSpins, INPUT);
  Serial.begin(9600);
}

void loop() {
  int potVal = analogRead(blueSpins);
  //Serial.println(poop);
if(potVal < 255){
  //happy pattern  :)
   digitalWrite(bluePin, LOW);
   digitalWrite(redPin, HIGH);
   digitalWrite(greenPin, HIGH);
   delay(500);
   digitalWrite(bluePin, LOW);
   digitalWrite(redPin, LOW);
   digitalWrite(greenPin, HIGH);
   delay(100);
} 
else if(potVal > 255 && potVal < 510){
  //sad :( 
   digitalWrite(redPin, LOW);
   digitalWrite(greenPin, LOW);
   for(int sad = 0; sad <= 75; sad ++){
     analogWrite(bluePin, sad);
     delay(35);
    }
   for(int sad2 = 0; sad2 <= 75; sad2 ++){
     analogWrite(bluePin,75-sad2);
     delay(35);
    } 
}  
  
 
else if(potVal > 510 && potVal < 765){
  //  <3 LOVE <3 
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  for(int heart = 0; heart <= 75; heart++){
    analogWrite(redPin, heart);
    delay(3);
  }
  delay(200);
  for(int heart2 = 0; heart2 <= 75; heart2++){
    analogWrite(redPin, heart2);
    delay(3);
  }
  digitalWrite(redPin,LOW);
  delay(500);
}

else{
  //SOS 
  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH); 
  delay(50);
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
 delay(150); 
  
}

}

