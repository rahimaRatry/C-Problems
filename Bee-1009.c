/* Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don�t forget to print the line's end after the result, otherwise you will receive �Presentation Error�.

- Don�t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.

Input Samples	Output Samples
JOAO
500.00               TOTAL = R$ 684.54
1230.30

PEDRO
700.00               TOTAL = R$ 700.00
0.00

MANGOJATA
1700.00              TOTAL = R$ 1884.58
1230.50

 */
#include<stdio.h>
int main()
{
    char name[30];
    float sa;
    double se,TOTAL;
    gets(name);
    scanf("%f %lf",&sa,&se);
    TOTAL = sa + (se*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
