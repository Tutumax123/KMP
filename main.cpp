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
//123
int main() {
    char setPassword[MaxSize];
    char input[MaxSize];
    int attempts = 3;

    printf("请设定密码: ");
    scanf("%s", setPassword);

    SqString password = convertToSqString(setPassword);

    while (attempts > 0) {
        printf("请输入密码: ");
        scanf("%s", input);

        SqString inputString = convertToSqString(input);

        if (KMP(inputString,password)) {
            printf("开锁成功！\n");
            return 0;
        } else {
            printf("开锁失败，请继续输入。\n");
            attempts--;
        }
    }

    printf("无法开锁\n");
    return 0;
}
