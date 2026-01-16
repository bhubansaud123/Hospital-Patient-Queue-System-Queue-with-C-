
#include <iostream>
#include <queue>
using namespace std;

class Patient {
public:
    string name;
    Patient(string n) : name(n) {}
};

class HospitalQueue {
    queue<Patient> q;

public:
    void addPatient(string name) {
        q.push(Patient(name));
    }

    void servePatient() {
        if (!q.empty()) {
            cout << "Serving: " << q.front().name << endl;
            q.pop();
        } else {
            cout << "No patients waiting\n";
        }
    }
};

int main() {
    HospitalQueue h;
    h.addPatient("Amit");
    h.addPatient("Ravi");
    h.addPatient("Neha");

    h.servePatient();
    h.servePatient();
    return 0;
}
