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

    void calculate_tip() {
        cout << "\n\nWelcome to tip Calculator\n";
        cout << "------------------------------\n";
        cout << "Enter bill amount: " << "$";

        T calc_bill, calc_tip, calc_total, calc_tiptotal;

        cin >> calc_bill;
        set_bill(calc_bill);

        cout << "Enter Tip: " << "%";

        cin >> calc_tip;
        set_tip(calc_tip);

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

            calc_tiptotal = bill * (tip / 100.);
            set_tiptotal(calc_tiptotal);

            calc_total = (tiptotal + bill);
            set_total(calc_total);
            cout << "The total Bill with Tip is: " << "$" << total << "\n\n";
            cout << "You are helping me through College!! Thankyou!!\n";
        }
    }

};

int main() {
    restaurantTipCalculator<int> restaurantTipCalculator1;

    restaurantTipCalculator1.calculate_tip();

    return 0;
}