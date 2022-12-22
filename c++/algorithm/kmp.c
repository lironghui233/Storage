


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 
// shell , quick, kmp 
// pattern 
// 
// abcabc
// k = 0
// q = 1
void make_next(const char *pattern, int *next) {

    int q, k;
    int m = strlen(pattern);

    next[0] = 0; // 
    for (q = 1,k = 0;q < m; q ++) {

        while (k > 0 && pattern[q] != pattern[k]) {
            k = next[k-1];
        }

        if (pattern[q] == pattern[k]) { // 如果前缀与后缀有相同的字符
            k ++;
        }

        next[q] = k;
        
    }
}


int kmp(const char *text, const char *pattern, int *next) {

    int n = strlen(text);
    int m = strlen(pattern);

    make_next(pattern, next);

    int i, q;
    for (i = 0, q = 0;i < n;i ++) { //i --> text, q --> pattern
#if 1
        while (q > 0 && pattern[q] != text[i]) {
            q = next[q-1];
        }
#endif 
        if (pattern[q] == text[i]) {
            q ++;
        }
        // q == m --->  
        if (q == m) {
            return i-q+1;
        }
    }
    return -1;
}


int main() {

    char *text = "abcabcabcabcabcd";
    char *pattern = "abcabcd";
    int next[20] = {0};

    int idx = kmp(text, pattern, next);
    printf("match pattern: %d\n", idx);

}









