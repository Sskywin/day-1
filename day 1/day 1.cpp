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
	printf("����:%s\n\\\\����:%d\n\\\\��ߣ�m��:%f\n\\\\���أ�kg��:%f\n\\\\�Ա�:%s\n",a->name,a->age,a->tall,a->weight,a->sex);
	return 0;
	
}