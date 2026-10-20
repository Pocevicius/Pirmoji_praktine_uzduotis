#include <iostream>
using namespace std;

const double GBP_Bendras   = 0.8729;
const double GBP_Pirkti    = 0.8600;
const double GBP_Parduoti  = 0.9220;

const double USD_Bendras   = 1.1793;
const double USD_Pirkti    = 1.1460;
const double USD_Parduoti  = 1.2340;

const double INR_Bendras   = 104.6918;
const double INR_Pirkti    = 101.3862;
const double INR_Parduoti  = 107.8546;

int main() {
    int pasirinkimas;

    cout << "$$$Valiutu Keitykla$$$" << endl;
    cout << "1. Palyginti valiutos kursa su euru" << endl;
    cout << "2. Pirkti valiuta (EUR -> pasirinkta valiuta)" << endl;
    cout << "3. Parduoti valiuta (pasirinkta valiuta -> EUR)" << endl;
    cout << "4. Iseiti" << endl;
    cout << "Pasirinkite veiksma: ";
    cin >> pasirinkimas; // pirma nuskaitome įvestį
    if (pasirinkimas == 1) {
        cout << "Pasirinkote valiutos kurso palyginima." << endl;
    } else if (pasirinkimas == 2) {
        cout << "Pasirinkote valiutos pirkima." << endl;
    } else if (pasirinkimas == 3) {
        cout << "Pasirinkote valiutos pardavima." << endl;
    } else if (pasirinkimas == 4) {
        cout << "Programa baigiama." << endl;
    } else {
        cout << "Neteisingas pasirinkimas." << endl;
    }

    if (pasirinkimas == 1 || pasirinkimas == 2 || pasirinkimas == 3) {
        int valiutosPasirinkimas;
        double bendrasKursas;
         cout << endl << "Pasirinkite valiuta:" << endl;
         cout << "1. GBP" << endl;
         cout << "2. USD" << endl;
         cout << "3. INR" << endl;
         cout << "Jusu pasirinkimas: ";
        cin >> valiutosPasirinkimas;

        if (valiutosPasirinkimas == 1) {
            bendrasKursas = GBP_Bendras;
            cout << "Pasirinkote GBP." << endl;
        } else if (valiutosPasirinkimas == 2) {
            bendrasKursas = USD_Bendras;
            cout << "Pasirinkote USD." << endl;
        } else if (valiutosPasirinkimas == 3) {
            bendrasKursas = INR_Bendras;
            cout << "Pasirinkote INR." << endl;
        } else {
            cout << "Neteisingas valiutos pasirinkimas." << endl;
        }
        if (pasirinkimas == 1 && valiutosPasirinkimas >= 1 && valiutosPasirinkimas <= 3) {
            cout << "Kursas: 1 EUR = " << bendrasKursas << endl;
        }
    }
    return 0;
}