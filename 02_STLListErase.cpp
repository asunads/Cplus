// erasing from list
#include <iostream>
#include <list>

int main ()
{
  std::list<int> mylist;
  std::list<int>::iterator it1,it2;

  // set some values:
  for (int i=1; i<10; ++i) mylist.push_back(i*10);
  it1 = mylist.begin();
                              // 10 20 30 40 50 60 70 80 90
  while(it1 != mylist.end())
  {
  	it2 = it1++;
  	std::cout<<"check1  "<<*it2<<std::endl;
    mylist.erase(it2);
  	std::cout<<"check1  "<<*it2<<std::endl;
  }
  std::cout<<"check"<<std::endl;
  return 0;
}