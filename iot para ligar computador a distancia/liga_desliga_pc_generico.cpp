#define BLYNK_TEMPLATE_ID   "ID do template"
#define BLYNK_TEMPLATE_NAME "Nome do template"
#define BLYNK_AUTH_TOKEN    "token para conectar ao template no Blynk"
#include <WiFi.h>
#include <WiFiManager.h>
#include <BlynkSimpleEsp32.h>

const int PINO = 14;
const int BOTAO = 0;   // botão BOOT da placa
BLYNK_WRITE(V0) { digitalWrite(PINO, param.asInt()); }
void setup() {
  pinMode(PINO, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  WiFiManager wm;
  wm.autoConnect("Medidor-Config");   // abre o portal se não houver rede salva
  Blynk.config(BLYNK_AUTH_TOKEN);
}
void loop() {
  // segurar o botão por 3 s abre o portal de novo
  if (digitalRead(BOTAO) == LOW) {
    delay(3000);
    if (digitalRead(BOTAO) == LOW) {
      WiFiManager wm;
      wm.startConfigPortal("iot-Config");
    }
  }
  if (WiFi.status() == WL_CONNECTED) Blynk.run();
}
