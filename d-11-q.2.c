#include <stdio.h>

int main() {
    double cp, sp, profit, loss, profitPercentage, lossPercentage;

    printf("Enter cost price: ");
    scanf("%lf", &cp);

    printf("Enter selling price: ");
    scanf("%lf", &sp);

    if (sp > cp) {
        profit = sp - cp;
        profitPercentage = (profit / cp) * 100.0;
        printf("Profit %g%%\n", profitPercentage);
    } else if (cp > sp) {
        loss = cp - sp;
        lossPercentage = (loss / cp) * 100.0;
        printf("Loss %g%%\n", lossPercentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}