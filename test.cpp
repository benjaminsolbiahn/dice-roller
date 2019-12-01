#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(){

  int x = 0;

  srand (time(NULL));
  x = (rand() % 6) + 1;

  std::cout << x;

return 0;
}
