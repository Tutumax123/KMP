#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdbool.h>

#define MaxSize 30

typedef struct {
    char data[MaxSize];
    int length;
} SqString;

// 计算next数组
void Next(SqString t, int next[]);

// KMP字符串匹配算法
bool KMP(SqString s, SqString t);

#endif // STRING_UTILS_H
