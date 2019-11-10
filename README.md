# Robô komeku

O Robô Komeku é o projeto de um Robô de categoria sumô, para a obtenção de nota para a máteria de *Microprocessadores e Microcontroladores* da **Universidade São Francisco**.

O projeto consiste em 3 partes, são elas:

## Receptor e controlador
Parte principal do robô, o cérebro. Esse módulo é responsável por receber um sinal de rádio frequência, e converte-lo para o movimento do robô. Foi utilizado o microcontrolador Arduino Uno em conjunto com o módulo bluetooth HC-05.
O circuito utilizado, é semelhante ao seguinte exemplo, porém com as portas diferentes.
![image3](https://user-images.githubusercontent.com/38075230/68551311-65995680-03ea-11ea-9490-ea76c61ab900.jpg)

O código utilizado no Arduino pode ser encontrado [aqui](https://github.com/JhonasMutton/robo-komeku/blob/master/Arduino/src/robo-komeku/robo-komeku.ino). Ele consiste básicamente em receber um caracter e ou digito através do bluetooth e tome a decisão da ação a ser tomada. No código com pouco conhecimento básico, é possível identificar as portas utilizadas, para a montagem e ou alteração das portas, caso necessário.

## Emissor
Para o microcontrolador receber um comando via rádio frequência é necessário que este sinal venha de um emissor. Foi escolhido o smartphone como emissor, por questões de facilidade e fácil portabilidade, utilizando um aplicativo próprio criado com App Inventor 2 e o protocólo Bluetooth.
É possível baixar o aplicativo para Android no formato *apk* [aqui](), e caso seja preciso alterações, é possível baixar o projeto App Inventor através desse [link]().
![f3994fac-79be-499f-a0c2-341d600cfc7d](https://user-images.githubusercontent.com/38075230/68551531-82368e00-03ec-11ea-8322-5089974e2076.jpg)

O app consiste em, conectar despositivos Bluetooth, selecionar a velociade do robô, ver logs da saída serial do arduino, caso necessário e enviar comandos de direção. Dentro do pseudo código do app, é possível ver como isso é feito. As direções enviadas para o robô, são letra maiusculas e minúsculas quando acionado o botão ou desacionado o mesmo, assim o robô sabe qual a ação a assumir.

*Obs: O app foi feito com base no smartphone Xiaomi MI A2 Lite, e por limitações do App Inventor não foi possível fazer responsivo de forma elegante. O smartphone base tem a tela de proporção 19:9, se o smartphone utilizado possuir essa especificação, pode ser que não precise de alterações, caso contrário, baixe o projeto e faça as alterações necessárias.*

O app pode ser substituido por outro equivalente, desde que:
- O envio dos comandos seja feito da mesma maneira.
- Seja um serviço com protocolo Bluetooth.
- Caso o envio seja diferente, seja alterado o código de recebimento do Arduino.
## Construção

Para a construção do Robô, foram utilizados como materiais principais:
 - 2 Motores de Vidro Elétrico Mabuchi
 - Arduino UNO
 - Módulo Bluetooth HC-05
 - Ponte H L298N
 - Bateria Li-Po 2200mAh 11.1V
 - Roda rodízio
 - Rodas de 120mm [impressas em 3D](https://www.tinkercad.com/things/hn9dhTgACTh) com revestimento em borracha (falaremos mais a diante)
 - Chapas de acrilico e ou PVC e ou fibra de vidro
 - Chapa de alumínio de 3mm
 - Parafusos de tamanhos váriados, entre: M3, M4 e M6
 - Interruptores eletricos

...

Em construção