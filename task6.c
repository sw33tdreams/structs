#include <stdio.h>
#include <string.h>

struct car{
	char brand[20];
	char model[20];
	int year;
	int price;
};
int main() {

struct car cars[2] = {};
int exp = 0;
int ind = 0;
for(int i = 0; i <= 1; ++i){
	printf("input brand model year and price of car %d:\n", i + 1);
	fgets(cars[i].brand, 20, stdin);
	fgets(cars[i].model, 20, stdin);
	scanf("%d %d", &cars[i].year, &cars[i].price);
	getchar();
	if(cars[i].price > exp){
		exp = cars[i].price;
		ind = i;
	}
}
printf("most expensive car is:\n %s %s %d\n %d$\n",cars[ind].brand, cars[ind].model, cars[ind].year, cars[ind].price);
return 0;
}

