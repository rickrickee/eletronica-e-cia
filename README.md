# iot para ligar um computador a distância
Este é um projeto de dispositivo para ligar computadores de mesa a distância via internet. Este dispositivo é ligado diretamente na placa mãe, e funciona por intermédio de um ESP32-WIFI.

Para garantir a segurança da placa-mãe e, consequentemente, do computador, o dispositivo utiliza o CI PC817. 
Este circuito integrado é responsável por isolar eletricamente as duas partes do circuito: a conectada a placa-mãe, e a conectada ao ESP32. 
Assim, problemas elétricos na parte do ESP32 não afetam a parte da placa-mãe, e vice-versa.
O PC817 realiza a comunicação entre duas regiões isoladas de um circuito através de sinais infra-vermelhos. Como observado na Figura 1, um sinal emitido entre os pinos 1 e 2 é transmitido via onda infra-vermelha
