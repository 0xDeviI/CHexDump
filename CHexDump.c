#include "include/hexdump.h"

void main( int argc, char *argv[] ) {
    printf("-------- CHexDump v1.0 By Armin Asefi --------\n");
    FILE_HEX_DUMP(argv[1]);
}