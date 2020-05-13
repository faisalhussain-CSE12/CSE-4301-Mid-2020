#include "Doctor.h"
Doctor::Doctor():noOfPatientTakenCare(0)
{
    //ctor
}
Doctor::Doctor(std::string name):noOfPatientTakenCare(0)
{
    Setname(name);
}
bool Doctor::admitPatient(Patient p)
{
    if(noOfPatientTakenCare+1>20)false;
    else
    {
        patients[noOfPatientTakenCare]=p;

        noOfPatientTakenCare++;
        return true;
    }
}
std::string Doctor::getPatientName(int index)
{
    return patients[index].Getname();
}
Patient Doctor::getPatient(int index)
{
    return patients[index];
}
bool Doctor::removePatient(int index)
{
    if(index+1>noOfPatientTakenCare||index<0) return false;
    else if(index+1==noOfPatientTakenCare)
    {
        //patients[index]=0;
        noOfPatientTakenCare--;
        return true;
    }
    else
    {
        for(int i=index;i<noOfPatientTakenCare-1;i++)
        {
            patients[i]=patients[i+1];
        }
        //patients[i]=NULL;
        noOfPatientTakenCare--;
        return true;
    }
}
