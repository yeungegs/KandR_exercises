#include <stdio.h>
/**
 * Function to use linked lists
 */

int main(void)
{
	struct entry
{
		int value;
		struct entry *next;
	};

	struct entry n1, n2, n3;
	int i;

	n1.value = 100;
	n2.value = 200;
	n3.value = 300;

	n1.next = &n2;
	n2.next = &n3;

	i = n1.next->value;
	printf("n1.next->value is %i\n" , i);
	printf("n2.next->value is %i\n", n2.next->value);
}
