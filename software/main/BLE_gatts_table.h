/*
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Attributes State Machine */
enum
{
    IDX_SVC,            /* studio-light-service */

    IDX_CHAR_A,         /* Battery Characteristic */
    IDX_CHAR_VAL_A,     /* Battery Charge Level Value */

    IDX_CHAR_B,         /* Running Time Characteristic */
    IDX_CHAR_VAL_B,     /* Running Time Remaining Value */

    IDX_CHAR_C,         /* Temperature Characteristic */
    IDX_CHAR_VAL_C,     /* Temperature Value */

    IDX_CHAR_D,         /* Charge State Characteristic */
    IDX_CHAR_VAL_D,     /* Charge State Value */

    IDX_CHAR_E,         /* Brightness Characteristic */
    IDX_CHAR_VAL_E,     /* Brightness Level Value */

    IDX_CHAR_F,         /* RGB Color Characteristic */
    IDX_CHAR_VAL_F,     /* RGB Color Values */

    HRS_IDX_NB,
};
