#include <r2akt_crc.h>

void setup() {
  Serial.begin (9600);
  Serial.println (F ("Calculate CRC8, CRC16 and CRC32"));
}

void loop() {
  static uint8_t Buff[] = {0,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,0};

  Serial.println ("Buff data:");
  for (uint16_t Count = 0; Count < sizeof (Buff)/sizeof (Buff[0]); Count++) {
    Serial.print (Buff[Count]);
  }
  Serial.println ("");
  Serial.flush();

  uint8_t CRC8 = UCHAR_MAX;
  CRC8 = crc8_calc (CRC8, (uint8_t*)&Buff, sizeof (Buff)/sizeof (Buff[0]));
  Serial.print (F ("CRC8 = 0x"));
  Serial.println (CRC8, HEX);
  Serial.println ("");
  Serial.flush();

  Serial.println ("Buff data:");
  for (uint16_t Count = 0; Count < sizeof (Buff)/sizeof (Buff[0]); Count++) {
    Serial.print (Buff[Count]);
  }
  Serial.println ("");
  Serial.flush();

  uint16_t CRC16 = USHRT_MAX;
  CRC16 = crc16_calc (CRC16, (uint8_t*)&Buff, sizeof (Buff)/sizeof (Buff[0]));
  Serial.print (F ("CRC16 = 0x"));
  Serial.println (CRC16, HEX);
  Serial.println ("");
  Serial.flush();

  Serial.println ("Buff data:");
  for (uint16_t Count = 0; Count < sizeof (Buff)/sizeof (Buff[0]); Count++) {
    Serial.print (Buff[Count]);
  }
  Serial.println ("");
  Serial.flush();

  uint32_t CRC32 = ULONG_MAX;
  CRC32 = crc32_calc (CRC32, (uint8_t*)&Buff, sizeof (Buff)/sizeof (Buff[0]));
  Serial.print (F ("CRC32 = 0x"));
  Serial.println (CRC32,HEX);
  Serial.println ("");
  Serial.flush();

  delay (1000);
}
