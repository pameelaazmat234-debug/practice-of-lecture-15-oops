#include <iostream>
using namespace std;


class Point{
    private:
        int x;
        int y;
    public:
        Point(int x, int y)
        {
            this->x = x;
            this->y = y;
        }

        Point operator+(const Point &obj)
        {
            Point temp(0, 0);
            temp.x = x + obj.x;
            temp.y = y + obj.y;
            return temp;
        }


         Point operator-(const Point &obj)
        {
            Point temp(0, 0);
            temp.x = x - obj.x;
            temp.y = y - obj.y;
            return temp;
        }
        void display()
        {
            cout << "Vlaue of point x is: " << x << endl;
            cout << "Value of point y is: " << y << endl;
        }
};

int main()
{
    Point p1(8, 9);
    Point p2(90, 89);
    Point p3(80, 56);
    Point p4 = p3 + p2 + p1;

    p4.display();
    p4 = p3 - p2 - p1;
    p4.display();
}