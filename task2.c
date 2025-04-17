#include <stdio.h>
#include <string.h>

struct car{
	char brand[20];
	char model[20];
	int year;
float price;
};


void cheapest(struct car cars[0], int size){
	float cheapest = cars[0].price;
	int newest = cars[0].year;
	int newest_index = 0, cheapest_index = 0,  index = size -1;
	for(int i = 1; i <= index; ++i){
		 if(cars[i].price < cheapest){
			 cheapest = cars[i].price;
		 cheapest_index = i;
		 }
		 if(cars[i].year > newest){
			 newest = cars[i].year;
			newest_index = i;
		 }
	}
	printf("cheapest car: %s %s %d %f\n", cars[cheapest_index].brand, cars[cheapest_index].model, cars[cheapest_index].year, cars[cheapest_index].price);
	printf("newest car: %s %s %d %f\n", cars[newest_index].brand, cars[newest_index].model, cars[newest_index].year, cars[newest_index].price);
	return;
	}





