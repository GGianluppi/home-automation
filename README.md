# Home Automation

Este projeto é parte do Trabalho de Conclusão do Curso II, que propõe o desenvolvimento de um dispositivo de automação residencial responsável por controlar equipamentos domésticos e interagir com pessoas com deficiência física dentro de um ambiente através de comando de voz, e fornecendo ao
usuário uma interface através de um aplicativo.


## Diagrama geral do funcionamento do protótipo

<p align="center">
<img src="https://user-images.githubusercontent.com/104764600/192168021-f1e8db62-0d51-414c-b81d-95754818fb5d.png" width="650" height="250">
</p>

A interpretação do diagrama pode ser entendida da seguinte forma: a primeira
alternativa para que o usuário acione um determinado equipamento, é utilizando o
reconhecimento de voz realizado diretamente pelo módulo de reconhecimento de voz
V3, onde ele enviará um comando para o módulo de 4 canais que fará o acionamento
dos relés. A outra alternativa, visando pessoas que apresentam alguma incapacidade
total ou parcial de produzir fala, permite a utilização de um aplicativo. Essa alternativa,
faz com que o usuário realize os mesmos acionamentos que um segundo indivíduo
faria ao acionar um equipamento pelo reconhecimento de voz.

## Protótipo de Reconhecimento de voz junto ao aplicativo Blynk

É possível observar o protótipo e aplicativo realizado para efetuar o acionamento dos equipamentos. Percebe-se que, todas as 4 lâmpadas que estão sendo representadas por cômodos, estão desativadas. A representação que os dispositivos não estão acionados, serão representados pela cor
vermelha, de maneira oposta, a cor verde representa que o dispositivo está acionado.


<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192415670-c991bad7-e646-427b-b19c-f0be5d1b78d8.jpeg" width="500" height="350" /> <img src = "https://user-images.githubusercontent.com/104764600/192168047-b538d6fe-9c75-487e-b19d-905a19535275.jpeg" width="200" height="350" /></p>

<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192396701-7f96627a-24fd-4fc4-819f-7bab486ab688.jpeg" width="500" height="350" /> <img src = "https://user-images.githubusercontent.com/104764600/192168050-3a588fff-e99b-4d4a-acc4-c8be4831f0c0.jpeg" width="200" height="350" /></p>

Duas formas de acionamento foram utilizadas e ambas tiveram uma alteração de cor no aplicativo Blynk, ou seja, assim que a
primeira lâmpada foi acionada pela reprodução da palavra "Quarto", o ícone logo se alterou para a cor verde. O mesmo ocorreu com o botão "Sala", após pressioná-lo, sua cor se alterou de vermelho para verde, acionando a segunda lâmpada.

## Testes reproduzidos no protótipo

Na primeira abordagem do teste consiste em observar a eficiência do aplicativo Blynk e do ESP8266 versão ESP-01 para acionamentos à distância, representado pela figura da esqueda. Alem disso, foram realizados testes voltado para o reconhecimento de voz, representado pela figura da direita.

(OBS: Nesta etapa de teste do reconhecimento de voz, foi adotada no modo de gravação uma distância mais próxima do módulo VR3. Por essa razão, a eficácia do reconhecimento de voz se qualificou próximo a distância inicialmente gravada.)

<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192168052-db0d6065-cc64-4c4e-82fc-e8feb49c87c3.png" width="400" height="300" /> <img src = "https://user-images.githubusercontent.com/104764600/192168054-b47511dc-f7bc-4df5-a933-24a7e30ab186.png" width="400" height="300" /></p>

Além disso, foi obtido eficiência do protótipo através das tentativas e distâncias adotas. Nas figuras baixo, são representadas a eficiência do aplicativo e módulo de reconecimento de voz respectivamente.

<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192168069-abeb1d80-f80c-4227-a31f-67a5e6c45dda.png" width="250" height="250" /> <img src = "https://user-images.githubusercontent.com/104764600/192168067-07631da2-62d5-470f-bed7-5c251d14fb4c.png" width="250" height="250" /></p>

## Circuito de controle do protótipo

<p align="center">
<img src="https://user-images.githubusercontent.com/104764600/192168035-c2d9b719-73f8-40eb-8eeb-ba66d55b6fb1.png" width="1050" height="650">
</p>






