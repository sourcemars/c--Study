//用于测试C++当中生成字符串，以及获取字符串的长度
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
int main(){
  string st("The expense of spirite\n");

  cout << "size " << st.size() << endl;
  return 0;
}
