#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include"KMP.h"
#define MaxSize 30

int main() {
    char setPassword[MaxSize];
    char input[MaxSize];
    SqString password, inputString;

    printf("请设定密码: ");
    scanf("%s", setPassword);
    printf("请输入密码: ");
    scanf("%s", input);

    if (KMP(password,inputString)) {
        printf("开锁成功！\n");
    } else {
        printf("开锁失败！\n");
    }
    return 0;
}
