#include <stdio.h>

double calculateDiscount(double paidAmount) {
    double discount = 0.0;

    if (paidAmount > 1000000) {
        double amountOver1M = paidAmount - 1000000;
        discount += amountOver1M * 0.03;

        if (paidAmount > 2000000) {
            double amountOver2M = paidAmount - 2000000;
            discount += amountOver2M * 0.05;
        }
    }

    // Ensure the discount does not exceed 300,000VND
    discount = discount > 300000 ? 300000 : discount;

    return discount;
}

#include <stdio.h>

int main() {
    double paidAmount;
    printf("Enter the amount of money paid: ");
    scanf("%lf", &paidAmount);

    double discount = calculateDiscount(paidAmount);
    printf("Discount amount: %'.2lfVND\n", discount);

    return 0;
}