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
  nm1 = cgi("num1");
  nm2 = cgi("num2");
  op1 = cgi("op1");
cout << "<H1 align='center'> <font color='green'>" << nm1 << op1 << nm2 << "= 12" << "</font></H1>\n";
return 0;
}