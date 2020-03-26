#include<stdio.h>
#include<stdlib.h>
int Dynamic_memory_allocation(){
    int *p;
    p=(int*)malloc(4*sizeof(int));
    if(p==NULL){
        printf("Dynamic_allocation fail");
    }
    p[0]=12;
    p[1]=24;
    *(p+2)=36;
    printf("%d,%d,%d\n",p[0],*(p+1),p[2]);
    int *tmp;
    //array expension (originally p is garbage)
    tmp=(int*)malloc(8*sizeof(int));
    for(int i=0;i<4;i++){
        tmp[i]=p[i];
    }
    p=tmp;
    printf("%d,%d,%d\n",p[0],*(p+1),p[2]);

}
int main(void){
    int c=12;
    int *p;
    p=&c;
    printf("%x,%x\n",&c,&p);
    int x=1,y=2;
    int *ip;
    ip=&x;
    printf("x= %d\n",*ip);
    y=*ip;
    printf("y= %d\n",y);
    *ip=0;
    printf("x= %d\n",x);
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    printf("%d,%d\n",*(a+5),a[5]);
    printf("%x,%x\n",&a,&a[0]);
    printf("%x,%x\n",a+5,&a[5]);
    Dynamic_memory_allocation();
}
