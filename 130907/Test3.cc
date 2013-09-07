//测试所谓的引用的作用，看起来这里的引用概念和java
//当中的不一样,另外，在C++当中，引用的声明需要加&，
//但是在使用的过程当中并不需要
#include <iostream>

int main(){
  int val = 20;
  int &refVal = val;
  int other = refVal;

  val += 2;
  std::cout << refVal << std::endl;
  std::cout << other << std::endl;
}
