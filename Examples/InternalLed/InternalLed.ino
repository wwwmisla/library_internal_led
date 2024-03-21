/*
    Internal LED (LED Interno)

    InternalLed.ino - Exemplo

    Um exemplo de como criar um LED vermelho que irá acender e após um determinado tempo irá apagar.

    O circuito:
    * InternalLed conectado ao pino D2

    Criado em 20/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

// Mapeamento de pinos | Criação de objetos
InternalLed led(13)   ///< O pino conectado ao led interno

/**
 * A função setup do Arduino usada para configuração e configurar tarefas.
 */
void setup() {}
// Fecha a função setup()

/**
 * A função de loop do Arduino usada para repetição de tarefas em loop.
 * loop() --> A função irá executar em repetição infinita logo após a função setup()
 */
void loop() {

  led.acendeLed();  // Chamando a função para ligar o LED

  setDelay(1000);   // Aguarda 1 segundo (1000 milissegundos)

  led.apagaLed();   // Chamando a função para desligar o LED

  setDelay(500);    // Aguarda 0,5 segundos (500 milissegundos)

}
// Fecha a função void loop()