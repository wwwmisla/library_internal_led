# Biblioteca Internal LED (LED Interno)

[![Licence](https://img.shields.io/github/license/Ileriayo/markdown-badges?style=for-the-badge)](./LICENSE)
![Badge em Desenvolvimento](http://img.shields.io/static/v1?label=STATUS&message=EM+DESENVOLVIMENTO&color=GREEN&style=for-the-badge)

<div style="display: inline_block">

<img width="300px" align="right" src="https://cdn.pixabay.com/photo/2017/01/31/13/22/led-2023979_960_720.png" alt="LED Interno">

## Índice

- [Título e Imagem de capa](#library_internal_led)
- [Descrição do projeto](#-descrição-do-projeto)
- [Como usar](#-como-usar)
- [Do It Yourself](#-do-it-yourself)
- [Tecnologias Utilizadas](#%EF%B8%8F-tecnologias-utilizadas)
- [Licença](#%EF%B8%8F-licença)

</div>

## :page_facing_up: Descrição do Projeto 

<br>

<img width="300px" align="left" src="https://roboticsbackend.com/wp-content/uploads/2021/09/arduino_builtin_led.png" alt="Placa Arduino">

<br>

<p align="justify">A Internal Led (LED Interno), se trata de uma biblioteca simples e fácil de controlar um LED interno em placas Arduino. Com esta biblioteca, você pode ligar e desligar o LED interno com facilidade, permitindo que você teste rapidamente funcionalidades ou crie exemplos simples para suas aplicações.
</p>

<br>

## :gear: Como Usar

### Instalação

- Baixe a biblioteca <strong>InternalLed</strong> do repositório GitHub;
- Copie a pasta <strong>InternalLed</strong> para o diretório libraries do seu ambiente de desenvolvimento Arduino.
    - Em sistemas Windows, geralmente está localizado em `C:\Users\SeuUsuario\Documents\Arduino\libraries`;
    - Em sistemas macOS, geralmente está localizado em `~/Documents/Arduino/libraries`;
    - Em sistemas Linux, geralmente está localizado em `~/Arduino/libraries`.

### Uso básico

```shell
> Comece criando o arquivo internal_led.ino
```

- Inclua a biblioteca no seu sketch Arduino:
```c++
#include <InternalLed.h> 
```

- Crie um objeto <strong>InternalLed</strong> e especifique o pino ao qual o LED está conectado:
```c++
#define LED_PIN 13 // Pino do LED interno (pino 13 no Arduino Uno) 
InternalLed led(LED_PIN);
```

- No <strong>setup()</strong>, inicialize o objeto <strong>InternalLed</strong>:
```c++
void setup() {
  led.begin();
}
```

- Agora você pode ligar e desligar o LED interno usando os métodos <strong>acendeLed()</strong> e <strong>apagaLed()</strong>, respectivamente:
```c++
void loop() {
  // Ligar o LED interno
  led.acendeLed();

  // Aguardar por algum tempo
  delay(1000);

  // Desligar o LED interno
  led.apagaLed();

  // Aguardar por algum tempo
  delay(1000);
}
```

## :construction_worker: Do It Yourself

```c++
// Incluímos a biblioteca InternalLed.h.
#include <InternalLed.h>

// Definimos o pino ao qual o LED interno está conectado como pino 13.
#define LED_PIN 13

// Criamos um objeto led da classe InternalLed, passando o número do pino como argumento para o construtor.
InternalLed led(LED_PIN);

void setup() {
  // No setup(), inicializamos o objeto led.
  led.begin();
}

// No loop(), alternamos entre ligar e desligar o LED interno com intervalos de 1 segundo utilizando os métodos acendeLed() e apagaLed(), respectivamente.
void loop() {
  // Ligar o LED interno
  led.acendeLed();

  // Aguardar 1 segundo
  delay(1000);

  // Desligar o LED interno
  led.apagaLed();

  // Aguardar 1 segundo
  delay(1000);
}
```
Para mais informações de como o código funciona, <a href="./Examples/InternalLed/InternalLed.ino">Acesse o código aqui</a>.


## :hammer_and_wrench: Tecnologias Utilizadas

<div align="center">

![YouTube](https://img.shields.io/badge/YouTube-%23FF0000.svg?style=for-the-badge&logo=YouTube&logoColor=white)
![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23000000.svg?style=for-the-badge&logo=github&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

</div>

# :card_index_dividers: Licença
Licença MIT. Para mais informações sobre a licença, <a href="/LICENSE">Clique aqui</a>

<img src="https://github.com/umroboporaluno/.github/blob/main/profile/ura-logo.png" alt="URA Logo" width="100" align="right" />
