/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"
using namespace ariel;
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
//    for (int i = 11111111; i <= 44444444; ++i) {
//        try {
//            cout << ariel::snowman(i) << endl << endl << endl;
//        } catch (...) {
//        }
//    }

    cout << "_______________________________" << endl;
    cout << "   *           *           *   " << endl;
    cout << "         *            *        " << endl;

    cout << ariel::snowman(13333331) << endl;  /* Should print:

 _===_
 (O_O)
/(> <)\
 ( : )
          */
    cout << ariel::snowman(41111114) << endl;  /* Should print:
  ___
 (_*_)
 (.,.)
<( : )>
 (   )
          */
    cout << ariel::snowman(32222223) << endl;  /* Should print:
   _
  /_\
\(o.o)/
 (] [)
 (___)
          */
    cout << ariel::snowman(24444442) << endl;  /* Should print:
  ___
 .....
 (- -)
 (   )
 (" ")
          */
    cout << ariel::snowman(41131112) << endl;  /* Should print:
  ___
 (_*_)
 (.,O)
<( : )>
 (" ")
        */
    cout << ariel::snowman(11114411) << endl;   /* Should print:
_===_
(.,.)
( : )
( : )
    	*/
	cout << ariel::snowman(32443333) << endl;   /* Should print:
   _
  /_\
 (-.-)
/(> <)\
 (___)
    	*/
    cout << ariel::snowman(22223331) << endl;  /* Should print:
  ___
 .....
 (o.o)
/(> <)\
 ( : )
               */;



    cout << ariel::snowman(12312312) << endl;  /* Should print:
     _===_
    \(O..)
     ( : )\
     (" ")

 */

    cout << ariel::snowman(11111111) << endl;  /* Should print:

         _===_
         (.,.)
        <( : )>
         ( : )

 */


	try {
		cout << ariel::snowman(12341235) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;
	}
    try {
        cout << ariel::snowman(55555555) << endl;   // Exception - not a valid code
    } catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    try {
        cout << ariel::snowman(0) << endl;   // Exception - not a valid code
    } catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    try {
        cout << ariel::snowman(123-432123) << endl;   // Exception - not a valid code
    } catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    try {
        cout << ariel::snowman(-2-2-3-3-4-4-1-2) << endl;   // Exception - not a valid code
    } catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}
