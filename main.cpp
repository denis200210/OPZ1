#include <iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include"Function.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int size_term=0;
    int k=0;
    string s;
    cout<<"Введите уравнение: ";
    cin>>s;
    n=s.size();
    size_term=SizeTree(s,n);
    string*Term=new string[size_term];
    MakeTerm(Term,n,s,&k);
    node* Tree=MakeTree(Term,0,size_term-1);
    LPK(Tree);
    Print_nd();
    return 0;
}