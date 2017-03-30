/* program to demonstrate the bitwise exclusive OR operator */

#include <stdio.h>
int main (void)
{
/* integer constant with leading 0 represents an octal constant - w1, w2
   are given octal values of 0431, 0152 */
/* if u or U follows an integer constant, it is treated as unsigned */

	unsigned int word1 = 0536u;
/* word1 converted to binary is 101011110 */
	unsigned int word2 = 0266u;
/* w2 converted to binary is 10110110 */

/* first printf() call displays result of word1 exclusive-ORed with word2.
This depicts how the value was calculated:
word1   ... 101  011  110   0536
word2   ... 010  110  110 ^ 0266
       ----------------------------
            111  101  000   0750
*/
	printf("word1 ^ word2 = %o \n", word1 ^ word2);

/* any value exclsive-ORed with itself produces 0 - historically this trick was
used by assembly lang programmers as a fast way to set value to 0 or compare two
values to see if they were equal
word1   ... 101  011  110   0536
word1   ... 101  011  110 ^ 0536
-----------------------------------
            000  000  000   0
*/
	printf("word1 ^ word1 = %o\n", word1 ^ word1);

/* Exclusive-OR can be used to exchange two values without need for extra memory
Normally you would interchange two integers called i1 and i2
with a sequence of statements such as
	temp = i1;
	i1 = i2;
	i2 = temp;
*/
	int temp, i1, i2;
	i1 = 2;
	i2 = 4;
	printf("i1 = %i\ni2 = %i\n", i1, i2);
	printf("---\n");
	temp = i1;
	printf("1. temp = i1\ntemp = %i\n", temp);
	printf("---\n");
	i1 = i2;
	printf("2. i1 = i2\ni1 = %i\ni2 = %i\n", i1, i2);
	printf("---\n");
	i2 = temp;
	printf("3. i2 = %i\n\n\n", i2);
/* Exclusive-OR operator can be used to exchange values without need of
   temporary storage location
   i1 ^= i2;
   i2 ^= i1;
   i1 ^= i2;
*/

	return (0);
}
