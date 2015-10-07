
#include "Coordinate.h"
Coordinate::Coordinate(int x,int y)
{
    m_iX =x;
    m_iY =y;

}
int Coordinate::getX()
{
    return m_iX;
}
int Coordinate::getY()
{
    return m_iY;

}
Coordinate &Coordinate::operator-()
{
    this->m_iX=-(this->m_iX);
    m_iY=-m_iY;//这两种都可以
    return *this;//要加* ，因为我们是引用的，加上*就是返回对象
}
