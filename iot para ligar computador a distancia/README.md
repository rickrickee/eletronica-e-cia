# Descrição do projeto
Este é um projeto de dispositivo para ligar computadores de mesa a distância via internet. Este dispositivo é ligado diretamente na placa mãe, e funciona por intermédio de um ESP32-WIFI.

Para garantir a segurança da placa-mãe e, consequentemente, do computador, o dispositivo utiliza o CI PC817, um octacoplador. 
Este circuito integrado é responsável por isolar eletricamente as duas partes do circuito: a conectada a placa-mãe, e a conectada ao ESP32. 
Um octacoplador realiza a comunicação entre duas regiões isoladas de um circuito através de sinais infravermelho. 
Como observado na Figura 1, um sinal percorre o diodo infravermelho emissor (entre os pinos 1 e 2), este emite um sinal infravermelho para o receptor (entre os pinos 3 e 4). Dessa forma, um sinal é emitido sem a necessidade de conexão física entre as partes.
Assim, problemas elétricos na parte do ESP32 não afetam a parte da placa-mãe, e vice-versa.

![Texto Alternativo](Imagem do PC817)
