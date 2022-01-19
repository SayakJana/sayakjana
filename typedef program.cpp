#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[20];
}a;
int main()
{
	a s1,s2;
	s1.roll=20;
	strcpy(s1.name,"sayak");
	printf("rollno. %d name=%s\n",s1.roll,s1.name);
	printf("enter you roll:");
	scanf("%d",&s2.roll);
	printf("Enter Your name:");
	scanf("%s",s2.name);
	printf("rollno. %d name=%s",s2.roll,s2.name);
	return 0;	
}
