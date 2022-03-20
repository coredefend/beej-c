#include <stdio.h>

void my_scanf(int *val) {
	*val += 1;
}

int main() {
 	// a pointer is a variable that holds an address
	printf("the size of an int is %zu\n", sizeof(int));
	printf("the size of a  char is %zu\n", sizeof(char));
	int i = 10;
	
	printf("the value of i is %d\n", i);
	printf("the address of i is %p\n", &i);
	int *p; // p's type is "pointer to an int", or "int-pointer"
	printf("the address of p is %p\n", p);

	// DEREFERENCING //
	int k = 10;
	int *p2 = &k;	
	*p2 = 20;
	printf("p2: %d\n", *p2);
	printf("k : %d\n", k);
	printf("address of p2: %p\n", p2);
	printf("address of  k: %p\n", &k);

	// 5.7 sizeof and Pointers
	int *p3 = &k;
	printf("sizeof int %lu\n", sizeof(int));
	printf("sizeof *p3 %lu\n", sizeof(*p3));
	printf("sizeof  p3 %lu\n", sizeof(p3));

	// 5.4 Passing Pointers as Arguments
	int input = 5;
	my_scanf(&input);
	printf("input: %d\n", input);	
}
