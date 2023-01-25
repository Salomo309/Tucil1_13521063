#include <iostream>
#include <fstream>
#include "solver.cpp"
using namespace std;

int main() {
    char a[2], b[2], c[2], d[2];
    char e,f,g,h;
    string str;
    char ans;
    int num1, num2, num3, num4;
    int input[4];
    int i;
    time_t start, end;
    time(&start);

    cout << "-------------------- Game 24 Solver --------------------";
    cout << endl;
    cout << "Silahkan Masukkan angka. ";
    cout << "Apakah ingin menggunakan Random Generator?(y/n) ";
    scanf("%c", &ans);
    cout << endl;

    ofstream fileSave;
    

    if (ans == 'y') {
        randomGen(e,f,g,h);
        num1 = inputConvertCharToInt(e);
        num2 = inputConvertCharToInt(f);
        num3 = inputConvertCharToInt(g);
        num4 = inputConvertCharToInt(h);
        
        int input[4] = {num1, num2, num3, num4};

    } else {
        cout << "Masukkan 4 angka X X X X : ";
        cout << endl;
        scanf("%c %c %c %c", &a, &b, &c, &d);
        num1 = inputConvertCharToInt(*a);
        num2 = inputConvertCharToInt(*b);
        num3 = inputConvertCharToInt(*c);
        num4 = inputConvertCharToInt(*d);
        

        int input[4] = {num1, num2, num3, num4};
    }

    permutation(input);
    time(&end);
    cout << endl;
    cout << "Execution Time = " << end - start;
    cout << endl;
    cout << "Apakah ingin menyimpan hasil?(y/n) ";
    char answer;
    scanf("%c", &answer);

    if (answer == 'y') {
        string file;
        string nameFile = ".txt";

        cout << "Please, enter the name for your output file: ";
        getline(cin, file);
        file += ".txt";
        string path = "C:/Users/Asus/OneDrive - Institut Teknologi Bandung/Documents/GitHub/Tucil1_13521063/test/";
        path += file;

        fileSave.open(path);
        cout << input;
        fileSave.close();
    } else {
        cout << "TERIMA KASIH";
        exit;
    }


}