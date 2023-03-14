//Kyle Pish, Josh Reed
//1-27-22
//

#include <iostream>

void Lab4Part1_main() {
  double double_array[5];

  //output each item in the array
  for (int i = 0; i < 5; i++) {
    std::cout << double_array[i] << std::endl;
  }

  double_array[0] = 1.5;
  double_array[1] = 2.5;
  double_array[2] = 3.5;
  double_array[3] = 4.5;
  double_array[4] = 5.5; 

  //function adding all items of the array together
  double double_sum = 0;
  for (int i = 0; i < 5; i++) {
    double_sum = double_sum + double_array[i];
  }
  std::cout << double_sum << std::endl;
  
  double* array_pointer = double_array;

  std::cout << *array_pointer << std::endl;

  //looping over everything in the array by using a pointer and outputting each element of the array
  for (int i = 0; i < 5; i++){
    std::cout << *array_pointer << std::endl;
    array_pointer += 1;
  }
  
  double* last_element_ptr = double_array;

  last_element_ptr += 4;

  std::cout << *last_element_ptr << std::endl;

  double* evil_ptr = double_array + 5;
  
  std::cout << *evil_ptr << std::endl;

  std::cout << double_array[6] << std::endl;

}