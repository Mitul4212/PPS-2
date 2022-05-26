#include<stdio.h>

struct emp{
	char en[30];
	long s;
	int id;
};
struct org{
	char on[30];
	int code;
	struct emp e1;
};
void main(){
	//int i,n;
	struct org o1;
	printf("Enter org. name\n");
	scanf("%s",o1.on);
	printf("ENter org. code\n");
	scanf("%d",&o1.code);
	printf("Enter emp. name\n");
	scanf("%s",o1.e1.en);
	printf("Enter emp. salary\n");
	scanf("%f",&o1.e1.s);
	printf("Enter emp. id\n");
	scanf("%d",&o1.e1.id);
	
	printf("org.=%s",o1.on);
	printf("org. code=%d\n",o1.code);
	printf("emp. name=%s\n",o1.e1.en);
	printf("emp. salary=%f\n",o1.e1.s);
	printf("emp. ID=%d\n",o1.e1.id);	
}
