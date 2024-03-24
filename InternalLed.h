/*
    Internal LED (LED Interno)

    Biblioteca para controlar um LED interno, onde será possível acender e após um determinado tempo apagar o LED.

    InternalLed.h

    Criado em 20/03/2024 | Atualizado em 23/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

#ifndef InternalLed_h
#define InternalLed_h

#include "Arduino.h"

class InternalLed
{
  public:
    InternalLed(int pin);               // Construtor da classe, utilizado para inicializar objetos da classe - Ele recebe o número do pino ao qual o LED interno está conectado como argumento.
    void begin();                      // Método público para inicializar qualquer configuração necessária para a classe InternalLed.
    void acendeLed();                 // Método público para ligar o LED.
    void apagaLed();                  // Método público para desligar o LED.
  
  private:
    int _pin;                        // Variável privada para armazenar o número do pino ao qual o LED interno está conectado - Ela é acessível apenas dentro da classe InternalLed.
};

#endif