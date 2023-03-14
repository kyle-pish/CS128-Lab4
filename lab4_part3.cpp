//Kyle Pish, Josh Reed
//1-27-22
//

#include <iostream>

void Lab4Part3_main(){
  int two_d_array[4][5] = {{4, 25, 14, -10, 10}, {11, -85, 13, 14, 92}, {-258, 22, -99, 321, 17}, {555, 23, 6, 71, -84}};

  std::cout << sizeof(two_d_array) / sizeof(int) << std::endl;
  //20. There are 20 ints in the 2D array, so the size is 20 x int size (4).
  
  std::cout << sizeof(two_d_array) / sizeof(two_d_array[0]) << std::endl;

  //4. The first "item" without a second index is the whole first row, which is 1/4 of the whole 2D array.

  std::cout << sizeof(two_d_array[0]) / sizeof(int) << std::endl;

  //5. There are 5 ints in the first row.

  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 5; col++){
      std::cout << two_d_array[row][col];
      std::cout << " ";
    }
    std::cout << std::endl;
  }

  two_d_array[2][3] = 0;
  two_d_array[3][2] = 444;

  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 5; col++){
      std::cout << two_d_array[row][col];
      std::cout << " ";
    }
    std::cout << std::endl;
  }

  int row_sums[4] = {0, 0, 0, 0};
  int col_sums[5] = {0, 0, 0, 0, 0};

  for (int rows = 0; rows < 4; rows++) {
    for (int cols = 0; cols < 5; cols++){
      row_sums[rows] += two_d_array[rows][cols];
    }
  }
  
  for (int cols = 0; cols < 5; cols++) {
    for (int rows = 0; rows < 4; rows++) {
      col_sums[cols] += two_d_array[rows][cols];
    }
  }

  int table_sum = 0;

  for (int i = 0; i < 4; i++){
    table_sum += row_sums[i];
  }
  
  std::cout << table_sum << std::endl;
  
} 
