#include <stdio.h>
#include <string.h>

struct book{
	char title[50];
	char author[30];
	int year;
};

int main() {
	int oldest = 2028;
	int oldest_ind = 0;
struct book books[4] = {};
for(int i = 0; i <= 3; ++i){
	printf("enter title author and year of book %d:\n", i + 1);
	fgets(books[i].title, 50, stdin);
	fgets(books[i].author, 30, stdin);
	scanf("%d", &books[i].year);
	getchar();
	if(books[i].year < oldest){
		oldest = books[i].year;
		oldest_ind = i;
}
}
printf("oldest book is:\n %s %s %d \n", books[oldest_ind].title, books[oldest_ind].author, books[oldest_ind].year);
return 0;
}
