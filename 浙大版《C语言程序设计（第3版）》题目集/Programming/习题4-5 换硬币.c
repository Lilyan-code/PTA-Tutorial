//
// Created by Acmer_ly on 2020/3/14.
//习题4-5 换硬币 (20分)



#include<stdio.h>
int main()
{
    int k, i, j, x, total, count=0;
    scanf("%d", &x);
    for(k=x/5; k>0; k--)
        for(i=x/2; i>0; i--)
            for(j=x; j>0; j--)
                if(k*5+i*2+j==x){
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", k, i, j, k+i+j);
                    count++;
                }
    printf("count = %d", count);

    return 0;
}


