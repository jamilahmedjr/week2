#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double total = 0;
    float cost = 4.12;
    float profit = 1.45;
    float kg = 2.76;

    cout << "****************************************************************************" << endl;
    cout << "**************** Welcome To my Github Page *********************************" << endl;
    cout << "****************************************************************************" << endl;
    cout << endl;
    cout << endl;
    
    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> total;
    float hold = round(total / kg);



    cout << "The number of containers to hold the cheese is:" << setw(30) << hold << endl;
    cout << "The cost of producing " << hold << " container(s) of cheese is: $" << setw(23) << hold * cost << endl;
    cout << "The profit from producing " << hold << " container(s) of cheese is: $" << setw(19) << hold * profit << endl;


 
    return 0;
}
