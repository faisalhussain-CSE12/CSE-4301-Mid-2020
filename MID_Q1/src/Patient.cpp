#include "Patient.h"

Patient::Patient()
{
    Setname("");
    SetpatientId(-1);
}

Patient::Patient(std::string name)
{
    Setname(name);
    SetpatientId(-1);
}


