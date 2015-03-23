//
//  main.cpp
//  permute_string
//
//  Created by hambarkh on 22/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void permute(string aInString, int aInPos);

unsigned long str_len ;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    /*
    if (argc != 2) {
        cout << "String needed. Exiting." << endl;
        EXIT_SUCCESS;
    }
    */
    cout << "enter string :" ;
    string aInString;
    cin >> aInString;
    //const string const_aInSring;
    //int i;
    str_len =  aInString.length();
    cout << "length  = "<< str_len << endl;
    
    
   /* for (i=0; i<aInString.length(); i++) {*/
        permute(aInString,0);
    /*}
    */
    //while
    
    return 0;
}

void permute(string aInString,int aInPos)
{
    if ((aInPos+2) == str_len) {
        char c = aInString[aInPos];
        aInString[aInPos] = aInString[aInPos+1];
        aInString[aInPos+1] = c ;
        cout << "String = " << aInString << endl;
    }
    else{
        cout << "Pos = " << aInPos << endl;
        int i;
        for (i=0; i<aInString.length(); i++) {
            permute(aInString, (aInPos+1)%str_len);
        }
    }
}