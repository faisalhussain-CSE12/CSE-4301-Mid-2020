#ifndef PATIENT_H
#define PATIENT_H
#include<string>

class Patient
{
    public:
        Patient();
        Patient(std::string name);
        int GetpatientId() { return patientId; }
        void SetpatientId(int val) { patientId = val; }
        std::string Getname() { return name; }
        void Setname(std::string val) { name = val; }
    protected:
    private:
        int patientId;
        std::string name;
};
#endif // PATIENT_H
