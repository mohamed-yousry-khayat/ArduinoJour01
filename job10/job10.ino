void setup() {
pinMode(0, OUTPUT);
}

void loop() {
analoglWrite(0, 0);
delay(1000);
analoglWrite(0, 50);
delay(1000);
analoglWrite(0, 100);
delay(1000);
analoglWrite(0, 150);
delay(1000);
analoglWrite(0, 200);
delay(1000);
}
