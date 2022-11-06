#include <stdio.h>
#define 个数 100

int main() {
    int a[个数]={0};
    for (int i = 1; i < 个数; ++i) {
        a[i]=i+1;
        for (int j = 2; j <= i; ++j) {
            if(a[i]%j==0)
            {
                a[i]=0;
                break;
            }
        }
    }
    for (int i = 0; i < 个数; ++i) {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }


    }
    return 0;
}
