Core Components
mpi_sieve.cpp:

Implements the Sieve of Eratosthenes algorithm to identify prime numbers.
Utilizes MPI to divide the workload among multiple processes, demonstrating efficient parallelization.
Includes performance measurement using MPI_Wtime() to evaluate execution time.
benchmark.sh:

A shell script for automating performance benchmarks.
Varies the number of processes and maximum value (n) to analyze scalability and execution time.
README.md:

Provides setup instructions and details about the project, making it easy to compile and run the program.


Key Features
Parallel Processing:
Distributes the computational workload across multiple processes using MPI, reducing execution time for large inputs.
Benchmarking:
Automates performance testing to analyze how different configurations (e.g., number of processes) affect runtime.


Key Learning Outcomes
Distributed Computing:
Gained experience in parallel programming with MPI.
Algorithm Implementation:
Improved understanding of the Sieve of Eratosthenes and its computational complexity.
Performance Optimization:
Explored the impact of parallelization on algorithm efficiency.
Benchmarking and Analysis:
Automated testing to compare performance across varying configurations.
