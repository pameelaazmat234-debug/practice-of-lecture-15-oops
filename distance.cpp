#include <iostream>
using namespace std;


class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance(int feet, int inches)
        {
            this->feet = feet;
            this->inches = inches;
        }

        Distance operator+(const Distance &obj)
        {
            Distance temp(0, 0);
            temp.feet = feet + obj.feet;
            temp.inches = inches + obj.inches;
            return temp;

        }

        void display()
        {
            cout << "Feets are: " << feet << endl;
            cout << "Inches are: " << inches << endl;
        }
        
};


int main()
{
    Distance d1(89, 90);
    Distance d2(56, 89);
    Distance d3 = d2 + d1;
    d3.display();


}