#include <iostream>

using namespace std;

class MyCircle;

class MyVec
{
private:
   float m_x, m_y, m_z;
public:
   MyVec(float x = 0, float y = 0 ,float z = 0)
   {
      m_x = x;
      m_y = y;
      m_z = z;
   }
   void print()
   {
      cout << "(" << m_x << "," << m_y << "," << m_z << ")" << endl;
   }
   float getX() { return m_x; }
   float getY() { return m_y; }
   float getZ() { return m_z; }

   MyVec operator+(const MyVec &in);
   bool operator==(const MyVec& in);
   MyVec operator*(const float a);
   MyVec operator+=(const MyVec& a);

   friend float getDistance(MyVec a, MyCircle b);
   friend MyVec operator-(const MyVec &a, const MyVec &b);
   friend MyVec operator*(const float a, const MyVec& b);
   friend ostream& operator << (ostream& o, const MyVec& in);
};

MyVec MyVec::operator+(const MyVec &in)
{
   MyVec out;
   out.m_x = m_x + in.m_x;
   out.m_y = m_y + in.m_y;
   out.m_z = m_z + in.m_z;

   return out;
}

bool MyVec::operator==(const MyVec& in)
{
   return (m_x == in.m_x && m_y == in.m_y && m_z == in.m_z);
}

MyVec MyVec::operator*(const float a)
{
   MyVec out;
   out.m_x = a * m_x;
   out.m_y = a * m_y;
   out.m_z = a * m_z;

   return out;
}

MyVec MyVec::operator+=(const MyVec& in)
{
   m_x += in.m_x;
   m_y += in.m_y;
   m_z += in.m_z;

   return *this;
}

MyVec operator*(const float a, const MyVec& b)
{
   MyVec out;
   out.m_x = a * b.m_x;
   out.m_y = a * b.m_y;
   out.m_z = a * b.m_z;

   return out;
}

MyVec operator-(const MyVec &a, const MyVec &b)
{
   MyVec out;
   out.m_x = a.m_x - b.m_x;
   out.m_y = a.m_y - b.m_y;
   out.m_z = a.m_z - b.m_z;

   return out;
}

ostream &operator << (ostream& o, const MyVec& in)
{
   o << "(" << in.m_x << "," << in.m_y << "," << in.m_z << ")" << endl;
   return o;
}


class MyCircle 
{
private:
   float m_x, m_y, m_z, m_r;
public:
   MyCircle(float x = 0, float y = 0, float z = 0,float r = 1)
   {
      m_x = x;
      m_y = y;
      m_z = z;
      m_r = r;
   }
   friend float getDistance(MyVec a, MyCircle b);
   friend float getDistance(MyVec a);


};

float getDistance(MyVec a, MyCircle b)
{
   return sqrt((a.m_x - b.m_x) * (a.m_x - b.m_x) 
            + (a.m_y - b.m_y) * (a.m_y - b.m_y) 
            + (a.m_z - b.m_z) * (a.m_z - b.m_z)) - b.m_r;
}

int main()
{
   MyVec a(3, 4, 5), b(1, 2, 0);
   MyVec c =  a + b;            //a.operator+ (b)
   MyVec d = a - b;            //operatior* (a , b)
   MyVec e = 10 * a + b * 3 + c; 
   cout << "e : " << e;
   d = e += a;
   cout << "e : " << e;
   cout << "d : " << d;

   //c.operator=(a);
   //opertator= (c,a)
   //i++
   //++i
   //!i

   //unary operator : 연산자에 필요한 피연산자가 1개
   //binary operator : 연산자에 필요한 피연산자가 2개
   //a+b      //a.operator+(b) , operator+ (a,b)
   //a-b
   //a*b
   //a = c
   //a == c

   //trinary(삼항) operator
   //(a==b)?c:d



   cout << "a : " << a;
   cout << "b : " << b;
   cout << "c : " << c;
}