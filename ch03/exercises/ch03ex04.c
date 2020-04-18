/* ch03ex04.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 49. Exercise 4

  Ray Santos
  July 26, 2015

  Suppose that we call scanf as follows:

    scanf("%d%f%d", &i, &x, &j);

  If the user enters

    10.3 5 6

  what will be the values of i, x, and j after the call?

  (Assume that i and j are int variables and x is a float variable)

  My answer:
    1. Conversion specification %d: scanf reads character 1 and determines that
       integers can contain a 1, so it reads the next character 0, which integers
       can also contain. scanf reads the next character . and determines that integers
       cannot contain a decimal, so the decimal character (.) is put back.
       The value of i is 10

    2. Conversion specification %f: scanf reads the decimal character (.) and determines
       that floats can contain a decimal, so it reads the next character 3, which floats
       can contain.
       The value of x is .3

    3. Conversion specification %d: scanf reads the whitespace characters and ignores it.
       scanf reads the next character 5 and determines that integers can contain a 5.
       scanf reads the next character, a whitespace, which it ignores, and determines that
       no more characters are to be read for the conversion specification %d.
       The value of j is 5

    4. Because all three conversion specifiers have been filled, the remaining input
       character of 6 is put back into the buffer for next call of scanf.

    5. Final answer is:
         i = 10
         x = 0.300000 (see note below)
         j = 5

       Note: if a float doesn't contain a non-zero value before the decimal point, C prints
             a 0 before the decimal point. If a float conversion specifier doesn't contain
             any format specifications, C prints decimals to six places after the decimal
             and adds zeroes where needed by default.

*/

int main(void)
{
  int i, j, k;
  float x;

  printf("Enter the numbers 10.3, 5, and 6 (without the commas): ");
  scanf("%d%f%d", &i, &x, &j);

  printf("The numbers read using scanf(\"%%d%%f%%d\", &i, &x, &j) are: \n");
  printf("i = %d\n", i);
  printf("x = %f\n", x);
  printf("j = %d\n\n", j);

  printf("Since, the value 6 is not read and put back into the input buffer on the first call of scanf \n lets call another scanf(\"%%d\",&k) to store this value into k \n but no user input to be made this time because the value would be going from the input buffer instead ");
  scanf("%d",&k);
  printf("\n\nk = %d",k);

  return 0;
}

/* Program Execution

Enter the numbers 10.3, 5, and 6 (without the commas): 10.3 5 6
The numbers read using scanf("%d%f%d", &i, &x, &j) are:
i = 10
x = 0.300000
j = 5

Since, the value 6 is not read and put back into the input buffer on the first call of scanf
 lets call another scanf("%d",&k) to store this value into k
 but no user input to be made this time because the value would be going from the input buffer instead

k = 6
*/
