//
//  main.cpp
//  eposcar
//
//  Created by Zareek Galvan on 9/11/15.
//  Copyright (c) 2015 Trisquel Labs. All rights reserved.
//
#include <iostream>
using namespace std;

//=======================================================================================================================
bool subsecuencia(string s1, string s2, int i1, int i2)
{
    if(s2.length() == i2)
    {
        return true;
    }
    else if(i1 >= s1.length())
    {
        return false;
    }
    return (s1[i1] == s2[i2] ? subsecuencia(s1, s2, i1+1, i2+1) : subsecuencia(s1, s2, i1+1, i2));
}

//=======================================================================================================================
bool subsecuenciaInversa(string s1, string s2, int i1, int i2)
{
    if(-1 == i2)
    {
        return true;
    }
    else if(i1 >= s1.length())
    {
        return false;
    }
    return (s1[i1] == s2[i2] ? subsecuenciaInversa(s1, s2, i1+1, i2-1) : subsecuenciaInversa(s1, s2, i1+1, i2));
}

//=======================================================================================================================
int main() {
    
    string s1, s2;
    cin >> s1 >> s2;
    
    if (subsecuencia(s1, s2, 0, 0) ||
        subsecuenciaInversa(s1, s2, 0, (int)s2.length()-1) ||
        subsecuencia(s2, s1, 0, 0) ||
        subsecuenciaInversa(s2, s1, 0, (int)s1.length()-1))
    {
        cout<<"SI"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}