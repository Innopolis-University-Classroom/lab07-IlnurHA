#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
class restaurantTipCalculator {
public:
    T bill{}, tiptotal{}, total{}, tip{};

    void set_bill(T &temp_bill) {
        bill = temp_bill;
    }

    void set_tiptotal(T &temp_tiptotal) {
        tiptotal = temp_tiptotal;
    }

    void set_total(T &temp_total) {
        total = temp_total;
    }

    void set_tip(T &temp_tip) {
        tip = temp_tip;
    }

}

int main() {
    double bill;
    double tiptotal;
    double total;
    double tip;

    cout << "\n\nWelcome to tip Calculator\n";
    cout << "------------------------------\n";
    cout << "Enter bill amount: " << "$";
    cin >> bill;

    cout << "Enter Tip: " << "%";
    cin >> tip;

    if (tip < 20) {
        cout << "\n Oh you can give a better tip than that!\n";
        char ans;
        do {
            cout << "Do you want to continue (Y/N)?\n";
            cout << "You must type a 'Y' or an 'N'.\n";
            cin >> ans;
        } while ((ans != 'Y') && (ans != 'N') && (ans != 'y') && (ans != 'n'));
        return tip;
    } else {

        tiptotal = bill * (tip / 100.);
        total = (tiptotal + bill);
        cout << "The total Bill with Tip is: " << "$" << total << "\n\n";
        cout << "You are helping me through College!! Thankyou!!\n";
    }

    return 0;
}