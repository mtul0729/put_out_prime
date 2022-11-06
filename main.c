#include <stdio.h>
#define 个数 1000

int main() {
    int a[个数]={0};
    for (int i = 1; i < 个数; ++i) {
        a[i]=i+1;
    }
    for (int i = 1; i < 个数; ++i) {
       if(a[i]!=0)
       {
           for (int j = i + a[i]; j < 个数; j+=a[i]) {
               a[j]=0;
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
