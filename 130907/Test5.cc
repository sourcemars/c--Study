#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
int main(){ //前几个练习当中写的主函数好像没有写return，这也行？
  string s;
  /* cin >> s; */
  /* cout << s << endl; */
  while(cin >> s){//我擦，读入一个字符串竟然还有返回值，悲催，还不知道怎么看c++的文档，导致看不明白。。。
    cout << s << endl;
  }
  return 0;
}
