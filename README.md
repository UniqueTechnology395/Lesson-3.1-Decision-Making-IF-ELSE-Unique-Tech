# 🧠 Μάθημα 3.1: Η δύναμη του IF/ELSE | Λήψη Αποφάσεων

![Logic](https://img.shields.io/badge/Logic-Control%20Flow-brightgreen?style=for-the-badge&logo=diagrams.net&logoColor=white)
![AI Foundation](https://img.shields.io/badge/AI-Foundation-blue?style=for-the-badge&logo=artificial-intelligence&logoColor=white)

> "Η στιγμή που η μηχανή παύει να εκτελεί τυφλά εντολές και αρχίζει να 'σκέφτεται'."

## 📖 Περιγραφή
Σε αυτό το μάθημα της σειράς **Arduino Logic 101**, αναλύουμε τη σημαντικότερη δομή στον προγραμματισμό: το **IF/ELSE**. Μαθαίνουμε πώς να δίνουμε "κρίση" στο Arduino μας, επιτρέποντάς του να παίρνει αποφάσεις βάσει δεδομένων από τον πραγματικό κόσμο.



```cpp
if (co2_ppm > 1000) {
  digitalWrite(fanPin, HIGH); // Ενεργοποίηση αερισμού
  Serial.println("Υψηλό CO2! Καθαρισμός αέρα...");
} 
else {
  digitalWrite(fanPin, LOW);  // Στάση
  Serial.println("Η ποιότητα αέρα είναι καλή.");
}
```

# 📜 Άδεια Χρήσης (License)
**⚙️ Λογισμικό (Software)**
Ο κώδικας αυτού του project διατίθεται υπό την άδεια MIT License.

Προϋπόθεση: Πρέπει να συμπεριλαμβάνεται η αρχική δήλωση πνευματικών δικαιωμάτων της Unique Tech σε κάθε αντίγραφο ή σημαντικό μέρος του λογισμικού.

**📖 Περιεχόμενο & Τεκμηρίωση**
Τα κείμενα, τα ηλεκτρονικά σχέδια και το εκπαιδευτικό υλικό αποτελούν πνευματική ιδιοκτησία της Unique Tech. Η αναπαραγωγή τους επιτρέπεται μόνο με σαφή αναφορά (attribution) στην αρχική πηγή.

# 🔗 Σύνδεσμοι
* **🌐 Website: uniquetech.carrd.co**

* **📝 Blog: Unique Tech Blog**

* **🏗️ Lab: Sparmatseto Robotics**

© 2026 Unique Tech Team | Some Rights Reserved

Το περιεχόμενο προστατεύεται από πνευματικά δικαιώματα. Ο κώδικας διατίθεται υπό την άδεια MIT.
