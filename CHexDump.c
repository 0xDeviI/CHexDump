#include "include/hexdump.h"

void main( int argc, char *argv[] ) {
    printf("-------- CHexDump v1.0 By Armin Asefi --------\n");
    if (argc < 2) {
        printf("Usage: CHexDump <file>\n");
        exit(1);
    }
    else {
        FILE_HEX_DUMP(argv[1]);
    }
}