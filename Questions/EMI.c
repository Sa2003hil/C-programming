#include <math.h>
#include <stdio.h>

// Function to calculate EMI
float calc_emi(float p, float r, float t)
{
    float emi;
    // one month interest
    r = r / (12 * 100);
    // one month period
    t = t * 12;
    // Calculate EMI as per formula
    emi = (p * r * pow(1 + r, t)) / (pow(1 + r, t) - 1);
    return (emi);
}
// Driver Program
int main()
{
    float principal, rate, t;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time in year: ");
    scanf("%f", &t);
    printf("\nMonthly EMI is= %f\n", calc_emi(principal, rate, t));
    return 0;
}