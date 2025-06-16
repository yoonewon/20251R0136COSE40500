/*1230 2021320169 윤혜원 실습 7 */

#include <stdio.h>

int main(void) {
    int x = 9; //00001001
    int y = 10; //00001010
    int z = 9; //00001001

    printf("AND = %3d, %08x\n", x&y, x&y); // 00001000
    printf("OR = %3d, %08x\n", x|y, x|y); // 00001011
    printf("XOR = %3d, %08x\n", x^y, x^y); // 00000011
    printf("NOT = %3d, %08x\n", ~x, ~x); // 11110110

    printf("왼쪽시프트 = %d\n", z << 1); // 10010
    printf("오른쪽시프트 = %d\n", z >> 1); // 00100
}