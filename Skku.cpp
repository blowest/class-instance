//
// Created by N on 2021/03/03.
//


class Skku {
    double grade;
    double english;

// Constructor
public:
    Skku(double grade, double english) {
        this->grade = grade;
        this->english = english;
    }
    
// Methods
public:
    bool isPassSamsung() {
        if (grade > 3.5 && english > 50) {
            return true;
        }
        else return false;
    }

};