#include <SoftwareSerial.h>

// RX do Arduino ← TX do HC-05 (pino 11)
// TX do Arduino → RX do HC-05 (pino 10)
SoftwareSerial bluetooth(10, 11); // RX, TX

#define NUM_DEGRAUS 6
const int DELAY_LED_PASSO = 150;
const int TEMPO_LUZES_ACESSAS = 10000;

const int pinosLeds[NUM_DEGRAUS] = {2, 3, 4, 5, 6, 7};
const int pinoSensorSubida = 8;
const int pinoSensorDescida = 9;

char dadoRecebido;
bool luzesFixasAcesas = false;

void setup() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    pinMode(pinosLeds[i], OUTPUT);
    digitalWrite(pinosLeds[i], LOW);
  }

  pinMode(pinoSensorSubida, INPUT);
  pinMode(pinoSensorDescida, INPUT);

  bluetooth.begin(9600); // HC-05
  Serial.begin(9600);    // Para debug via USB
}

void acenderParaSubida() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    digitalWrite(pinosLeds[i], HIGH);
    delay(DELAY_LED_PASSO);
  }
}

void apagarParaSubida() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    digitalWrite(pinosLeds[i], LOW);
    delay(DELAY_LED_PASSO);
  }
}

void acenderParaDescida() {
  for (int i = NUM_DEGRAUS - 1; i >= 0; i--) {
    digitalWrite(pinosLeds[i], HIGH);
    delay(DELAY_LED_PASSO);
  }
}

void apagarParaDescida() {
  for (int i = NUM_DEGRAUS - 1; i >= 0; i--) {
    digitalWrite(pinosLeds[i], LOW);
    delay(DELAY_LED_PASSO);
  }
}

void acenderTodasLuzes() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    digitalWrite(pinosLeds[i], HIGH);
  }
}

void apagarTodasLuzes() {
  for (int i = 0; i < NUM_DEGRAUS; i++) {
    digitalWrite(pinosLeds[i], LOW);
  }
}

void loop() {
  // Recebendo dados do Bluetooth
  if (bluetooth.available()) {
    dadoRecebido = bluetooth.read();
    Serial.print("Bluetooth recebeu: ");
    Serial.println(dadoRecebido);

    switch (dadoRecebido) {
      case '1':
        apagarTodasLuzes();
        acenderParaSubida();
        delay(TEMPO_LUZES_ACESSAS);
        apagarParaSubida();
        luzesFixasAcesas = false;
        break;
      case '2':
        acenderTodasLuzes();
        luzesFixasAcesas = true;
        break;
      case '3':
        apagarTodasLuzes();
        luzesFixasAcesas = false;
        break;
    }
  }

  if (!luzesFixasAcesas) {
    int estadoSensorSubida = digitalRead(pinoSensorSubida);
    int estadoSensorDescida = digitalRead(pinoSensorDescida);

    if (estadoSensorSubida == LOW) {
      acenderParaSubida();
      delay(TEMPO_LUZES_ACESSAS);
      apagarParaSubida();
      while (digitalRead(pinoSensorSubida) == LOW) delay(50);
    }

    if (estadoSensorDescida == LOW) {
      acenderParaDescida();
      delay(TEMPO_LUZES_ACESSAS);
      apagarParaDescida();
      while (digitalRead(pinoSensorDescida) == LOW) delay(50);
    }
  }
}
