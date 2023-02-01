#include <stdio.h>
#include<string.h>

struct people
{
char name[20];
short age;
double tall;
double weight;
char sex[5];
};
int main()
{
	struct people P1={"",,.,,""};
	struct  people* a=&P1;
	printf("姓名:%s\n\\\\年龄:%d\n\\\\身高（m）:%f\n\\\\体重（kg）:%f\n\\\\性别:%s\n",a->name,a->age,a->tall,a->weight,a->sex);
	return 0;
	
}