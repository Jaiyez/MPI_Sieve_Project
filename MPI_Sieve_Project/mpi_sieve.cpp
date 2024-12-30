
#include <mpi.h>
#include <iostream>
#include <vector>
#include <cmath>

// Function to implement the sieve algorithm
void sieve(int n, int rank, int size, std::vector<int>& primes) {
    int sqrt_n = (int)std::sqrt(n);
    std::vector<bool> is_prime(n + 1, true);
    
    // Sieve of Eratosthenes algorithm implementation
    for (int p = 2; p <= sqrt_n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    // Collect prime numbers
    for (int p = 2; p <= n; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
}

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int n = 1000000; // Max number to search for primes, adjust this to see the performance
    std::vector<int> primes;

    if (rank == 0) {
        double start_time = MPI_Wtime(); // Start timer
        sieve(n, rank, size, primes);
        double end_time = MPI_Wtime(); // End timer
        std::cout << "Elapsed time: " << (end_time - start_time) << " seconds" << std::endl;
    }

    MPI_Finalize();
    return 0;
}
