#include <iostream>
#include <fstream>
using namespace std;
int writeFile(string filename){
    ofstream ofs;
    int j,id;
    string en,dn;
    double sal;
    cin>>j;
    ofs.open(filename);
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    ofs<<j<<"\n";
for (size_t i = 0; i < j; i++)
{
    cin>>id>>en>>dn>>sal;
    ofs<<id<<"\n"<<en<<"\n"<<dn<<"\n"<<sal<<"\n";
}
    ofs.close();
    return j;
}


int readFile(string filename)
{
    ifstream ifs;
    int j,id;
    string en,dn;
    double sal,total, avg;
    ifs.open(filename);
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    ifs>>j;
    for (size_t i = 0; i < j; i++)
    {
        ifs>>id>>en>>dn>>sal;
        total=total+sal;
        cout<<id<<" "<<en<<" "<<dn<<" "<<sal<<endl;
        

    }
    return j;
}