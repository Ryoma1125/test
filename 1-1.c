#include<stdio.h>


int main(void){

    int n[1000];
    int i,sum=1,a;
    int p[1000];
    int s=0;
    int max=0;

     


    for ( i = 0;scanf("%d",&n[i])!=EOF; i++)
    {
        if(i==0){//i==０のとき//
            max=1;
            a=n[0];
        }else{
        
        if(n[i]==n[i-1]){//同じ時//
            sum++;
        }else{//ちがうとき//
           sum=1;
           s++;
           
        }

        if(sum>=max){
            max=sum;//数字の比較//
            a=n[i];
        }
        }
    }

  printf("%d %d\n",max,a);//表示//


    return 0;
}