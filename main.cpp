#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include"KMP.h"
#define MaxSize 30

int main() {
    char setPassword[MaxSize];
    char input[MaxSize];
    SqString password, inputString;

    printf("���趨����: ");
    scanf("%s", setPassword);
    printf("����������: ");
    scanf("%s", input);

    if (KMP(password,inputString)) {
        printf("�����ɹ���\n");
    } else {
        printf("����ʧ�ܣ�\n");
    }
    return 0;
}
