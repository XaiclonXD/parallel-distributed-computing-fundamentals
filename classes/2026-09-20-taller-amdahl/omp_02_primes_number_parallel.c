/**
    * @file omp_02_primes_number_parallel.c
    * @brief Counts prime numbers up to N in parallel with OpenMP, measuring execution time
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

    #pragma omp parallel for reduction(+:counterPrimes)
    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            counterPrimes++;
    }

    double elapsedTime = omp_get_wtime() - startTime;

    printf("Primes found: %d\n", counterPrimes);
    printf("Parallel Time: %.3fsg\n", elapsedTime);
}

// Compilation: gcc omp_02_primes_number_parallel.c -o primes_number_parallel -fopenmp
// Execution:   OMP_NUM_THREADS=12 ./primes_number_parallel
