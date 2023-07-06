/*******************************************************************************
   Título:      TCC  Engenharia Mecatrônica.

   Descrição:   C L P   ---  I H M

   Processador: Esp32
   


   Desenvolvido: MRPRO Tecnologia e Automação

   Autor: Tecnologo. Marcelo Rodrigues     
   CREA-SP 5070505617

   Data de Inicio: 3/07/2023       Versão:   2023.3.7

   Versão Multi_folhas VS-CODE & freeRTOS
        

   Nome do Arquivo:
   https://capsistema.com.br/index.php/2020/11/27/como-usar-i2c-no-arduino-comunicacao-entre-duas-placas-arduino/   data da visita 05/06/2022
  
*******************************************************************************/  
/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_____________________________________
                                                                             
=====================================================================================================      

=====================================================================================================   */   

// ========================================================================================================
// --- Bibliotecas Auxiliares ---

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

/*Biblioteca FreeRTOS*/
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "Config_MCU.h"

    #define LED 2





// ======================================================================================================
// --- Configurações Iniciais ---
void setup() 
{
   config_mcu ();
  
} //end setup


void loop() {

   teste_LED ();


}

