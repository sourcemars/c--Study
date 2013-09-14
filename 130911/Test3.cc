//测试使用下标访问字符串当中的字符
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(){
  string s ("Hello world!!");
  for(string::size_type i = 0; i < s.size();i++){
    cout << s[i] << endl;
  }
}
