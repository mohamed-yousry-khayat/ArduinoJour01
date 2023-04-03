int comptebouton;

void setup() {
pinMode(4, OUTPUT); // led
pinMODE(2, INPUT); // bouton
comptebouton = 0;
}

void loop() {
  if (digitalRead(2) == HIGH) {
    comptebouton += 1;
    if (comptebouton == 4) {
      comptebouton = 0;
    }
  }
  if (comptebouton == 1) {
    (digitalRead(2)== HIGH && < millis(5000))
    digitalWrite(4, HIGH);
    else {
      digitalWrite(4, LOW)
    }
  }
  if (comptebouton == 2){
    digitalWrite(4, HIGH);
  }
  if (comptebouton == 3) {
    void loop () {
      digitalWrite (4, HIGH);
      delay (2000)
      digitalWrite(4, LOW);
      delay (2000)
    }
  }
}
