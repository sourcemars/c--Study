
//不是非常理解这个地方的意思，所谓的const的引用，是不能够修改的，所以说const的引用是只读的？
//应该是这个意思
#include <iostream>

int main(){
  int i = 100;
  const int &r = i;

  i++;
  std::cout << r << std::endl;
  r++;//这里是会出现编译错误的
  
}
