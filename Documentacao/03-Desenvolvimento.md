
# Materiais

Os materiais utilizados no projeto foram:
- Arduino mega
- LEDs
- Sensor infravermeelho
- Módulo bluetooth (HC-05)
- Palito de picole
- Resistores
- Jumpers
- Protoboard
- Papel craft

# Desenvolvimento

O desenvolvimento do projeto foi desafiador em algumas partes, porém em outras, como a ligação da parte eletrônica e a decoração do projeto, as tarefas foram bem fáceis. No entanto, outras etapas exigiram adaptações significativas da teoria à prática. Houve uma mudança crucial do sensor de peso para o sensor infravermelho devido à complexidade da implementação. A montagem da escada também apresentou problemas inesperados, como a necessidade de pilastras de sustentação e ajustes no material.

## Desenvolvimento do Aplicativo

### Interface


O desenvolvimento das telas do aplicativo não representou uma grande complexidade, pois a interface foi concebida de forma minimalista e funcional. Além dos botões essenciais para conectar e desconectar o Bluetooth, o aplicativo principal contava com apenas três botões centrais, cada um com uma função, testar os leds, manter os leds acessos e voltar ao funcionamento normal.

### Código

O desenvolvimento do código do aplicativo foi um processo relativamente simples, dada a simplicidade do aplicativo. A única etapa que apresentou maior desafio foi a implementação da conexão Bluetooth, especificamente a lógica para que um botão no aplicativo do celular estabelecesse a comunicação com o módulo Bluetooth do sistema. No entanto, através de pesquisa e consulta a tutoriais no YouTube, conseguimos desenvolver essa parte do código de forma eficaz. As demais funcionalidades foram bastante simples de implementar, uma vez que se resumiam a enviar um número específico ao Arduino quando um determinado botão era clicado.

## Desenvolvimento do Hardware

### Montagem

A montagem do projeto, embora conceitualmente simples, mostrou-se bastante trabalhosa devido às limitações de espaço e à quantidade de componentes. Utilizou-se uma protoboard grande, preenchida por completo, para acomodar a vasta rede de cabos e resistores necessários para as conexões. O maior desafio foi na integração do módulo Bluetooth HC-05, como sua comunicação opera em menos de 5V, foi preciso um arranjo adicional de resistores para a correta divisão de corrente, garantindo a compatibilidade e o funcionamento adequado do sistema.

### Desenvolvimento do Código

O desenvolvimento do código para o Arduino/ESP foi relativamente dificil. Embora a lógica principal de acionamento dos LEDs fosse simples, a complexidade surgiu na integração dos sensores infravermelhos e na comunicação com o módulo Bluetooth para o controle inteligente da iluminação e recepção de comandos do aplicativo.

## Comunicação entre App e Hardware

Descreva como foi o processo de comunicação entre App e arduino/ESP.
