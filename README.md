# 🧠 Μάθημα 3.1: Η δύναμη του IF/ELSE | Λήψη Αποφάσεων
![Logic](https://img.shields.io/badge/Logic-Control%20Flow-brightgreen?style=for-the-badge&logo=diagrams.net&logoColor=white)
![AI Foundation](https://img.shields.io/badge/AI-Foundation-blue?style=for-the-badge&logo=artificial-intelligence&logoColor=white)

> "Η στιγμή που η μηχανή παύει να εκτελεί τυφλά εντολές και αρχίζει να 'σκέφτεται'."

## 📖 Περιγραφή
Σε αυτό το μάθημα της σειράς **Arduino Logic 101**, αναλύουμε τη σημαντικότερη δομή στον προγραμματισμό: το **IF/ELSE**. Μαθαίνουμε πώς να δίνουμε "κρίση" στο Arduino μας, επιτρέποντάς του να παίρνει αποφάσεις βάσει δεδομένων από τον πραγματικό κόσμο.

---

## 🗺️ Διάγραμμα Ροής (Logic Map)
Πριν γράψουμε κώδικα, σχεδιάζουμε τη λογική. Το παρακάτω διάγραμμα δείχνει πώς το project **MLA** αποφασίζει αν πρέπει να ενεργοποιήσει τον συναγερμό βάσει των επιπέδων CO2.



---

## 💻 Κώδικας Παραδείγματος
Ο παρακάτω κώδικας ελέγχει έναν "έξυπνο" ανεμιστήρα:

```cpp
if (co2_ppm > 1000) {
  digitalWrite(fanPin, HIGH); // Ενεργοποίηση αερισμού
  Serial.println("Υψηλό CO2! Καθαρισμός αέρα...");
} 
else {
  digitalWrite(fanPin, LOW);  // Στάση
  Serial.println("Η ποιότητα αέρα είναι καλή.");
}
