//
//  main.cpp
//  examMatrix
//
//  Created by Julen Garro Olkotz on 5/11/21.
//

#include <iostream>

using namespace std;
//Funtzio honetan zenbakiak inprimatzen dira
void printNumber(int limit)
{
    string numPrint;
    string result;
    
    for(int i=1; i<=limit;i++)
    {
        result = "";
        for (int j=1;j<=i;j++)
        {
            numPrint = to_string(j);
            result = result + numPrint + " ";
        }
        cout << result << endl;
    }
}

//Erabiltzaileari zenbakia eskatu eta funtzioari deitzen dio
int main(int argc, const char * argv[]) {

    int limit;
    
    cout << "Escribe el límite que mostrará la matriz";
    cin >> limit;
    
    printNumber(limit);
    return 0;
}
