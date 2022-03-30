#include <iostream> 
using namespace std;

unsigned int maxSum(int value, int maxInt);

int main (void)
{
    unsigned int value;
    unsigned int maxInt;

    cout << "saisir value" << endl;
    cin >> value;
    cout << "saisir maxInt" << endl;
    cin >> maxInt;
    try{
        cout << maxSum(value, maxInt);
    }
    catch(string& s){
        {cerr << "erreur : " << s << endl ;}
    }
}

/* unsigned int maxSum(int value, int maxInt)
{
    unsigned int sum;

    if (maxInt < 0){
        throw string("maxInt ne peut pas etre inferieur a zero");
    }
    
    if (value < 0){
        value = -value;
    }

    for (value; value >= 0; value--){
        sum += value;
    }

    if (sum > maxInt){
        throw string("La somme depasse maxInt");
    }
    
    return sum;
}
 */

unsigned int maxSum(int value, int maxint) {
    unsigned int result=0;
    for (int i=0; i <= abs(value); i++)
        result=result+i;
     if (result > maxint)
         result=-1;
     if (result== -1)
         throw string("Exception");
     return result;
}