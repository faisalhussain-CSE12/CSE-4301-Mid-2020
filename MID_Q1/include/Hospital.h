#ifndef HOSPITAL_H
#define HOSPITAL_H

#include<string>
#include"Patient.h"
#include"doctor.h"

class Hospital
{
    public:
        Hospital(std::string name);
        bool admit(Patient p,int DoctorIndex);
        void showStatus();
        bool addDoctor(Doctor d);
        bool discharge(int patienID);
    protected:
    private:
        Doctor doctors[100];
        //Patient patients[2000];
        int nextSerial;
        int totalDoctor;
        int totalPatient;
        std::string name;
};
#endif // HOSPITAL_H
