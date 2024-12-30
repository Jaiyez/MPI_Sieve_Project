#!/bin/bash

# Define a range of process counts and maximum values for n
process_counts=(2 4 8)
n_values=(100000 500000 1000000)

# Compile the program
mpic++ -o mpi_sieve mpi_sieve.cpp

# Run benchmarks
for n in "${n_values[@]}"; do
    for p in "${process_counts[@]}"; do
        echo "Running with n=$n and p=$p"
        mpiexec -n $p ./mpi_sieve $n
        echo "----------------------------------------"
    done
done
