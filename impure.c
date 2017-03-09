#include <stdio.h>

int main(void) {
    const char ch = 'x';
    *((char *) &ch) = 'y';
    printf("ch = '%c'", ch);
    
    return 0;
}
