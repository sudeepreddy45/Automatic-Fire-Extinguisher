int flame=0;// select analog pin 0 for the sensor
int Beep=9;// select digital pin 9 for the buzzer
int val=0;// initialize variable
int relay= 13;
void setup()
{
pinMode(Beep,OUTPUT);// set buzzer pin as “output”
pinMode(relay,OUTPUT);// set LED pin as “output”
pinMode(flame,INPUT);// set flame pin as “input”
Serial.begin(9600);// set baud rate at “9600”
}
void loop()
{
val=analogRead(flame);// read the analog value of the sensor
Serial.println(val);// output and display the analog value
if(val>=500)// when the analog value is larger than 600, the buzzer will buzz
{
digitalWrite(Beep,HIGH);
digitalWrite(relay,HIGH);
}else
{
digitalWrite(Beep,LOW);
digitalWrite(relay,LOW);
}
delay(500);
}
