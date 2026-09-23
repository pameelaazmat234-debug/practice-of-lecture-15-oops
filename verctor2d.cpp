#include <iostream>
using namespace std;


class Vextor2D{
    private:
        int x;
        int y;
    public:
        Vextor2D(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        Vextor2D operator+ (const Vextor2D &obj)
        {
            Vextor2D temp(0, 0);
            temp.x = x + obj.x;
            temp.y = y + obj.y;
            return temp;
        }
         Vextor2D operator - (const Vextor2D &obj)
        {
            Vextor2D temp(0, 0);
            temp.x = x - obj.x;
            temp.y = y - obj.y;
            return temp;
        }

        void display()
        {
            cout << "First number is: " << x << endl;
            cout << "Second number is: " << y << endl;
        }


};


int main()
{
    Vextor2D v1(77, 90);
    Vextor2D v2(899, 89);
    Vextor2D v3(98, 67);
    Vextor2D v4 = v1 + v2 - v3;
    v4.display();
    return 0;
}
