#include<stdio.h>
#define N 100000

int main(void){

    char c[N];
    int count=0;
    int i,cen=0;

    for ( i = 0;i<N; i++){
     if (cen==0) {
        if (c[i]=='/'){
            cen=1;
        }else
        {
            cen=0;
        }
   
     }else if (cen==1){
        if (c[i]=='*')
        {
            cen=2;
        }else if (c[i]=='/')
        {
          cen=1;
        }else {
            cen=0;
        }
        
        
     }else if (cen==2){
        if (c[i]=='*')
        {
            cen=3;
        }else{
            cen=2;
        }
        
     }else if (cen==3) {
        if (c[i]=='/')
        {
           cen=0;
           count++;
        }else if(c[i]=='*'){
            cen=3;
        }else{
            cen=2;
        }
        
     }
     printf("%d",cen);
    }

  printf("%d\n",count);//表示//


    return 0;
}