# Introdução

Este projeto propõe o desenvolvimento de um sistema de iluminação automatizada para escadas, visando otimizar a segurança e a eficiência energética em ambientes residenciais e comerciais. Nosso sistema utiliza um sensor infravermelho integrado ao primeiro e ao último degrau para detectar de forma precisa a intenção de uso da escada, acionando um conjunto de LEDs que iluminam o caminho de forma inteligente, e após a pessoa subir a escada ela apagará de forma automática. O objetivo é proporcionar uma solução prática que melhore a experiência do usuário e contribua para a redução do desperdício de energia.

## Problema

A iluminação de escadas em muitos ambientes apresenta desafios em termos de segurança e eficiência. Frequentemente, a iluminação é mantida acesa continuamente, resultando em alto consumo de energia, ou é acionada por interruptores manuais, que exigem a interação do usuário e podem ser inconvenientes em situações de pouca luz ou pressa. Sensores de presença tradicionais, embora úteis, podem ser imprecisos demorando no acionamento das luzes ( ativados por movimentos irrelevantes ou ter dificuldades em detectar a aproximação de forma precisa para iluminar o trajeto completo da escada antes que o usuário precise. Essa imprecisão pode levar a um breve período de escuridão no início da subida ou descida, comprometendo a segurança, especialmente para idosos ou pessoas com dificuldades de locomoção. Além disso, o acionamento ineficaz da iluminação contribui para o desperdício de energia elétrica.)

## Objetivos

O objetivo geral deste trabalho é desenvolver um protótipo de sistema de iluminação inteligente para escadas que resolva os problemas de segurança e eficiência energética apresentados acima.

Objetivos Específicos:

 1- Desenvolver um sistema de detecção de presença baseado em sensor de peso: Implementar uma solução que utilize uma célula de carga e o módulo HX711 para identificar com precisão a presença de uma pessoa no início da escada, diferenciando-a de outros eventos e garantindo o acionamento oportuno da iluminação.

 2- Implementar um controle de iluminação responsivo e eficiente: Programar o microcontrolador para acionar os LEDs dos degraus de forma automática e por um período de tempo pré-determinado após a detecção de presença, garantindo a iluminação adequada do trajeto e desligando os LEDs automaticamente quando a escada não estiver em uso para economizar energia.

 
## Público-Alvo

Descreva quem serão as pessoas que usarão o projeto. A ideia é, dentro do possível, conhecer um pouco mais sobre o perfil dos usuários: conhecimentos prévios, relação com a tecnologia, etc.
