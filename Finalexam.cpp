#include <iostream>
using namespace std;

int adddata(int a,int b[10]) {
    int i;
    cout << "Give the data for the array" << endl;
    for (i = 0; i < 10; i++)
        cin >> b[i];
    return b[10];
}

int erasedata(int b[10]) {
    int i;
    for (i = 0; i < 10; i++)
        b[i] = 0;
    return b[10];
}


int showdata(int b[10]) {
    int i;
    for (i = 0; i < 10; i++)
        cout <<"p["<<i<<"] ="<< b[i] << endl;
    return;
}


int sumofdata(int b[10],int sum1) {
    int i;
    for (i = 0; i < 10; i++)
        sum1 += b[i];
    return sum1;
}


int main(){
    

    int p[10],x,i,c,sum=0;


    while (x != 5) {

    cout << "1) Enter data in array" << endl;
    cout << "2) Make all elements of array zero" << endl;
    cout << "3) Show array" << endl;
    cout << "4) Sum of all elements of the array"<<endl;
    cout << "5) Exit" << endl;
    cout << "Please enter choice :";
    cin >> x;

    
        for (i = 0; i < 10; i++)
            p[i] = 0;



        if (x == 1) {
            for (i = 0; i < 10; i++)
                p[i] = 0;
            cout << "Give the data for the array" << endl;
            adddata(c, p[10]);
        }

        if (x == 2) {
            erasedata(p[10]);
        }

        if (x == 3) {
            cout << "the data is " << endl;
            showdata(p[10]);
        }

        if (x == 4) {
            sumofdata(p[10], sum);
            cout << "the sum of data is. sum= " << sum << endl;
        }

    }
return 0;
}

//it was showing me an error about when i was mentioning the functions with the array//
//i assume i have done it correctly but i couldnt find a solution to the problem as it//
//was telling me there was a problem either with tthe library(int) either with the number of the array//