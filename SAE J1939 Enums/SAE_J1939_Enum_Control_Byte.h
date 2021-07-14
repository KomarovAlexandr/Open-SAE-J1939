/*
 * SAE_J1939_Control_Byte.h
 *
 *  Created on: 14 juli 2021
 *      Author: Daniel Mårtensson
 */

#ifndef SAE_J1939_SAE_J1939_ENUMS_SAE_J1939_ENUM_CONTROL_BYTE_H_
#define SAE_J1939_SAE_J1939_ENUMS_SAE_J1939_ENUM_CONTROL_BYTE_H_

typedef enum {
	/* TP CM */
	CONTROL_BYTE_TP_CM_ABO = 0xFF,
	CONTROL_BYTE_TP_CM_BAM = 0x20,
	CONTROL_BYTE_TP_CM_END = 0x13,
	CONTROL_BYTE_TP_CM_CTS = 0x11,
	CONTROL_BYTE_TP_CM_RTS = 0x10,
	/* Acknowledgement */
	CONTROL_BYTE_ACKNOWLEDGEMENT_PGN_SUPPORTED = 0x0,
	CONTROL_BYTE_ACKNOWLEDGEMENT_PGN_NOT_SUPPORTED = 0x1,
	CONTROL_BYTE_ACKNOWLEDGEMENT_PGN_ACCESS_DENIED = 0x2,
	CONTROL_BYTE_ACKNOWLEDGEMENT_PGN_BUSY = 0x3
	/* Add more control bytes here */
}ENUM_CONTROL_BYTES_CODES;

#endif /* SAE_J1939_SAE_J1939_ENUMS_SAE_J1939_ENUM_CONTROL_BYTE_H_ */
