/*****************************************************************************************
* FILENAME :        basic.h
*
* SHORT DESCRIPTION:
*   Header file for basic module.
*
* DETAILED DESCRIPTION :
*       
*
* AUTHOR :    Stephan Wink        CREATED ON :    13. Jan. 2019
*
* Copyright (c) [2020] [Stephan Wink]
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
vAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*****************************************************************************************/
#ifndef BASIC_H
#define BASIC_H

#ifdef __cplusplus
extern "C"
{
#endif
/****************************************************************************************/
/* Imported header files: */

#include "stdint.h"
#include "stdbool.h"
#include "stddef.h"
#include "string.h"
#include "esp_log.h"
#include "esp_err.h"

/****************************************************************************************/
/* Global constant defines: */

/****************************************************************************************/
/* Global function like macro defines (to be avoided): */

/****************************************************************************************/
/* Global type definitions (enum (en), struct (st), union (un), typedef (tx): */

typedef struct basic_param_tag
{

}basic_param_t;

/****************************************************************************************/
/* Global function definitions: */

/**--------------------------------------------------------------------------------------
 * @brief     pre-configure the initialization parameter of the module
 * @param     param_stp             allocated pointer to the initialization parameters
 * @return    ESP_OK in case of success, else ESP_FAIL
*//*-----------------------------------------------------------------------------------*/
extern esp_err_t basic_InitializeParameter(basic_param_t *param_stp);

/**--------------------------------------------------------------------------------------
 * @brief     initialization of the basic module
 * @param     param_stp             allocated pointer to the initialization parameters
 * @return    ESP_OK in case of success, else ESP_FAIL
*//*-----------------------------------------------------------------------------------*/
extern esp_err_t basic_Initialize_st(basic_param_t *param_stp);

/**--------------------------------------------------------------------------------------
 * @brief     activation of the basic module
 * @return    ESP_OK in case of success, else ESP_FAIL
*//*-----------------------------------------------------------------------------------*/
extern esp_err_t basic_Activate_st(void);

/**--------------------------------------------------------------------------------------
 * @brief     activation of the basic module
 * @return    ESP_OK in case of success, else ESP_FAIL
*//*-----------------------------------------------------------------------------------*/
extern esp_err_t basic_Deactivate_st(void);

/****************************************************************************************/
/* Global data definitions: */

#ifdef __cplusplus
}
#endif

#endif //BASIC_H
