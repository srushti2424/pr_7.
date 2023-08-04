#include<stdio.h>

int sum (int x,int y){
	return x+y;
}
	int subraction (int x,int y){
	return x-y;
}
	int multiplication (int x,int y){
	return x*y;
}
	int divison (int x,int y){
	return x/y;
}
	int per (int x,int y){
	return x%y;

}

int main(){
	int a,b;
	int choice;
	
	printf("enter a and b: ");
	scanf("%d %d",&a,&b);
	
	printf("press 1 for +...\n");
	printf("press 2 for -...\n");
	printf("press 3 for *...\n");
	printf("press 4 for /...\n");
	printf("press 5 for %...\n");
	
	printf("enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("sum of a and b is %d",sum(a,b));
			break;
			
			case 2:
			printf("sum of a and b is %d",subraction(a,b));
			break;
			
			case 3:
			printf("sum of a and b is %d",multiplication (a,b));
			break;
			
			case 4:
			printf("sum of a and b is %d",divison(a,b));
			break;
			
		    case 5:
			printf("sum of a and b is %d",per(a,b));
			break;
			
			
	}
	
	
}
