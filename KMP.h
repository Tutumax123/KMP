#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdbool.h>

#define MaxSize 30

typedef struct {
    char data[MaxSize];
    int length;
} SqString;

// ����next����
void Next(SqString t, int next[]);

// KMP�ַ���ƥ���㷨
bool KMP(SqString s, SqString t);

#endif // STRING_UTILS_H
