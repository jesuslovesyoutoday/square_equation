#ifndef SOLVER_H
#define SOLVER_H

//---------------------------------------------------------
//! Solves Square Equation
//! 
//! @param[in]  <a>  first  coefficient
//! @param[in]  <b>  second coefficient
//! @param[in]  <c>  third  coefficient
//! 
//! @param[out] <x1> pointer to the first root
//! @param[out] <x2> pointer to the second root
//!
//! @return amount of roots 
//---------------------------------------------------------

enum Amount_of_roots { ZERO, ONE, TWO, INF };

enum Amount_of_roots SE_Solver(double a, double b, double c, double* x1, double* x2);

#endif // SOLVER_H
