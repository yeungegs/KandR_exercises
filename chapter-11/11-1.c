/* program to demonstrate the bitwise AND operator
Truth Table for result of b1 ANDed with b2 for all possible values of b1, b2
b1  b2  b1 & b2
-----------------
0   0      0
0   1      0
0   0      0
1   1      1
 */

#include <stdio.h>
int main (void)
{
/* integer constant with leading 0 represents an octal constant - word1, word2,
   word3 are given octal values of 077, 0150, and 0210 */
/* if u or U follows an integer constant, it is treated as unsigned */

	unsigned int word1 = 077u;
	unsigned int word2 = 0150u;
	unsigned int word3 = 0210u;

/* first printf call displays octal 50 as result of bitwise
ANDing word1 with word2. This depicts how the value was calculated:
word1   ... 000  111  111      077
word2   ... 001  101  000   & 0150
       ----------------------------
            000  101  000      050
*/
	printf("%o ", word1 & word2);

/* next printf call dxplays octal 77 which is result of ANDing word1 with word1
   by definition, any quantity x, when ANDed with itself, produces x */

	printf("%o ", word1 & word1);

/* third printf call displays 10 - the result of ANDing word1, word2 and word3
bitwise ANDing evaluates from left to right
word1   ... 000  111  111      077
word2   ... 001  101  000   & 0150
word3   ... 010  001  000   & 0210
       ----------------------------
            000  001  000      010
*/
	printf("%o ", word1 & word2 & word3);

/* final printf call extracts rightmost bit of word1.
This is another way of testing if an integer is even or odd because
that rightmost bit of any odd integer is 1 and of any even integer is 0
word1   ... 000  111  111      077
        ... 000  000  001    &   1
-----------------------------------
            000  000  001        1
*/
	printf("%o\n", word1 & 1);

	return (0);
}
