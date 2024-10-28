#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "KMP2.h"

#define MaxSize 100


SqString convertToSqString(char* str) {
    SqString s;
    s.length = strlen(str); //长度
    strcpy(s.data, str); //将字符串复制到data成员中
    return s;
}
//123
int main() {
    char setPassword[MaxSize]; //字符数组存储设定的密码
    char input[MaxSize]; //存储输入的密码
    int attempts = 3; //定义尝试次数为3次

    printf("请设定密码: ");
    scanf("%s", setPassword);

    SqString password = convertToSqString(setPassword);

    while (attempts > 0) {
        printf("请输入密码: ");
        scanf("%s", input);

        SqString inputString = convertToSqString(input);
        //使用kmp算法比较是否匹配
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
