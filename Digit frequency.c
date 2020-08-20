#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j=0,c=0,n;
    char a[1000];
    char b[10]={'0','1','2','3','4','5','6','7','8','9'};
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[j])
        c=c+1;
        if(i==n-1)
        {
            printf("%d ",c);
            j++;
            i=-1;
            c=0;
        }
        if(j>9)
        break;
    }   
    return 0;
}
