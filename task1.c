#include <stdio.h>
#include <string.h>
struct car{
	char brand[20];
	char model[20];
	int year;
	float price;
};

int main() {
	struct car cars[3];
	for(int i = 0; i <= 2; ++i){
		printf("enter brand of car %d\n", i + 1);
		fgets(cars[i].brand, 20, stdin);
		printf("enter model of car %d\n",i + 1);
	        fgets(cars[i].model, 20, stdin);
		printf("enter year and price of car %d\n", i + 1);
       		scanf("%d %f", &cars[i].year, &cars[i].price);
	}
	
	printf("\n\n");

	for(int i = 0; i <= 2; ++i){
		puts(cars[i].brand);
		puts(cars[i].model);
		printf("%d %f\n\n", cars[i].year, cars[i].price);
	}
return 0;
}
