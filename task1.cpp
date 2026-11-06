#include <iostream>
using namespace std;

int main() {
    int patientSeverity;
    int d1, r1, i1, d2, r2, i2, d3, r3, i3;

    cout << "Enter patient type (0 = Normal, 1 = Critical): ";
    cin >> patientSeverity;

    cout << "Hospital 1: distance regularBeds icuBeds\n";
    cin >> d1 >> r1 >> i1;

    cout << "Hospital 2: distance regularBeds icuBeds\n";
    cin >> d2 >> r2 >> i2;

    cout << "Hospital 3: distance regularBeds icuBeds\n";
    cin >> d3 >> r3 >> i3;

    int bestHospital = -1;
    int bestDistance = 9999;
    int bestBeds = -1;

    for (int hospital = 1; hospital <= 3; hospital++) {
        int distance, regularBeds, icuBeds;

        if (hospital == 1) {
            distance = d1; regularBeds = r1; icuBeds = i1;
        } else if (hospital == 2) {
            distance = d2; regularBeds = r2; icuBeds = i2;
        } else {
            distance = d3; regularBeds = r3; icuBeds = i3;
        }

        int requiredBeds = (patientSeverity == 0) ? regularBeds : icuBeds;

        if (distance <= 25 && requiredBeds > 0) {
            if (bestHospital == -1 || distance < bestDistance ||
                (distance == bestDistance && requiredBeds > bestBeds) ||
                (distance == bestDistance && requiredBeds == bestBeds && hospital < bestHospital)) {
                bestHospital = hospital;
                bestDistance = distance;
                bestBeds = requiredBeds;
            }
        }
    }

    cout << "\nFinal Result:\n";
    if (bestHospital == -1) {
        cout << "NO HOSPITAL AVAILABLE" << endl;
    } else {
        cout << "Selected Hospital: " << bestHospital << endl;
        cout << "Distance: " << bestDistance << " km" << endl;

        if (patientSeverity == 0)
            cout << "Available Regular Beds: " << bestBeds << endl;
        else
            cout << "Available ICU Beds: " << bestBeds << endl;
    }

    return 0;
}