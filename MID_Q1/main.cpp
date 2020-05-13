#include <iostream>
#include <string>

#include <Patient.h>
#include <Doctor.h>
#include <Hospital.h>

#define MAX_DOCTOR 100
#define MAX_PATIENT 20

using namespace std;

int main()
{
    Patient p("Mr.x");
    Doctor d("Dr. Arobi");
    Hospital h("Koyra UHC");
    //h.showStatus();
    h.addDoctor(d);
    h.addDoctor(Doctor("Dr. Tuli"));
    h.admit(p,0);
    h.admit(Patient("Mr. Y"),0);
    h.admit(Patient("Mr. Z"),0);
    h.admit(Patient("Mr. P"),1);
    h.admit(Patient("Mrs. P"),1);
    //h.showStatus();
    h.discharge(3);
    h.showStatus();
}

