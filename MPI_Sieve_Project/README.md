# MPI Sieve of Eratosthenes

This project implements the Sieve of Eratosthenes algorithm using MPI (Message Passing Interface) to find prime numbers up to a given maximum value.

## Files
- **mpi_sieve.cpp**: The main implementation of the MPI Sieve of Eratosthenes.
- **benchmark.sh**: A shell script to automate benchmarking (optional).
- **README.md**: Documentation and instructions for the project.

## Setup Instructions

1. **Install MPI**:
   Ensure you have MPI installed on your system. For Windows, using WSL with Ubuntu is recommended.

2. **Compile the Program**:
   Use `mpic++` to compile the code:
   ```bash
   mpic++ -o mpi_sieve mpi_sieve.cpp
