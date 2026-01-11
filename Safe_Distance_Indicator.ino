int trig=5;
int echo=A0;
int led=6;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:

 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
 pinMode(led, OUTPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);
  duration=pulseIn(echo, HIGH);
  distance=duration*0.034/2;
  Serial.println(distance);
  delay(100);

  if (distance<35) {
    digitalWrite(led, HIGH);
    
    }
  else{
     digitalWrite(led, LOW);
    
    } 

  


}
