#include<stdio.h>
void main()
{
    int iarr[5]={10,20,30,40,50};
    printf("%d %d %d %d %d\n",iarr[0],iarr[1],iarr[2],iarr[3],iarr[4]);//print contents in list
    printf("%d %d %d %d %d\n",*(iarr+0),*(iarr+1),*(iarr+2),*(iarr+3),*(iarr+4));//print value of address
    printf("%d %d %d %d %d\n",*&iarr[0],*&iarr[1],*&iarr[2],*&iarr[3],*&iarr[4]);//print value of list address
    char carr[5] = {'A', 'B', 'C', 'D', 'E'};
    printf("%x %x %x %x %x\n",carr, carr+1, carr+2, carr+3, carr+4);//character data storage langth
    printf("%x %x %x %x %x\n",iarr, iarr+1, iarr+2, iarr+3, iarr+4);//integer data storage langth
    char carr2[2][2] = {'A','B','C','D'};
    printf("%x %x %x %x\n",&carr2[0][0],&carr2, &carr2[0], &carr2[1]);// carr2[0][0],carr2[0][0],carr2[0][0],carr2[1][0] address
    printf("%x %x %x %x\n",&carr2[0][0]+1, &carr2+1, &carr2[0]+1, &carr2[1]+1);//carr2[0][1],carr2[1][0],carr2[0][1],carr2[1][1] address
}
