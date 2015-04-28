// intel_hex.h

#ifndef __INTEL_HEX_H
#define __INTEL_HEX_H


#define	FIRMWARE_BUFFER_SIZE		(256*512)


// data embedded in firmware image
typedef struct {
	char		magic_string[8];		// YamaNeko
	uint8_t		version_major;
	uint8_t		version_minor;
	uint8_t		mcu_signature[3];
	uint32_t	flash_size_b;
	uint16_t	page_size_b;
	uint32_t	eeprom_size_b;
	uint16_t	eeprom_page_size_b;
} FW_INFO_t;

#define	MAGIC_STRING				"YamaNeko"


extern uint8_t firmware_buffer[FIRMWARE_BUFFER_SIZE];
extern uint32_t firmware_crc;
extern uint32_t firmware_size;


extern bool ReadHexFile(char *filename);


#endif