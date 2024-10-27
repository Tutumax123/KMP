#include"KMP.H"
// źĆËănextĘý×é
void Next(SqString t, int next[]) {
    int j = 0, k = -1;
    next[0] = -1;
    while (j < t.length - 1) {
        if (k == -1 || t.data[j] == t.data[k]) {
            j++;
            k++;
            next[j] = k;
        } else {
            k = next[k];
        }
    }
}
//123
// KMPľÄĆĽĹä
bool KMP(SqString s, SqString t) {
    int next[MaxSize], i = 0, j = 0;
    Next(t, next);
    while (i < s.length) {
        if (j == -1 || s.data[i] == t.data[j]) {
            i++;
            j++;
        } else {
            j = next[j];
        }
        if (j == t.length) {
            return true;
        }
    }
    return false;
}
