#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *random = fopen("/dev/urandom", "r");
    unsigned int rval;
    fread(&rval, sizeof(rval), 1, random);
    char *face = (rval % 2 == 1) ? "Heads" : "Tails";
    printf("%s\n", face);
    return 0;
}