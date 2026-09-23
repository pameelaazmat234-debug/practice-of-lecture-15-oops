#include <iostream>
using namespace std;


class Money{
    private:
        double balnce;
    public:
        Money(double b)
        {
            balnce = b;
        }
        Money operator+( Money &obj)
        {
            Money temp(0);
            temp.balnce = balnce + obj.balnce;
            return temp;

        }

        void display()
        {
            cout << "Money is: " << balnce << endl;
        }
};

int main()
{
    Money m1(80000);
    Money m2(90000);
    Money m3 = m1 + m2;
    m3.display();
    return 0;
}