#include <iostream>
#include "features/profile.h"
#include "features/settings.h"
#include "features/feature_toggle.h"

using namespace std;

int main() {
    cout << "Welcome to Git Workflow Simulator (C++)" << endl;
    cout << "Login feature active" << endl;
    cout << "Dashboard feature active" << endl;
    profileFeature();
    settingsFeature();
    showFeatureStatus(true, true, true, false);
    return 0;
}