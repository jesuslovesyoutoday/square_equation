#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include "solver.h"

//----------------------------------------------------
//!
//! Sctructure for testing solver, contains given data
//! and expected answers for comparison
//!
//----------------------------------------------------

struct Data
{
	double a; 							//< first coefficient
	double b; 							//< second coefficient
	double c; 							//< third coefficient
	double* x1; 						//< pointer to the first root
	double* x2; 						//< pointer to the second root
	enum Amount_of_roots* roots_amount; //< pointer to the amount of roots
	double answ1; 						//< expected first root
	double answ2; 						//< expected second root
	enum Amount_of_roots outcome; 		//< expected amount of roots
	int number; 						//< number of test
};

//------------------------------------------------------
//! Tester for Square Equation Solver
//!
//! @return array that contained amount of roots and 
//!			roots themselves
//!
//! @note: checks a few main cases of possible equations
//!
//------------------------------------------------------

void Unit_Test(struct Data test_data);

#endif // UNIT_TEST_H
