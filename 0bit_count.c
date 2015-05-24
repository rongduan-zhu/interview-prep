/* Find the number of '0' bits in an integer. */

#include <stdlib.h>
#include <stdio.h>

/* assumes only unsigned integers. if considering signed and
   excluding the signed 1 bit then just and the number with
   0b1111111 11111111 11111111 11111111

   also assume number is 32bit
   */
int bit_count_0(unsigned int number) {
    int count = 0;
    int last_1bit_location = 0;

    for (int i = 0; i < 32; ++i) {
        if (number & 1) {
            last_1bit_location = i + 1;
        } else {
            ++count;
        }
        number >>= 1;
    }

    return count - (32 - last_1bit_location);
}

int main(int argc, char *argv[]) {
    unsigned int k;

    k = 1; // 1
    printf("%d\n", bit_count_0(k));

    k = 2; // 0b10
    printf("%d\n", bit_count_0(k));

    k = 3; // 0b11
    printf("%d\n", bit_count_0(k));

    k = 4; // 0b100
    printf("%d\n", bit_count_0(k));

    k = 5; // 0b 101
    printf("%d\n", bit_count_0(k));

    return 0;
}
