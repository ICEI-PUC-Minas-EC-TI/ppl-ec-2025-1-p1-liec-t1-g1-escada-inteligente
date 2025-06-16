# Código do Arduino/ESP

Mantenha neste diretório todo o código do Arduino ou ESP. Para isso, salve aqui o arquivo .ino.

#define NUM_DEGRAUS 10

const int pinosLeds[NUM_DEGRAUS] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Ajustar para os degrais
const int pinoSensorSubida = 12;   // Sensor que ficara no primeiro degrau (ajustar)
const int pinoSensorDescida = 13;  // Sensor que ficara no ultimo degrau (ajustar)

void setup() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    pinMode(pinosLeds[i], OUTPUT);
    digitalWrite(pinosLeds[i], LOW);
  }
  pinMode(pinoSensorSubida, INPUT);
  pinMode(pinoSensorDescida, INPUT);
}

void acenderSubida() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    digitalWrite(pinosLeds[i], HIGH);
    delay(300);
  }
}

void apagarSubida() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    digitalWrite(pinosLeds[i], LOW);
    delay(300);
  }
}

void acenderDescida() {
  for (int i = NUM_DEGRAUS - 1; i >= 0; i--) {
    digitalWrite(pinosLeds[i], HIGH);
    delay(300);
  }
}

void apagarDescida() {
  for (int i = NUM_DEGRAUS - 1; i >= 0; i--) {
    digitalWrite(pinosLeds[i], LOW);
    delay(300);
  }
}

void loop() {
  if (digitalRead(pinoSensorSubida) == HIGH) {
    acenderSubida();
    delay(3000); // Mantém aceso por 3 segundos
    apagarSubida();
  } else if (digitalRead(pinoSensorDescida) == HIGH) {
    acenderDescida();
    delay(3000); // Mantém aceso por 3 segundos
    apagarDescida();
  }
}
