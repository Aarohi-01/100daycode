#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percent): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    compoundInterest = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest=%g, Compound Interest=%g\n", simpleInterest, compoundInterest);

    return 0;
}