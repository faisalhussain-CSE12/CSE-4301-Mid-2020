#ifndef DOCTOR_H
#define DOCTOR_H
#include"Patient.h"
#include<string>
class Doctor
{
    public:
        Doctor();
        Doctor(std::string name);
        std::string Getname() { return name; }
        void Setname(std::string val) { name = val; }
        int GetnoOfPatientTakenCare() { return noOfPatientTakenCare; }
        void SetnoOfPatientTakenCare(int val) { noOfPatientTakenCare = val; }
        bool admitPatient(Patient p);
        std::string getPatientName(int index);
        bool removePatient(int index);
        Patient getPatient(int index);
    protected:
    private:
        std::string name;
        int noOfPatientTakenCare;
        Patient patients[20];
};
#endif // DOCTOR_H
