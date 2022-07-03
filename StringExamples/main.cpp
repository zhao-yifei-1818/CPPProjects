#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter pattern: " ;
    string pattern;
    //cin >> pattern;
    pattern = "5033-123-1233-49544-2-32-434";
    string::size_type nextDashLoc = pattern.find('-');

    while (nextDashLoc != string :: npos){
        //grab up to dash
        string chunk= pattern.substr(0, nextDashLoc);
        cout << chunk << endl;
        // Erase up to dash
        pattern.erase(0, nextDashLoc + 1);
        //find next
        nextDashLoc = pattern.find('-');

    }
    cout << pattern << endl;
    cout << "Something" << setw(5) << "thing1"<<endl;
    cout << left << setfill('*');
    cout << setw(5) << 12 << 10;

    cout << "Enter numerator and denominator: ";
    int numerator, denominator;
    cin >> numerator >> denominator;

    cout << "Numerator/Denominator  Decimal Value" << endl;
    cout << right << setw(9) << numerator;
    cout << "/";
    cout << left << setw(11) << denominator;
    cout << "  ";

    double decimalValue = static_cast<double>(numerator) / denominator;
    cout << fixed << setprecision(2) << decimalValue << endl;
    return 0;
}
