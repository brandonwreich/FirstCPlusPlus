//
//  main.cpp
//  FirstCPlusPlus
//
//  Created by Reich, Brandon on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    // insert code here...
    cout << "Hello, World!" << endl;
    cout << "Insert name below" << endl;
    
    string word;
    getline(cin, word);
 
//    cin >> word;
    
    cout << "Hello " << word << " :D" << endl;
    
    return 100;
}
