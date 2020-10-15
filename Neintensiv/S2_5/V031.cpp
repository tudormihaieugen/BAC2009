#include <iostream>
#include <fstream>
#include <string.h>
#pragma warning(disable : 4996)  //Eroare strcpy visual studio

using namespace std;

struct nod 
{
    char info[30];
    nod* leg;
};
nod* prim;
void adaugf(nod*& prim, char x[30]) 
{
    nod* nou = new nod;
    strcpy(nou->info, x);
    nou->leg = prim;
    prim = nou;
}
void afis(nod* prim) 
{
    nod* p = prim;
    while (p) 
    {
        cout << p->info << " ";
        p = p->leg;
    }
    cout << endl;
}

int main() 
{
    int n;
    char s[30];
    cout << "n = "; cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cout << "Sir:"; cin >> s;
        if (s[0] == s[strlen(s) - 1])
            adaugf(prim, s);
    }
    afis(prim);
}
