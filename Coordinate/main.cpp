#include <iostream>
#include "Coordinate.h"
#include <stdlib.h>
using namespace std;

int main()
{
    Coordinate coor1(1,3);
    cout<<coor1.getX()<<","<<coor1.getY()<<endl;
    -coor1;//coor1.operator-();
    cout<<coor1.getX()<<","<<coor1.getY()<<endl;
    system("pause");
    cout << "Hello world!" << endl;
    return 0;
}
