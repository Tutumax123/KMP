#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "KMP2.h"

#define MaxSize 100


SqString convertToSqString(char* str) {
    SqString s;
    s.length = strlen(str);
    strcpy(s.data, str);
    return s;
}

int main() {
    char setPassword[MaxSize];
    char input[MaxSize];
    int attempts = 3;

    printf("���趨����: ");
    scanf("%s", setPassword);

    SqString password = convertToSqString(setPassword);

    while (attempts > 0) {
        printf("����������: ");
        scanf("%s", input);

        SqString inputString = convertToSqString(input);

        if (KMP(inputString,password)) {
            printf("�����ɹ���\n");
            return 0;
        } else {
            printf("����ʧ�ܣ���������롣\n");
            attempts--;
        }
    }

    printf("�޷�����\n");
    return 0;
}
