#include <stdio.h>

union value{
	int x;
	float y;
};

int main() {
union value value;
	printf("enter int number: ");
	scanf("%d", &value.x);
	printf("integer number is %d\n", value.x);
	printf("enter float number: ");
	scanf("%f", &value.y);
	printf("float number is %f\n", value.y);
	printf("\n size of union is %lu\n", sizeof(value));
return 0;
}
