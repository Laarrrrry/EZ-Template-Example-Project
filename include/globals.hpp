#pragma once
#include "main.h"

// Motors

inline pros::Motor intake11W(1);           // uses port 1
inline pros::MotorGroup intake5W({2, 3});  // uses port 2, 3