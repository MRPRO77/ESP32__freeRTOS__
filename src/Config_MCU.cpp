/*********************Função que configura Pinos do MCU*************************

                       configuração para Arduino UNO

*******************************************************************************/
/******************************************************************************/
                    /* Arquivos de inclusão */

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>



#include "Config_MCU.h"




     #define LED 2





// ======================================================================================================
// --- Função de inicialização do Display ---
// ======================================================================================================
// --- Objetos ---
 void config_mcu()

 {

      pinMode(LED,OUTPUT);
     Serial.begin(115200);
    
     
 }


 void teste_LED()
 {
    
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  delay(500);
  Serial.println("OI");

  
 }