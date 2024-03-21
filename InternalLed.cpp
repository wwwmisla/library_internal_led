/*
    Internal LED (LED Interno)

    InternalLed.cpp

    Um exemplo de como criar um LED vermelho que irá acender e após um determinado tempo irá apagar.

    O circuito:
    * InternalLed conectado ao pino D2

    Criado em 20/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

#include "Arduino.h"
#include "InternalLed.h"

InternalLed::InternalLed(int internalLed)
{
    /**
     * Determina a porta conectada ao InternalLed e o modo de operação para os LEDs
     * pinMode(porta, modo);
     * modo --> INPUT = Entrada de dados | OUTPUT = Saída de dados
     */
  pinMode(_internalLed, OUTPUT);

    /** 
     * Variáveis privadas: _internalLed para armazenar o número do pino ao qual o LED está conectado e
     * _timeMs para armazenar o intervalo de tempo em milissegundos
    */
  _internalLed = internalLed;
  _timeMs = 1000;

}

void InternalLed::acendeLed()
{
    /**
     * Acende o led
     * digitalWrite(porta, sinal);
     * sinal --> HIGH = Liga o LED | LOW = Desliga o LED
     */
  digitalWrite(_internalLed, HIGH);
}

void InternalLed::apagaLed()
{
    /**
     * Apaga o led
     * digitalWrite(porta, sinal);
     * sinal --> HIGH = Liga o LED | LOW = Desliga o LED
     */
  digitalWrite(_internalLed, LOW);
}

    /**
     * Aguarda um intervalo de tempo em milissegundos antes de prosseguir para a próxima função
     * delay(milissegundos);
     */
void InternalLed::setDelay(int timeMs) 
{
  _timeMs = timeMs;
}