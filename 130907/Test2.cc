//用于测试不同的字符串初始化方法
#include <iostream>
#include <string>

int main(){
  std::string s1 = "abc123";
  std::string s2("acb123");
  std::string s3(10,'9');

  std::cout << s1 << s2 << s3 << std::endl;
}
