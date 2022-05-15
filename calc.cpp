#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
  cout << "Content-type: text/html\r\n\r\n";
  cout << "<!doctype html>\n";
  cout << "<head>\n";
  cout << "<title>Калькулятор</title>\n";
  cout << "<meta charset=UTF-8>\n";

  cout << "</head>\n";
  cout << "<body>\n";

  cout << "<HR>\n";
  cout << "<H1 align='center'><font color='green'>Калькулятор Римара Віктора:</font></H1>\n";
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
