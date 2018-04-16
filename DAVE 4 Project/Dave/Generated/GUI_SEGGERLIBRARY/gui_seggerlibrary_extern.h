/*********************************************************************************************************************
* DAVE APP Name : GUI_SEGGERLIBRARY       APP Version: 4.1.10
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-16:
 *     - Initial version<br>
 *
 * @endcond
 *
 */
 
#ifndef GUI_SEGGERLIBRARY_EXTERN_H
#define GUI_SEGGERLIBRARY_EXTERN_H

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/
#define SPI_INSTANCE SPI_MASTER_1
/***********************************************************************************************************************
 * EXTERN DECLARATIONS
***********************************************************************************************************************/
extern GUI_SEGGERLIBRARY_t GUI_SEGGERLIBRARY_0;
#if (!USER_DEFINED_LCD && SPI_INTERFACE == 1)	
extern const GUI_SEGGERLIBRARY_CONFIG_t GUI_SEGGERLIBRARY_0_config;
#endif
#if ((USER_DEFINED_LCD == 1 || SPI_INTERFACE == 0) && (DISPLAY_8BPP == 1))
extern void User_LCD_8_WriteCmd(uint8_t cmd);
extern void User_LCD_8_WriteData(uint8_t data);
extern void User_LCD_8_WriteMultiple(uint8_t *data, int count);
extern void User_LCD_8_Read(uint8_t *data, int count);
#endif

#if ((USER_DEFINED_LCD == 1) && (DISPLAY_16BPP == 1))
extern void User_LCD_16_WriteCmd(uint16_t cmd);
extern void User_LCD_16_WriteData(uint16_t data);
extern void User_LCD_16_WriteMultiple(uint16_t *data, int count);
extern void User_LCD_16_Read(uint16_t *data, int count);
#endif

#if (USER_DEFINED_LCD == 1)
extern void User_LCD_Init(void);
#endif



#endif 

