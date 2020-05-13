#include "Hospital.h"
#include<iostream>

Hospital::Hospital(std::string name):nextSerial(1),totalDoctor(0),totalPatient(0)
{
    this->name=name;
}
bool Hospital::admit(Patient p,int DoctorIndex)
{
    if(DoctorIndex>totalDoctor) return false;
    else
    {
        p.SetpatientId(nextSerial++);
        if(!doctors[DoctorIndex].admitPatient(p)) return false;
        else
        {
            totalPatient++;
            return true;
        }
    }
}

void Hospital::showStatus()
{
    std::cout<<name<<std::endl;
    std::cout<<"Total Admitted Patient: "<<totalPatient<<std::endl;
    std::cout<<"Total Doctor: "<<totalDoctor<<std::endl;
    std::cout<<"-----"<<std::endl;
    for(int i=0;i<totalDoctor;i++)
    {
        std::cout<<doctors[i].Getname()<<" has following patients\n";
        for(int j=0;j<doctors[i].GetnoOfPatientTakenCare();j++)
        {
            std::cout<<doctors[i].getPatientName(j)<<std::endl;
        }
        if(i+1<totalDoctor)std::cout<<"-----"<<std::endl;
    }

}
bool Hospital::addDoctor(Doctor d)
{
    if(totalDoctor+1>100) return false;
    else{
        doctors[totalDoctor++]=d;
        return true;
    }
}
bool Hospital::discharge(int patientID)
{
    for(int i=0;i<totalDoctor;i++)
    {
        for(int j=0;j<doctors[i].GetnoOfPatientTakenCare();j++)
        {
            if(doctors[i].getPatient(j).GetpatientId()==patientID)
            {
                if(doctors[i].removePatient(j))
                {
                    totalPatient--;
                    return true;
                }
            }
        }
    }
    return false;
}
