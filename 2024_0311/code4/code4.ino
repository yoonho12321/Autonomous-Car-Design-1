int value=77;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("DEC:");
Serial.println(value);
Serial.print("BIN");
Serial.println(value,BIN);
Serial.print("OCT:");
Serial.println(value,OCT);
Serial.print("HEX");
Serial.println(value,HEX);
}

void loop() {
  // put your main code here, to run repeatedly:

}
