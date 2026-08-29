#include <iostream>
using namespace std;

int main() {
    int age;
    double maxPulse;
    
    cout << "Indtast din alder: ";
    cin >> age;
    
    maxPulse = 220 - age;
    
    cout << "Maksimal puls: " << maxPulse << endl;
    cout << "Zone 1: " << maxPulse * 0.5 << " - " << maxPulse * 0.6 << endl;
    cout << "Zone 2: " << maxPulse * 0.6 << " - " << maxPulse * 0.7 << endl;
    cout << "Zone 3: " << maxPulse * 0.7 << " - " << maxPulse * 0.8 << endl;
    cout << "Zone 4: " << maxPulse * 0.8 << " - " << maxPulse * 0.9 << endl;
    cout << "Zone 5: " << maxPulse * 0.9 << " - " << maxPulse * 1.0 << endl;
    
    return 0;
}