/* * ----------------------------------------------------------------------------
 * Project: Unique Tech Decision Making If-Else
 * Author: Unique Tech Team
 * License: MIT License
 * * Copyright (c) 2026 Unique Tech
 * * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * ----------------------------------------------------------------------------
 */

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
