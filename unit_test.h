#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include "solver.h"

//------------------------------------------------------
//! Tester for Square Equation Solver
//!
//! @return array that contained amount of roots and 
//!			roots themselves
//!
//! @note: checks a few main cases of possible equations
//!
//------------------------------------------------------

void Unit_Test(double a, double b, double c, double* x1, double* x2, enum Amount_of_roots* roots_amount, double answ1, double answ2, enum Amount_of_roots outcome, int number);

#endif // UNIT_TEST_H
