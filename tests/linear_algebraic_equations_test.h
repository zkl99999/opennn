/****************************************************************************************************************/
/*                                                                                                              */
/*   OpenNN: Open Neural Networks Library
 */
/*   www.intelnics.com/opennn
 */
/*                                                                                                              */
/*   L I N E A R   A L G E B R A I C   E Q U A T I O N S   T E S T   C L A S S
 * H E A D E R                    */
/*                                                                                                              */
/*   Roberto Lopez
 */
/*   Intelnics - The artificial intelligence company
 */
/*   robertolopez@intelnics.com
 */
/*                                                                                                              */
/****************************************************************************************************************/

#ifndef __LINEARALGEBRAICEQUATIONSTEST_H__
#define __LINEARALGEBRAICEQUATIONSTEST_H__

// Unit testing includes

#include "unit_testing.h"

using namespace OpenNN;

class LinearAlgebraicEquationsTest : public UnitTesting {

#define STRING(x) #x
#define TOSTRING(x) STRING(x)
#define LOG __FILE__ ":" TOSTRING(__LINE__) "\n"

 public:

  // GENERAL CONSTRUCTOR

  explicit LinearAlgebraicEquationsTest(void);

  // DESTRUCTOR

  virtual ~LinearAlgebraicEquationsTest(void);

  // METHODS

  // Constructor and destructor methods

  void test_constructor(void);
  void test_destructor(void);

  // Gauss-Jordan elimination methods

  void test_perform_Gauss_Jordan_elimination(void);

  // Unit testing methods

  void run_test_case(void);
};

#endif

// OpenNN: Open Neural Networks Library.
// Copyright (C) 2005-2014 Roberto Lopez
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
