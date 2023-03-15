#include <iostream>
#include <string>

using namespace std;

int procuraCharNaString(string str, char ch)
{
    int tamanhostr = str.size();
    for (int i = 0; i < tamanhostr; i++)
    {
        if (ch == str[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string str;
    cout << "digite uma string" << endl;
    cin >> str;
    char ch;
    cout << "digite um caractere" << endl;
    cin >> ch;
    int resultado = procuraCharNaString(str, ch);
    cout << "resultado " << resultado << endl;
    return 0;
}