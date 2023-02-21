#define SensorPIN A0 // pin of moisture sensor
int PowerPIN = 6;

void setup() {
  Serial.begin(9600);
  pinMode(PowerPIN, OUTPUT);  

}

void loop() {
  digitalWrite(PowerPIN, HIGH);
  int value = analogRead(SensorPIN); // read the analog value from sensor

  Serial.print("Moisture: ");
  Serial.println(value);
  digitalWrite(PowerPIN, LOW);
  delay(500);
}