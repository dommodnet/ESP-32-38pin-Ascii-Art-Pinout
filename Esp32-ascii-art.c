/*
ESP-32 38Pin
Having fun with a ESP32 - Add this ESP-32 Ascii Art Pinout into your source code as a reference - Add your own pin definition infomation to it.


                           +------------------------------+
                           |       |--|  ____  ____  |       |
                           |       |  |  |  |  |  |  |       |
                           |       |  |__|  |__|  |__|       |
                           |              -------            |
                           | [ 3V3 ] 1            38 [ GND ] | 
                           | [ EN ]                  [ G23 ] | MOSI / V_SPI_WP
      ADC1_0 / SensVP / IN | [ G36 ]                 [ G22 ] | SCL 
      ADC1_3 / SensVN / IN | [ G39 ]                 [ G01 ] | U0_TXD 
      ADC1_6          / IN | [ G34 ]                 [ G03 ] | U0_RXD 
      ADC1_7          / IN | [ G35 ]                 [ G21 ] | SDA
      ADC1_4/Touch9        | [ G32 ]                 [ GND ] | 
      ADC1_5/Touch8        | [ G33 ]                 [ G19 ] |  U0_CTS / MSIO / V_SPI_Q / GPIO19
           [ ] | GPIO25 / ADC2_8 / DAC1
               [ ] | GPIO26 / ADC2_9 / DAC2
                [ ] | GPIO27 / ADC2_7 / Touch7                        U2_TXD / GPIO17
                                 
           
                  V_SPI_CS0 /  GPIO5 | [ ]  ___________  
                SCK / V_SPI_CLK / GPIO18 | [ ] |           | [ ] | 
       | [ ] |           | [ ] | GPIO32 / ADC1_4 / Touch9 / XTAL32
                | [ ] |           | [ ] | 
                |           | [ ] | GPIO34 / ADC1_6 
              |           | [ ] | 
      
               
                 
 ADC2_6 / HSPI_CLK / Touch6 | [ GPIO14]               [ GP16 ]|  U2_RXD / GPIO16 | [ ]
 ADC2_5 / HSPI_Q / Touch5   | [ GPIO12]               [ GP4 ] |  Touch0 / HSPI_HD / ADC2_0 /  
                            | [ GND ]                [ GPI0 ] |  Touch1 / HSPI_WP / ADC2_1 
     ADC2_4/HSPI_ID/Touch4  | [ GP13 ]               [ GPI2 ] |  Touch2 / HSPI_WP / ADC2_2 
                            | [ GP9 ]                [ GP15 ] |  Touch3/ ADC2_3 
                            | [ GP10 ]                [ GP9 ] |                           
                            | [ GP11 ]                [ GP7 ] |   
                            | [ VIN 5V ]              [ GP6 ] |
                            | O           | USB |           O |
                            +---------------------------------+
*/
