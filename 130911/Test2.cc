//用于测试C++当中的字符串比较操作符号
//还可以使用 <, <= , > , >= 和  != 来进行操作

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
int main(){
  string big = "big";
  string small = "big";

  /* cout <<  "result is " << big == small << endl; */
  if(big == small){
    cout << "equals" << endl;
  }
}
