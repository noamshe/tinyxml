// 'Hello World!' program 
 
#include <iostream>
#include "tinyxml.h"
#include "tinystr.h"
 
int main()
{
  std::cout << "Hello World!" << std::endl;
  TiXmlDocument doc("demo.xml");
  doc.LoadFile();
  TiXmlElement* child = doc.FirstChild( "ToDo" )->FirstChild( "Item" )->ToElement();
  TiXmlElement* element = doc.RootElement();
  std::cout << "Elem: " << child->Attribute("priority") << std::endl;
  return 0;
}

