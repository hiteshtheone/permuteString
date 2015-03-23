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

void permute(int aInPos);


unsigned long str_len ;
string aInString,aInString_bak;
int combo = 0 ;

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
    //string aInString;
    cin >> aInString;
    aInString_bak = aInString;
    str_len =  aInString.length();
    
    cout << "length  = "<< str_len << endl;

    permute(0);
    cout << "No. of combo = "<< combo << endl;
    return 0;
}

void permute(int aInPos)
{
    //cout << "aInPos =" << aInPos << endl;
    string lString =  aInString;
    if (aInPos + 2 < str_len) {
        //cout << "In Permute \n" ;
        int i ;
        for (i=0; i< str_len-aInPos; i++) {
            //cout << "for loop aInPos = "<< aInPos << endl;
            permute(aInPos+1);
            aInString = lString;
            swap(aInString[aInPos],aInString[(aInPos+i+1)%str_len]); //charters at aInPos swapped
            
            if (aInPos+i+1 != str_len){
                cout << "String1 = " << aInString << endl;
                combo++;
            }
        }
    }
    else if (aInPos + 2 == str_len){
        swap(aInString[aInPos],aInString[aInPos+1]);
        cout << "String2 = " << aInString << endl; //Only last two charaters swapped
        combo++;
    }
}