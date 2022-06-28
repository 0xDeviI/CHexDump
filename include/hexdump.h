#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void HEX_DUMP(void *ptr, int buflen) {
    unsigned char *buf = (unsigned char*)ptr;
    int i, j;
    for (i=0; i<buflen; i+=16) {
        printf("%08x: ", i);
        for (j=0; j<16; j++) {
            if (i+j < buflen) {
                if (j % 4 == 0) printf(" ");
                printf("%02x ", buf[i+j]);
            }
            else {
                if (j % 4 == 0) printf(" ");
                printf("00 ");
            }
        }
        printf(" ");
        printf("|");
        for (j=0; j<16; j++) {
            if (i+j < buflen)
                printf("%c", isprint(buf[i+j]) ? buf[i+j] : '.');
            else
                printf(".");
        }
        printf("|\n");
    }
}

int FILE_HEX_DUMP(char* file) {
    FILE *fp = fopen(file, "rb");
    if (!fp) {
        printf("FILE_HEX_DUMP: file pointer is null");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    void *buf = malloc(size);
    fread(buf, size, 1, fp);
    fclose(fp);
    HEX_DUMP(buf, size);
    free(buf);
    return 0;
}