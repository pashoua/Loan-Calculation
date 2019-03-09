#include <iostream>

using namespace std;

int main()
{
    //Get user's
    double loanAmount;
    cout << "Please enter loan amount: ";
    cin >> loanAmount;
    double interest;
    cout << "Please enter interest percentage w/o percent sign: ";
    cin >> interest;
    double payment;
    cout << "Please enter monthly payment: ";
    cin >> payment;

    double monthlyInterest = (interest*.01)/12;
    int monthCount=0;

    if(loanAmount*monthlyInterest > payment){
        cout<<"Warning: Loan cannot be paid off with the payment entered!"<< endl;
    }
    else{
        for (int i = 0; loanAmount>0; i++){
            loanAmount = loanAmount - (payment - (loanAmount*monthlyInterest));
            monthCount++;
        }
            cout << "Your loan will be paid off in " << monthCount << " months!"<<endl;
    return 0;
    }

}
