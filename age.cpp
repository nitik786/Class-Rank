#include<stdio.h>
int main(){
	int marks;
	printf("Enter you marks");
	scanf("%d",&marks);
	if(marks>=80){
		printf("Distinction");
	} else if(marks>=60 && marks<80){
		printf("1st division");
	}else if(marks>=55 && marks<60){
		printf("2nd division");
	}else if(marks>=45 && marks<55){
		printf("3rd Division");
	}
else{
	printf("FAIL");
}	
return 0;
}
