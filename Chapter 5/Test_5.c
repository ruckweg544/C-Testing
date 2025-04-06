/* Chapter 5 Selection Statements Question 7 */
/** Although program could be written simply using loops, program uses selection **/

#include <stdio.h>

int main(void) {
    int a, b, c, d;
    int max, min;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = a;
    if (b > max)
        max = (c > b) ? (c > d) ? c : d : (d > b) ? d : b;
    else
        max = (c > max) ? (c > d) ? c : d : (d > max) ? d : max;

    min = a;
    if (min > b)
        min = (c < b) ? (c < d) ? c : d : (d < b) ? d : b;
    else
        min = (c < min) ? (c < d) ? c : d : (d < min) ? d : min;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    return 0;
}