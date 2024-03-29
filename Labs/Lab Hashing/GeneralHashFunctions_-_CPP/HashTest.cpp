/*
 **************************************************************************
 *                                                                        *
 *           General Purpose Hash Function Algorithms Test                *
 *                                                                        *
 * Author: Arash Partow - 2002                                            *
 * URL: http://www.partow.net                                             *
 * URL: http://www.partow.net/programming/hashfunctions/index.html        *
 *                                                                        *
 * Copyright notice:                                                      *
 * Free use of the General Purpose Hash Function Algorithms Library is    *
 * permitted under the guidelines and in accordance with the MIT License. *
 * http://www.opensource.org/licenses/MIT                                 *
 *                                                                        *
 **************************************************************************
*/


#include <iostream>
#include <string>

#include "GeneralHashFunctions.h"
using namespace std;

int main(int argc, char* argv[])
{
   const string key = "Then out spake brave Horatius, The Captain of the Gate: To every man upon this earth Death cometh soon or late. And how can man die better Than facing fearful odds, For the ashes of his fathers, And the temples of his gods.";

   cout << "General Purpose Hash Function Algorithms Test" << endl;
   cout << "By Arash Partow - 2002        " << endl;
   cout << "Key: "                          << key           << endl;
   cout << " 1. RS-Hash Function Value:   " << RSHash  (key) << endl;
   cout << " 2. JS-Hash Function Value:   " << JSHash  (key) << endl;
   cout << " 3. PJW-Hash Function Value:  " << PJWHash (key) << endl;
   cout << " 4. ELF-Hash Function Value:  " << ELFHash (key) << endl;
   cout << " 5. BKDR-Hash Function Value: " << BKDRHash(key) << endl;
   cout << " 6. SDBM-Hash Function Value: " << SDBMHash(key) << endl;
   cout << " 7. DJB-Hash Function Value:  " << DJBHash (key) << endl;
   cout << " 8. DEK-Hash Function Value:  " << DEKHash (key) << endl;
   cout << " 9. FNV-Hash Function Value:  " << FNVHash (key) << endl;
   cout << "10. BP-Hash Function Value:   " << BPHash  (key) << endl;
   cout << "11. AP-Hash Function Value:   " << APHash  (key) << endl;

   return 1;
}
