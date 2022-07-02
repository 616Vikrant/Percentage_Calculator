#include <stdio.h>
int main()
{
    int Physics, Chemistry, Maths, CS, English, Sum; 
    float Average; 

    printf("Enter Marks for Physics (out of 100): ");
    scanf("%d", &Physics);

    printf("\n Enter Marks for Chemistry (out of 100): ");
    scanf("%d", &Chemistry);

    printf("\n Enter Marks for Maths (out of 100): ");
    scanf("%d", &Maths);

    printf("\n Enter Marks for CS (out of 100): ");
    scanf("%d", &CS);

    printf("\n Enter Marks for English (out of 100): ");
    scanf("%d", &English);

    Sum = (Physics + Chemistry + Maths + CS + English);
    Average = Sum/5.0;

    printf("\n Percentage is: %.2f\n", Average);

    return 0;
}
