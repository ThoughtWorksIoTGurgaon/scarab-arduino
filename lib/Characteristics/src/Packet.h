#ifndef PACKET_H
#define PACKET_H

typedef struct {
  int id;
  int dataLen;
  char * data;
} CharStruct;

typedef struct {
    int serviceId;
    int charCount;
    CharStruct *charsStruct;
  } WritePacket;

class Packet {
  private:
    static WritePacket writePacket;
    static const int SIZE_OF_CHAR_STRUCT = sizeof(CharStruct);

  public:
    Packet();
    static WritePacket* parse(const char *binPacket) ;
};

#endif
