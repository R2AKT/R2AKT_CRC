 /******************************************************************************
 *
 *    FILE NAME : r2akt_crc.h
 *       AUTHOR : Sergey Dorozhkin (R2AKT)
 *         DATE : 24-april-2024
 *      VERSION : 0.0.1
 * MODIFICATION : 2
 *      PURPOSE : CRC8, CRC16, CRC32 table library
 *          URL : https://github.com/R2AKT/r2akt_crc
 *
 ******************************************************************************/
#ifndef R2AKT_CRC_H
#define R2AKT_CRC_H

#include <limits.h>
#include <stdlib.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif 
 /*****************************************************************************

CRC8 = UCHAR_MAX;
CRC16 = USHRT_MAX;
CRC32 = ULONG_MAX;

 *****************************************************************************/

uint8_t  crc8_calc (uint8_t CRC8, const uint8_t *Buff, uint8_t size);
uint16_t crc16_calc (uint16_t CRC16, const uint8_t *Buff, uint16_t size);
uint32_t  crc32_calc (uint32_t CRC32, const uint8_t *Buff, uint32_t size);

#ifdef __cplusplus
}           /* closing brace for extern "C" */
#endif

#endif /* R2AKT_CRC_H */
 /************************************************************* END OF FILE ***/