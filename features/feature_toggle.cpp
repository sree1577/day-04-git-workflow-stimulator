#include <iostream>
using namespace std;

void showFeatureStatus(bool login, bool dashboard, bool profile, bool settings) {
    cout << "\nFeature Status:" << endl;
    cout << "Login: " << (login ? "ON" : "OFF") << endl;
    cout << "Dashboard: " << (dashboard ? "ON" : "OFF") << endl;
    cout << "Profile: " << (profile ? "ON" : "OFF") << endl;
    cout << "Settings: " << (settings ? "ON" : "OFF") << endl;
}