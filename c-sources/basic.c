/****************************************************************************************
* FILENAME :        basic.c
*
* SHORT DESCRIPTION:
*   Header file for basic module.  
*
* DETAILED DESCRIPTION :     
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
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
****************************************************************************************/

/***************************************************************************************/
/* Include Interfaces */

#include "basic.h"

#include "stdint.h"
#include "stdbool.h"
#include "stddef.h"
#include "string.h"
#include "esp_log.h"
#include "esp_err.h"

/***************************************************************************************/
/* Local constant defines */

/***************************************************************************************/
/* Local function like makros */

/***************************************************************************************/
/* Local type definitions (enum, struct, union) */

typedef enum objectState_tag
{
    STATE_NOT_INITIALIZED,
    STATE_INITIALIZED,
    STATE_ACTIVATED,
    STATE_DEACTIVATED
}objectState_t;

typedef struct objectData_tag
{
     objectState_t state_en;
}objectData_t;
/***************************************************************************************/
/* Local functions prototypes: */
static uint8_t LocalFunction_u8(uint8_t *inData_u8p, uint8_t *outData_u8p);

/***************************************************************************************/
/* Local variables: */

static objectData_t singleton_sst =
{
        .state_en = STATE_NOT_INITIALIZED,
};

/***************************************************************************************/
/* Global functions (unlimited visibility) */

/**--------------------------------------------------------------------------------------
 * @brief     Initializes the initialization structure of the basic module
 * @author    S. Wink
 * @date      13. Jan. 2020
*//*-----------------------------------------------------------------------------------*/
esp_err_t basic_InitializeParameter(basic_param_t *param_stp)
{
    esp_err_t exeResult_st = ESP_FAIL;

    singleton_sst.state_en = STATE_NOT_INITIALIZED;

    return(exeResult_st);
}

/**--------------------------------------------------------------------------------------
 * @brief     Initialization of the basic module
 * @author    S. Wink
 * @date      13. Jan. 2020
*//*-----------------------------------------------------------------------------------*/
esp_err_t basic_Initialize_st(basic_param_t *param_stp)
{
    esp_err_t exeResult_st = ESP_FAIL;

    singleton_sst.state_en = STATE_INITIALIZED;

    return(exeResult_st);

}

/**--------------------------------------------------------------------------------------
 * @brief     Starts the basic module
 * @author    S. Wink
 * @date      13. Jan. 2020
*//*-----------------------------------------------------------------------------------*/
esp_err_t basic_Activate_st(void)
{
    esp_err_t exeResult_st = ESP_FAIL;

    singleton_sst.state_en = STATE_ACTIVATED;

    return(exeResult_st);

}

/**--------------------------------------------------------------------------------------
 * @brief     Stops the basic module
 * @author    S. Wink
 * @date      13. Jan. 2020
*//*-----------------------------------------------------------------------------------*/
esp_err_t basic_Deactivate_st(void)
{
    esp_err_t exeResult_st = ESP_FAIL;

    singleton_sst.state_en = STATE_DEACTIVATED;

    return(exeResult_st);

}

/***************************************************************************************/
/* Local functions: */

/**--------------------------------------------------------------------------------------
 * @brief     Any local Function
 * @author    S. Wink
 * @date      13. Jan. 2020
 * @param     inData_u8p             input data pointer
 * @param     outData_u8p            output data pointer
 * @return    n/a
*//*-----------------------------------------------------------------------------------*/
static uint8_t LocalFunction_u8(uint8_t *inData_u8p, uint8_t *outData_u8p)
{
    return(0);
}


