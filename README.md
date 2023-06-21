# Odd-Even Sorting Project

This project consists of a C++ program that reorders an array of integers such that all even elements appear after all the odd elements. It maintains an efficient algorithm with a time complexity of O(n) and a space complexity of O(1), excluding the array itself.

## Description

The `oddEvenSort.cpp` program utilizes the two-pointer method to sort the array in-place, ensuring that the odd elements come before the even elements. The number of comparisons made in the process is also calculated and displayed.

Here's a summary of the program's logic:

1. The algorithm starts with two pointers, one at the beginning (low) and one at the end (high) of the array.
2. It checks whether the element at the low pointer is odd or even. If it's even, the algorithm checks the element at the high pointer.
3. If the high pointer element is odd, the two elements are swapped, and both pointers are moved toward the center of the array.
4. If the high pointer element is also even, only the high pointer is moved. 
5. If the low pointer element is odd, only the low pointer is moved. 
6. These steps are repeated until the low and high pointers meet.
7. Finally, the sorted array and the number of comparisons made are displayed.

## Instructions

To run the program, follow these steps:

1. Save the `oddEvenSort.cpp` file in your local system.
2. Open the terminal/command prompt and navigate to the directory containing the file.
3. Compile the C++ code using the command `g++ oddEvenSort.cpp -o output`, where `output` can be replaced with a name of your choice for the executable.
4. Run the program using the command `./output`.
5. Enter the elements of the array one per line in the console. Press `Enter` twice to mark the end of the inputs.
6. The program will then display the sorted array one element per line, followed by the number of comparisons made.

This program provides an efficient way to sort an array such that odd elements appear before even ones, demonstrating the power of two-pointer methods in array sorting.
