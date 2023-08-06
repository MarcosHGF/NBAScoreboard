int t3=13;
int t2=12;
int d2=11;
int d3=10;
int led_red=3;
int led_green=4;
int buzz = 2;
int valt3 = 0;
int valt2 = 0;
int vald3 = 0;
int vald2 = 0;
int pt=0;
int pd=0;

void setup() {
 Serial.begin(9600);
pinMode(t3, INPUT);
pinMode(t2, INPUT);
pinMode(d3, INPUT);
pinMode(d2, INPUT);
pinMode(led_red, OUTPUT);
pinMode(led_green, OUTPUT);
pinMode(buzz, OUTPUT);
}
void loop() {

valt3 = digitalRead(t3);
valt2 = digitalRead(t2);
vald3 = digitalRead(d3);
vald2 = digitalRead(d2);

if(valt3 == 1){
  digitalWrite(led_red, 1);
 tone(buzz,494,2000); 
 delay(2000);
 digitalWrite(led_red, 0);
 pt= pt + 3; 
 Serial.print("time 1 :");
 Serial.println(pt);
}
if(vald3 == 1){
  digitalWrite(led_green, 1);
 tone(buzz,494,2000); 
 delay(2000);
 digitalWrite(led_green, 0);
 pd= pd + 3;
 Serial.print("time 2 :");
 Serial.println(pd);
}
if(valt2 == 1){
  digitalWrite(led_red, 1);
 delay(2000);
 digitalWrite(led_red, 0);
 pt= pt + 2;
 Serial.print("time 1 :");
 Serial.println(pt);
}
if(vald2 == 1){
  digitalWrite(led_green, 1);
 delay(2000);
 digitalWrite(led_green, 0);
 pd= pd + 2;
 Serial.print("time 2 :");
 Serial.println(pd);
}
  

}




