#include <stdio.h>

int main(void)
{
    char arr[10] = {};
    char *p = nullptr;
    char *q = nullptr;
    
    char result = '\0';
    int count_max = 0;
    
    for (p=arr ; p<arr+10 ; p++) {
        scanf("%c", p);
    }
    
    for (p=arr ; p<arr+10 ; p++) {
        int count = 0;
        for (q=arr ; q<arr+10 ; q++) {
            if (*q==*p) {
                count++;
            }
        }
        if (count > count_max) {
            count_max = count;
            result = *p;
        }
    }
    printf("%c %d\n", result, count_max);
    return 0;
}
