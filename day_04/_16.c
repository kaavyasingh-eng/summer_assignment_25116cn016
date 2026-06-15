#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, remainder, digits, sum;

    printf("Enter lower limit of the range: ");
    scanf("%d", &start);
    printf("Enter upper limit of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        sum = 0;

        // Count total digits in the current number
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        // Extract digits and calculate power sum
        while (temp != 0) {
            remainder = temp % 10;
            // Rounding up using round() prevents float precision loss in pow()
            sum += round(pow(remainder, digits)); 
            temp /= 10;
        }

        // Validate Armstrong criteria
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
