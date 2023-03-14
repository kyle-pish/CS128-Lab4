//Kyle Pish, Josh Reed
//1-27-22
//

#include <iostream>
#include "lab4_part2.h"


void Lab4Part2_main() {

  double double_array[5] = {1.5, 2.5, 3.5, 4.5, 5.5};

  std::cout << SumArray(double_array, 5) << std::endl;

  double* range1 = GetRange(10, 10, 10);
  double* range2 = GetRange(0.5, -0.25, 5);

  //calling the SumArrayFunction for the given ranges
  std::cout << SumArray(range1, 10) << std::endl;
  std::cout << SumArray(range2, 5) << std::endl;

  double* range3 = GetRange(1, 1, 1000000);

  DoubleDoubleArray(range2, double_array, 5);
  
  for (int i = 0; i < 5; i++) {
    std::cout << range2[i] << std::endl;
  }

  for (int i = 0; i < 5; i++) {
    std::cout << double_array[i] << std::endl;
  }

  delete[] range1;
  range1 = 0;
  delete[] range2;
  range2 = 0;
  //delete[] range3;
  //range3 = 0;
}

//funtion gets everything from the double_array variable and adds them together and returns their sum
double SumArray(double double_array[], int length) {
  double sum = 0;
  for (int i = 0; i < length; i++){
    sum += double_array[i];
  }
  
  return sum; 
}

double* GetRange(double start, double step, int count) {

  double* output_array = new double[count];

  //for loop goes over everything in the given range and returns their total
  for (int j = 0; j < count; j++) {
    output_array[j] = start;
    //std::cout << j << "," << count << "," << (j < count) << "," << std::endl;
    start += step;
    
  }
  std::cout << start;
  return output_array;
}

//Takes a double array, a second double array with a size greater than or equal to the size of the first, and an integer, which is the size of the first array.
void DoubleDoubleArray(double double_array_1[], double double_array_2[], int array_1_length) {
  for (int i = 0; i < array_1_length; i++) {
    double_array_2[i] = 2 * double_array_1[i];
  }
}