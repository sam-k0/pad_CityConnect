#ifndef CITYWITHINFO_H
#define CITYWITHINFO_H
#include "city.h"

class CityWithInfo : public City
{
private:
    int* population;
    string pop;
public:
    CityWithInfo(string n, int pop);
    ~CityWithInfo();

    int getPopulation() override;

    void deletePopulation();

    bool populationSchnaps() override;

};

#endif // CITYWITHINFO_H
