#include <stdio.h>
#include <math.h>

int main() {
    // Read in size
    int size;
    printf("How many numbers?\n");
    scanf("%d", &size);

    // Read in numbers
    int nums[size];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    // Find the mean (average)
    double avg = 0;
    for (int i = 0; i < size; i++) {
        avg += nums[i];
    }
    avg /= size;

    printf("The mean is %lf\n", avg);

    // Find the variance
    //      for each number
    //          subtract the mean and square the result
    //      average the squared differences

    double variance = 0;
    for (int i = 0; i < size; i++) {
        double diff = nums[i] - avg;
        double res = diff * diff;
        variance += res;
    }
    variance /= size;

    printf("The variance is %lf\n", variance);

    // Find the standard deviation (square root of variance)
    double sd = sqrt(variance);

    printf("The standard deviation is %d (%.3lf)\n", (int)round(sd), sd);

    return 0;
}
