int redPin = 12;
int bluePin = 13; 
boolean redOn = false;
boolean blueON = false;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  Serial.begin(9600);
  // put your setup code here, to run once:
  int timer = 0;
}

void loop() {
  int timeElapsed = millis();
  timer++;
  if (timer % 100 > 0){ 
  }
  if (redOn) {
        digitalWrite(redPin, LOW);
        redON = false;
        
    else () {
      digitalWrite(redPin,HIGH);
    //toggle red
  }
  }
  
  if (blueON) {
        digitalWrite(bluePin, LOW);
        blueOn = false;

    else {
       digitalWrite(bluePin, HIGH);

    }
  //toggle blue 
  }
  
  
  //delay(100);
  
  
  // put your main code here, to run repeatedly:

}
