/*
    Internal LED (LED Interno)

    Biblioteca para controlar um LED interno.

    InternalLed.ino - Exemplo

    Um exemplo de como criar um LED que irá acender e após um determinado tempo irá apagar.

    O circuito:
    * InternalLed conectado ao pino D13 do Arduino.

    Criado em 20/03/2024 | Atualizado em 23/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

#include <InternalLed.h>

// Define o pino ao qual o LED está conectado
#define LED_PIN 13

// Mapeamento de pinos | Criação de objetos
InternalLed led(LED_PIN)   ///< O pino conectado ao led interno

/**
 * A função setup do Arduino usada para configuração e configurar tarefas.
 */
void setup() {
  // Inicializa o objeto InternalLed
  led.begin();
}
// Fecha a função setup()

/**
 * A função de loop do Arduino usada para repetição de tarefas em loop.
 * loop() --> A função irá executar em repetição infinita logo após a função setup()
 */
void loop() {

  // Acende o LED (pino D13)
  led.acendeLed();

  /**
   * Aguarda um intervalo de tempo em milissegundos antes de prosseguir para a próxima função
   * delay(milissegundos);
   */
  delay(1000);

  // Apaga o LED (pino D13)
  led.apagaLed();

  /**
   * Aguarda um intervalo de tempo em milissegundos antes de prosseguir para a próxima função
   * delay(milissegundos);
   */
  delay(500);

}
// Fecha a função void loop()