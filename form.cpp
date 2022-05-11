#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cgicc/CgiDefs.h>
#include <cgicc/Cgicc.h>
#include <cgicc/HTTPHTMLHeader.h>
#include <cgicc/HTMLClasses.h>
using namespace std;
using namespace cgicc;
int main() {
    cout << "Content-type: text/html\r\n\r\n";
  Cgicc cgi;
 string op1;
 string nm1;
 string nm2;
  nm1 = cgi("num1");
  nm2 = cgi("num2");
  op1 = cgi("op1");
std::string si = nm1;
std::string sf = nm2;
int num1 = atoi(si.c_str());
int num2 = atoi(sf.c_str());
  cout << "<html><head><meta charset=utf-8><title>Калькулятор</title></head><body>\n";
  cout << "<HR>\n";
  cout << "<H1 align='center'><font color='green'>Результат :</font></H1>\n";
  cout << "<p align=center>";
cout << "<H1 align='center'> <font color='green'>" << nm1 << op1 << nm2 << " = "<< (num1*num2)  << "</font></H1>\n";
cout << "</body></html>\n";
return 0;
}