// 'Hello World!' program 
 
#include <iostream>
#include "tinyxml.h"
#include "tinystr.h"
#include <string>
 
int main()
{
  std::string str = "<ToDo><Item priority=\"1st priority\"> item 1</Item><Item priority=\"2nd priority\"> item 2</Item></ToDo>";
  const char *filedata = str.c_str();
  std::cout << "Hello World!" << std::endl;
  TiXmlDocument doc;
  doc.Parse((const char*)filedata, 0, TIXML_ENCODING_UTF8);
  TiXmlElement* child = doc.FirstChild( "ToDo" )->FirstChild( "Item" )->ToElement();
  TiXmlElement* element = doc.RootElement();
  std::cout << "Elem: " << child->Attribute("priority") << std::endl;
  return 0;
}

