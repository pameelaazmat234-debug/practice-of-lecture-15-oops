#include <iostream>
using namespace std;


class Book{
    private:
        int totalPages;
    public:
        Book(int page)
        {
            totalPages = page;
        }
        int operator+(const Book &obj)
        {
            int pages;
            pages = totalPages + obj.totalPages;
            return pages;
        }
       
};

int main()
{
    Book b1(8888);
    Book b2(900);
    int total = b1 + b2;
    cout << "Total pages are: " << total << endl;

    return 0;
}