// Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!...)


#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i=1;i<=n;i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num_terms;
    double e_estimate = 0.0;

    printf("Enter the number of terms for estimating e: ");
    scanf("%d", &num_terms);

    if (num_terms < 0) {
        printf("Number of terms cannot be negative.\n");
        return 1; // Indicate an error
    }

    for (int i = 0; i < num_terms; i++) {
        e_estimate += 1.0 / factorial(i);
    }

    printf("Estimated value of e with %d terms: %.10f\n", num_terms, e_estimate);

    return 0; // Indicate successful execution
}
