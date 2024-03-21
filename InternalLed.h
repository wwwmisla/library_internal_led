/*
    Internal LED (LED Interno)

    InternalLed.h

    Um exemplo de como criar um LED vermelho que irá acender e após um determinado tempo irá apagar.

    O circuito:
    * InternalLed conectado ao pino D2

    Criado em 20/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

#ifndef InternalLed_h
#define InternalLed_h

#include "Arduino.h"

class InternalLed
{
  public:
    InternalLed(const int internalLed);   // Construtor da classe, utilizado para inicializar objetos da classe 
    void acendeLed();                     // Método público para ligar o LED
    void apagaLed();                      // Método público para desligar o LED
    void setDelay(int timeMs);            // Método público para definir o tempo de atraso (delay) em milissegundos
  
  private:
    int _internalLed;                     // Variável privada para armazenar o número do pino do LED interno
    int _timeMs;                          // Variável privada para armazenar o tempo de atraso (delay)
};

#endif