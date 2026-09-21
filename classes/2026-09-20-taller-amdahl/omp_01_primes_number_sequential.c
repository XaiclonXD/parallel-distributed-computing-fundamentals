/**
    * @file omp_01_primes_number_sequential.c
    * @brief Cuenta numeros primos hasta N de forma secuencial, midiendo el tiempo de ejecucion
    * @author Jhoan Araque
    * @date 2026-09-20
*/
#include <stdio.h>
#include <math.h>
#include <omp.h>

#define N 50000000

int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    double startTime = omp_get_wtime();
    int counterPrimes = 0;

    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            counterPrimes++;
    }

    double elapsedTime = omp_get_wtime() - startTime;

    printf("Primes found: %d\n", counterPrimes);
    printf("Sequential Time: %.3fsg\n", elapsedTime);
}

// Compilation: gcc omp_01_primes_number_sequential.c -o primes_number_sequential -fopenmp
// Execution:   ./primes_number_sequential
