#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void search(int *list);
int* insert(int *list,int value,int location);
int main(){
    int *list;
    list=(int*)malloc(6*sizeof(int));
    list[0]=1;
    list[1]=2;
    list[2]=3;
    list[3]=4;
    list[4]=5;
    list[5]=6;
    printf("%d\n",malloc_usable_size(list));
//  memory deallocation
//  free(list);
//  printf("%d\n",sizeof(list));
//  search(list);
    list=insert(list,7,11);
    search(list); 
    return 0;
}
void search(int *list){
    int list_size=malloc_usable_size(list);
    int list_length=list_size/4;
    for(int i=0;i<list_length;i++){
        printf("list[%d]=%d\n",i,list[i]);
    }
}
int* insert(int* list,int value,int location){
    int list_size=malloc_usable_size(list);
    int list_length=list_size/4;
    if(list_length-1<location){
        int *list1;
        list1=(int*)malloc((location+1)*sizeof(int));
        printf("%d\n",malloc_usable_size(list1));
        for(int i=0;i<list_length;i++){
            list1[i]=list[i];
        }
        free(list);
        list1[location]=value;
        return list1;
    }
    else{
        list[location]=value;
        return list;
    }

}
