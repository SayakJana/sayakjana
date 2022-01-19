#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[20];
}a;
int main()
{
	a s1;
	a *ptr;
    ptr=&s1;
    (*ptr).roll=20;
    strcpy((*ptr).name,"sayak");
    printf("roll is %d name is %s",(*ptr).roll,(*ptr).name);
    return 0;
}
