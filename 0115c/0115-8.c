#include <stdio.h>
#include <string.h>
#define count 100

int main(void) {
    FILE *fp1, *fp2;
    int buffer[count] = {0};

    fp1 = fopen("apple.png", "rb");
    fp2 = fopen("apple2.png", "wb");

    while(!feof(fp1)) {
        fread(buffer, sizeof(int), count, fp1);
        fwrite(buffer, sizeof(int), count, fp2);
    }

    printf("파일 쓰기 완료\n");
    fclose(fp1);
    fclose(fp2);

    return 0;
}