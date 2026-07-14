const int buttonPin = 4;
const int irFront = 34;

void setup() {

  pinMode(buttonPin, INPUT_PULLUP);

  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  while (digitalRead(buttonPin) == HIGH) {
    delay(10);
  }

  delay(200);
}