#include <string.h>
#include <stdio.h>
int main( void ) {
    char str[] = "C Language Test"; // 문자열
    char c1 = 'a'; // 찾고자 하는 문자
    char c2 = 'p'; // 찾고자 하는 문자
    char *p1, *p2; // 찾은 문자에 대한 포인터

    printf("문자 배열 : %s\n", str);
    printf("문자 배열 시작 주소 : \t%d\n", str);

    p1 = strchr(str, c1);
    p2 = strchr(str, c2);

    printf("찾는 단어 ‘a’ : \t %d \n", p1);
    printf("찾는 단어 ‘p’ : \t %d \n", p2);

    printf("찾는 단어 ‘a’ : \t %s \n", p1);
    printf("찾는 단어 ‘p’ : \t %s \n", p2);

    return 0;
}