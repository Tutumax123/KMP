#include <stdio.h>  
#include <string.h>  
#include <stdbool.h>  
#include "KMP2.h"  

#define MaxSize 100  

// 定义 SqString 结构体,用于存储和操作字符串  
// SqString 由两个成员组成:  
// - length: 字符串的长度  
// - data: 存储字符串内容的数组  
typedef struct {  
    int length;  
    char data[MaxSize];  
} SqString;  

// 将普通字符串转换为 SqString 结构体  
SqString convertToSqString(char* str) {  
    SqString s;  
    s.length = strlen(str);  
    strcpy(s.data, str);  
    return s;  
}  

int main() {  
    char setPassword[MaxSize]; // 用户设置的密码  
    char input[MaxSize]; // 用户输入的密码  
    int attempts = 3; // 尝试次数  

    // 提示用户设置密码  
    printf("请设定密码: ");  
    scanf("%s", setPassword);  

    // 将设置的密码转换为 SqString 结构体  
    SqString password = convertToSqString(setPassword);  

    // 循环验证密码  
    while (attempts > 0) {  
        // 提示用户输入密码  
        printf("请输入密码: ");  
        scanf("%s", input);  

        // 将输入的密码转换为 SqString 结构体  
        SqString inputString = convertToSqString(input);  

        // 使用 KMP 算法验证密码  
        if (KMP(inputString, password)) {  
            printf("开锁成功！\n");  
            return 0;  
        } else {  
            printf("开锁失败，请继续输入。\n");  
            attempts--;  
        }  
    }  

    // 如果尝试次数用完仍无法开锁  
    printf("无法开锁\n");  
    return 0;  
}
