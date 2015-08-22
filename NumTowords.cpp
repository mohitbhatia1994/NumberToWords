#include <iostream>
using namespace std;

string tensNames[] = { " "," ten"," twenty"," thirty"," forty"," fifty"," sixty"," seventy"," eighty"," ninety"};

string numOnes[] = {""," one"," two"," three"," four"," five"," six"," seven"," eight"," nine"," ten"," eleven"," twelve"," thirteen"," fourteen"," fifteen"," sixteen"," seventeen"," eighteen"," nineteen"
};


string NumberToWords(int num)
{
    if (num <= 19) cout << numOnes[num];

    else if (num > 19 && num < 100) {
        int a = (num - num % 10) / 10 ;
        cout << tensNames[a] << " ";
        int b = num % 10;
        cout << numOnes[b];
    }
    
    else if (num >= 100) {
        int hun = (num - (num % 100)) / 100;
        cout << numOnes[hun] << " hundred";
        num = num % 100;
        if (num > 0){
        int a = (num - (num % 10)) / 10 ;
        cout << " and" << tensNames[a] << " ";
        int b = num % 10;
        cout << numOnes[b];
        }
    }
    return " ";
}

int main() {
    int num;
    cout << " Input a Number : ";
    cin >> num;
    cout << " The number in Words is : ";
    NumberToWords(num);
    return 0;
}
