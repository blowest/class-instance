//
// Created by N on 2021/03/03.
//

#include "Skku.h";

Skku::Skku(float grade, float english) {
    this->grade = grade;
    this->english = english;

}
bool Skku::isPassSamsung() {
    if (grade > 3.5f && english > 50.0f) {
        return true;
    }
    else return false;

}
