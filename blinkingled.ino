float b;
void setup() {
serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);

}

void loop() {
b=analogRead(A3);
b=b*5/1023;
if(b>=3.90&&b<=4.0){digitalWrite(3,HIGH);}else{digitalWrite(5,Low);}
if(b>=4.25&&b<=4.35){digitalWrite(3,HIGH);}else{digitalWrite(5,Low);}
serial.print("A3");serial.println(b);delay(10);
}
