#include <iostream>
using namespace std;


class Fraction{
    private:
        int numenitor;
        int denomintor;
    public:
        Fraction(int num, int denum)
        {
            numenitor = num;
            denomintor = denum;
        }

        Fraction operator *(const Fraction &ob)
        {
            Fraction temp(0, 0);
            temp.numenitor = numenitor * ob.numenitor;
            temp.denomintor = denomintor *ob.denomintor;
            return temp;

        }

        void display()
        {
            cout << "Numenitor is: " << numenitor << endl;
            cout << "Denomiteror is: " << denomintor << endl;
        }
};

int main()
{
    Fraction f1(88, 90);
    Fraction f2(89, 90);
    Fraction f3 = f1 * f2;
    f3.display();

    return 0;
}