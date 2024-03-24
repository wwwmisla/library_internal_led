/*
    Internal LED (LED Interno)

    Biblioteca para controlar um LED interno, onde será possível acender e após um determinado tempo apagar o LED.

    InternalLed.cpp

    Criado em 20/03/2024 | Atualizado em 23/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

#include "Arduino.h"
#include "InternalLed.h"

InternalLed::InternalLed(int pin)
{
    // Variável privada: _pin para armazenar o número do pino ao qual o LED está conectado 
  _pin = pin;
}

void InternalLed::begin()
{
    /**
     * Determina a porta conectada ao InternalLed e o modo de operação para os LEDs
     * pinMode(porta, modo);
     * modo --> INPUT = Entrada de dados | OUTPUT = Saída de dados
     */
  pinMode(_pin, OUTPUT);
}

void InternalLed::acendeLed()
{
    /**
     * Acende o led
     * digitalWrite(porta, sinal);
     * sinal --> HIGH = Liga o LED | LOW = Desliga o LED
     */
  digitalWrite(_pin, HIGH);
}

void InternalLed::apagaLed()
{
    /**
     * Apaga o led
     * digitalWrite(porta, sinal);
     * sinal --> HIGH = Liga o LED | LOW = Desliga o LED
     */
  digitalWrite(_pin, LOW);
}