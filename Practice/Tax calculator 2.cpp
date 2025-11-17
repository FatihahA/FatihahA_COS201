#include <iostream>
using namespace std;

int main(){
    int totalSales = 95000;
    cout<<"Total Sales: "<<totalSales<<endl;
    const double stateTax= 0.04;
    const double countyTax= 0.02;
    double totalTax = stateTax + countyTax;
    double salesTax = totalSales * totalTax;
    cout<<"Sales Tax: "<<salesTax<<endl;
    return 0;
}