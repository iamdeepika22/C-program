/* C-program */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
    int a,b,ad=0,or=0,xr=0;
    int maxd=0,maxr=0,maxn=0;
    for(a=1;a<n;a++)
    {
        for(b=a+1;b<=n;b++)
        {
            ad=a&b;
            or=a|b;
            xr=a^b;
            if(ad<k && maxd<ad)
             maxd=ad;
            if(or<k && maxr<or)
             maxr=or;
            if(xr<k && maxn<xr)  
             maxn=xr;
        }
    }

  printf("%d\n%d\n%d",maxd,maxr,maxn);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
