#include <stdio.h>
#include <strings.h>

struct student{
	char name[20];
	int age;
	float mark;
};

int main() {
struct student std[5];

printf("enter name age and mark of 5 students:\n");
for(int i = 0; i <= 4; ++i){
	fgets(std[i].name, 20, stdin);
	scanf("%d %f", &std[i].age, &std[i].mark);
	printf("\n");
}
float maxmark = std[0].mark;
int maxindex = 0;
for(int i = 1; i <= 4; ++i){
	if(std[i].mark > maxmark){
		maxmark = std[i].mark;
		maxindex = i;
	}
}
printf("student with highest mark %f is %s\n", maxmark, std[maxindex].name);
return 0;
}

