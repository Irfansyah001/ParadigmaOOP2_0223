#include <iostream>
using namespace std;

class AbstraksiKelas
{
private:
    string x, y;

public:
    void setXY(string a, string b) // Method untuk mengisi nilai. Private member
    {
        x = a;
        y = b;
    }

    void display() // Tampilkan nila
    {
        cout << "x == " << x << endl;
        cout << "y == " << y << endl;
    }
};

int main()
{
    AbstraksiKelas ak;
    ak.setXY("Yogyakarta", "Kampus");
    ak.display();

    return 0;
}