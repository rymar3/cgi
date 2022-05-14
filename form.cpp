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
  Cgicc cgi;
  string op1;
 string nm1;
 string nm2;  
  cout << "Content-type: text/html\r\n\r\n";
  cout << "<!doctype html>\n";
  cout << "<html lang=\"en\">\n";
  cout << "<head>\n";
  cout << "<title>Hello World</title>\n";
  cout << "<meta charset=UTF-8>\n";
  cout << "</head>\n";
  cout << "<body>\n";
  cout << "<HR>\n";
  cout << "<H1 align='center'><font color='green'>Результат :</font></H1>\n";
  cout << "<p align=center>";
  nm1 = cgi("num1");
  nm2 = cgi("num2");
  op1 = cgi("op1");

  if (!nm1.empty() && !nm2.empty() && !op1.empty()) {
std::string si = nm1;
std::string sf = nm2;
int num1 = atoi(si.c_str());
int num2 = atoi(sf.c_str());

if(op1=="*") cout << "<H1 align='center'> <font color='green'>" << num1 << op1 << num2 << "= " << (num1*num2) << "</font></H1>\n";
if(op1=="/") cout << "<H1 align='center'> <font color='green'>" << num1 << op1 << num2 << "= " << (num1/num2) << "</font></H1>\n";
if(op1=="+") cout << "<H1 align='center'> <font color='green'>" << num1 << op1 << num2 << "= " << (num1+num2) << "</font></H1>\n";
if(op1=="-") cout << "<H1 align='center'> <font color='green'>" << num1 << op1 << num2 << "= " << (num1-num2) << "</font></H1>\n";

  } else {.
    cout << "Не всі числа введені !.";
  }
  cout << "</p>\n";
  cout << "<hr>\n";
  cout << "</body>\n";
  cout << "</html>";
  return 0;
}
