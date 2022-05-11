#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(void) {
cout << "Content-Type: text/html\n\n";

cout << "<html><head><meta charset=utf8><title>Калькулятор</title></head><body>\n";
cout << "<h1 align=center><font size=10 color=green>Калькулятор</font></h1>\n";
cout << "<form action='form.cgi' method='post'>\n";
  cout << "<TABLE align='center' bgcolor='green'>\n";
  cout << "<TR>\n";
  cout << "<TD><font color='white'>Перше число :</font>: </TD>\n";
  cout << "<TD><input type='text' size='10' maxlength='20' name='num1'> </TD>\n";
  cout << "</TR>\n";
  cout << "<TR>\n";
  cout << "<TD><font color='white'>Друге число :</font> :  </TD>\n";
  cout << "<TD><input type='text' size='10' maxlength='20' name='num2'> </TD>\n";
  cout << "</TR>\n";
  cout << "<TR>\n";
  cout << "<TD><font color='white'>Операція :</font> : </TD>\n";
  cout << "<TD><input type='text' size='10' maxlength='20' name='op1'></TD>\n";
  cout << "</TR>\n";
  cout << "</TABLE>\n";
  cout << "<p align='center'>\n";
  cout << "<input type='submit' value='Вирахувати' >\n";
  cout << "<input type='reset' value='Очистити'>\n";
  cout << "</p>\n";
   cout << "</form>\n";
  cout << "<hr>\n";
return 0;
}
