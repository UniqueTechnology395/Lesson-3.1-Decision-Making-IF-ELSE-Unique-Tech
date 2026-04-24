int temperature = 28; // Τιμή από αισθητήρα

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); // LED για το Air Condition
}

void loop() {
  if (temperature > 25) {
    digitalWrite(13, HIGH); // Άναψε το AC
    Serial.println("Πολύ ζέστη! Ενεργοποίηση ψύξης.");
  } 
  else {
    digitalWrite(13, LOW);  // Σβήσε το AC
    Serial.println("Η θερμοκρασία είναι ιδανική.");
  }
  delay(1000);
}
