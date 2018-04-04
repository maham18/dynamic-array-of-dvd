#include<iostream>
#include "DvDCollection.h"
using namespace std;
int main()
{
dvdcollection d1;
d1.add(*(new dvd("computer drivers",150)));
d1.add(*(new dvd("Windows 10",170)));
d1.add(*(new dvd("MATLAB",100)));
d1.add(*(new dvd("Visual studio",120)));
d1.add(*(new dvd("Microsoft office",150)));
d1.add(*(new dvd("GW BASIC",170)));
d1.add(*(new dvd("DOS box",100)));
d1.display();
cout << endl <<"Index :"<<d1.search(100)<<endl;
d1.Delete("DOS box");
d1.display();
system("pause");

};

