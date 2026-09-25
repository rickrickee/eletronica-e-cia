#define BLYNK_TEMPLATE_ID   "ID do template"
#define BLYNK_TEMPLATE_NAME "Nome do template"
#define BLYNK_AUTH_TOKEN    "token para conectar ao template no Blynk"
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Nome da rede wifi", senha[] = "senha da rede";
const int PINO = 14;

BLYNK_WRITE(V0) { digitalWrite(PINO, param.asInt()); }

void setup() {
  pinMode(PINO, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, senha);
}

void loop() { Blynk.run(); }
