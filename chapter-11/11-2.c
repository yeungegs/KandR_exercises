/* program to illustrate bitwise operators */

#include <stdio.h>
int main (void)
{
/* integer constant with leading 0 represents an octal constant - word1, word2,
   word3 are given octal values of 077, 0150, and 0210 */
/* if u or U follows an integer constant, it is treated as unsigned */

	unsigned int w1 = 0525u;
	unsigned int w2 = 0707u;
	unsigned int w3 = 0122u;

	printf("1. w1 & w2, w1 | w2, w1 ^ w3\n%o %o %o\n\n", w1 & w2, w1 | w2, w1 ^ w3);
	printf("2. ~w1, ~w2, ~w3\n%o %o %o\n\n", ~w1, ~w2, ~w3);
	printf("3. w1 ^ w1, w1 & ~w2, w1 | w2 | w3\n%o %o %o\n\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
/**
 * for the following printf() call it is important to remember that the bitwise
 *AND operator has higher precedence than the bitwise OR, because this fact
 *influences the resulting value of the expression
 */
	printf("4. w1 | w2 & w3, w1 | w2 & ~w3\n%o %o\n\n", w1 | w2 & w3, w1 | w2 & ~w3);
	printf("5. ~(~w1 & ~w2), ~(~w1 | ~w2))\n%o %o\n\n", ~(~w1 & ~w2), ~(~w1 | ~w2));

	w1 ^= w2;
	w2 ^= w1;
	w1 ^= w2;
	printf("w1 ^= w2;\nw2 ^= w1;\nw1 ^= w2;\nw1 = %o, w2 = %o\n", w1, w2);

	return (0);
}
