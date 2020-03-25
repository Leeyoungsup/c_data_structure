#include<stdio.h>
#include<string.h>
//structures is units that represents data.
void main(){
    struct {
        char name[10];
        int age;
        float salary;
    } person;
    strcpy(person.name,"james");
    person.age= 12;
    person.salary=35000;
    printf("%s,%d,%f",person.name,person.age,person.salary);
    typedef struct human_being {
        char name[10];
        int age;
        float salary;
    };
    typedef struct {
        char name[10];
        int age;
        float salary;
    } human_being;

}
