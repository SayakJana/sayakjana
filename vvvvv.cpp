#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[20];
}a;
int main()
{
	a s1={23,"sayak"};
	printf("roll is %d name is %s",s1.roll,s1.name);
	a s2={32,"sayan"};
	printf("roll is %d name is %s",s2.roll,s2.name);
	return 0;	
}
