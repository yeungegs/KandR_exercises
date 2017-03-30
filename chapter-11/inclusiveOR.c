/* program to demonstrate the bitwise inclusive OR operator */

#include <stdio.h>
int main (void)
{
/* integer constant with leading 0 represents an octal constant - w1, w2
   are given octal values of 0431, 0152 */
/* if u or U follows an integer constant, it is treated as unsigned */

	unsigned int word1 = 0431u;
/* word1 converted to binary is 100011001 */
	unsigned int word2 = 0152u;
/* w2 converted to binary is 1101010 */

/* first printf() call displays octal 573 as result of bitwise Inclusive-OR
word1 with word2.
This depicts how the value was calculated:
word1   ... 100  011  001     0431
word2   ... 001  101  010   | 0152
       ----------------------------
            101  111  011     0573
*/
	printf("word1 | word2 = %o \n", word1 | word2);

/* next printf() call sets three rightmost bits of word1 to 1, regardless of the
   state these bits were in before operation performed
word1   ... 100  011  001     0431
        ... 000  000  111    |  07
-----------------------------------
            100  011  111     0437
*/
	printf("word1 | 07 = %o\n", word1 | 07);

	return (0);
}
