# Descrição do projeto
Este é um projeto de dispositivo para ligar computadores de mesa a distância via internet. Este dispositivo é ligado diretamente na placa mãe, e funciona por intermédio de um ESP32-WIFI.

Para garantir a segurança da placa-mãe e, consequentemente, do computador, o dispositivo utiliza o CI PC817, um octacoplador. 
Este circuito integrado é responsável por isolar eletricamente as duas partes do circuito: a conectada a placa-mãe, e a conectada ao ESP32. 
Um octacoplador realiza a comunicação entre duas regiões isoladas de um circuito através de sinais infravermelho. 
Como observado na Figura 1, um sinal percorre o diodo infravermelho emissor (entre os pinos 1 e 2), este emite um sinal infravermelho para o receptor (entre os pinos 3 e 4). Dessa forma, um sinal é emitido sem a necessidade de conexão física entre as partes.
Assim, problemas elétricos na parte do ESP32 não afetam a parte da placa-mãe, e vice-versa.

<div align="center"> Figura 1 </div>

<p align="center">
  <img src="imagens/imagem-octacoplador.png" width="500">
</p>
<div align="center"> Fonte: Editor de esquemas do KiCad </div>

Na Figura 2, é demonstrada uma imagem do esquema do circuito. As entradas Power SW+ e Power SW- representam os dois pinos do cabo responsável por ligar o botão liga/desliga do computador a placa mãe. Neste esquema, elas são ligadas em paralelo a saída do PC817, permitindo o botão liga/desliga funcionar independentemente. O resistor R1, de 200 ohms, limita a corrente que chega ao LED infravermelho interno do octacoplador. Sem ele, o LED pode sofrer sobrecarga e apresentar defeito. O resistor R2, de mesmo valor, faz parte de um circuito pull-dowm, responsável por manter o nível lógico baixo na segunda parte do circuito.

<div align="center"> Figura 2 </div>

<p align="center">
  <img src="imagens/esquema.png" width="500">
</p>
<div align="center"> Fonte: Autoria própria </div>
