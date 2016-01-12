
//basic layout of arduino code 

//pinMode- set the pin to be input of output 
//digitalWrite- set an outputs pin's valeu to HIGH (on) or LOW (off) 
//delay - delay for the specificed number of miliseconds 


//once we upload code to our board, it runs independetly, forever (as long as board has power) 
//we can use the USB cable to debug by sending messages over the serial port 

//Serial.begin(baud) we will use 9600 
//Serial.println(msg) 


void setup() {
  pinMode(3, OUTPUT);
  // put your setup code here, to run once:
  digitalWrite(3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}


