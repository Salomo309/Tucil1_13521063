#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
using namespace std;

int inputConvertCharToInt(char input) {
    if (input == 'A') {
        int num = 1;
        return num;
    }

    if (input == '2') {
        int num = 2;
        return num;
    }

    if (input == '3') {
        int num = 3;
        return num;
    }

    if (input == '4') {
        int num = 4;
        return num;
    }

    if (input == '5') {
        int num = 5;
        return num;
    }

    if (input == '6') {
        int num = 6;
        return num;
    }

    if (input == '7') {
        int num = 7;
        return num;
    }

    if (input == '8') {
        int num = 8;
        return num;
    }

    if (input == '9') {
        int num = 9;
        return num;
    }

    if (input == '10') {
        int num = 10;
        return num;
    }

    if (input == 'J') {
        int num = 11;
        return num;
    }

    if (input == 'Q') {
        int num = 12;
        return num;
    }

    if (input == 'K') {
        int num = 13;
        return num;
    }
}

void printArray(int array[4]) {
    int i;

    for (i = 0; i < 4; i++) {
        cout << array[i];
        cout << " ";
    }
}

void randomGen(char a, char b, char c, char d) {
    srand(time(NULL));

    char array[13] = {'A','2','3','4','5','6','7','8','9','10','J','Q','K'};
    int inda = rand() % 13;
    int indb = rand() % 13;
    int indc = rand() % 13;
    int indd = rand() % 13;

    a = array[inda];
    b = array[indb];
    c = array[indc];
    d = array[indd];

    cout << a; cout << " ";
    cout << b; cout << " ";
    cout << c; cout << " ";
    cout << d; cout << endl;
}

void inputIntToArray (int input, int i, int array[4]) {
    array[i] = input;
}

char input() {
    char a,b,c,d;
    scanf("%c %c %c %c", &a, &b, &c, &d);

    return a,b,c,d;
}

void swap(int *num1, int *num2) {
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void writeFile() {
    ofstream myfile;
    string filename;

    cout << "Enter File Name : ";
    scanf("%s", &filename);

    myfile.open(filename + ".txt");
    myfile << "Writing this to a file. \n";
    myfile.close();
}

int charToOps(char op, int num1, int num2) {
    if (op == '+') {
        return num1 + num2;
    } else if (op == '-') {
        return num1 - num2;
    } else if (op == '*') {
        return num1 * num2;
    } else {
        return num1 / num2;
    }
}

void permutation(int input[4]) {
    int i,j,k,l;
    int n;
    int temp[4];
    int x,y,z;
    char ops[4] = {'+', '-', '*', '/'};
    int count = 0;
    int num1, num2;
    
    for (n = 0; n < 4; n++) {
        temp[n] = input[n];
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {
                for (l = 0; l < 4; l++) {
                    if (l != k && k != j && j != i && i != k && l != j && k != i && l != i) {
                        temp[0] = input[i];
                        temp[1] = input[j];
                        temp[2] = input[k];
                        temp[3] = input[l];
                        
                        // printArray(temp);
                        // cout << endl;

                        if ((temp[0] + temp[1]) + (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + temp[1]) + (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) + (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) + (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) - (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) - (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) - (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) - (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) * (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) * (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) * (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) * (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) / (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) / (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) / (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] + temp[1]) / (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }

                        // -------------------------------------------------------

                        if ((temp[0] - temp[1]) + (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - temp[1]) + (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) + (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) + (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) - (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) - (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) - (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) - (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) * (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) * (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) * (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) * (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) / (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) / (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) / (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] - temp[1]) / (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        // -----------------------------------------------------

                        if ((temp[0] * temp[1]) + (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * temp[1]) + (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) + (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) + (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) - (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) - (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) - (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) - (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) * (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) * (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) * (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) * (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) / (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) / (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) / (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] * temp[1]) / (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }

                        // -----------------------------------------------------

                        if ((temp[0] / temp[1]) + (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / temp[1]) + (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) + (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) + (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) - (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) - (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) - (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) - (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) * (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) * (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) * (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) * (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) / (temp[2] + temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) / (temp[2] - temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) / (temp[2] * temp[3]) == 24) {
                            count = count + 1;
                        }
                        
                        if ((temp[0] / temp[1]) / (temp[2] / temp[3]) == 24) {
                            count = count + 1;
                        }




                        // KURUNG KE-2

                        if (((temp[0] + temp[1]) + temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) + temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) + temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) + temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) - temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) - temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) - temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) - temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) * temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) * temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) * temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) * temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) / temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) / temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) / temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] + temp[1]) / temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if (((temp[0] - temp[1]) + temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) + temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) + temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) + temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) - temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) - temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) - temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) - temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) * temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) * temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) * temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) * temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) / temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) / temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) / temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] - temp[1]) / temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if (((temp[0] * temp[1]) + temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) + temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) + temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) + temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) - temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) - temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) - temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) - temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) * temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) * temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) * temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) * temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) / temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) / temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) / temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] * temp[1]) / temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if (((temp[0] / temp[1]) + temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) + temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) + temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) + temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) - temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) - temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) - temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) - temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) * temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) * temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) * temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) * temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) / temp[2]) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) / temp[2]) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) / temp[2]) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if (((temp[0] / temp[1]) / temp[2]) / temp[3] == 24) {
                            count = count + 1;
                        }




                        // KURUNG KE-3
                        if ((temp[0] + (temp[1] + temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] + temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] + temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] + temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] - temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] - temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] - temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] - temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] * temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] * temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] * temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] * temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] / temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] / temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] / temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] + (temp[1] / temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        // -----------------------------------------------------

                        if ((temp[0] - (temp[1] + temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] + temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] + temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] + temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] - temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] - temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] - temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] - temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] * temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] * temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] * temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] * temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] / temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] / temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] / temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] - (temp[1] / temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if ((temp[0] * (temp[1] + temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] + temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] + temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] + temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] - temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] - temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] - temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] - temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] * temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] * temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] * temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] * temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] / temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] / temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] / temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] * (temp[1] / temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if ((temp[0] / (temp[1] + temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] + temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] + temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] + temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] - temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] - temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] - temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] - temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] * temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] * temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] * temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] * temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] / temp[2])) + temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] / temp[2])) - temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] / temp[2])) * temp[3] == 24) {
                            count = count + 1;
                        }

                        if ((temp[0] / (temp[1] / temp[2])) / temp[3] == 24) {
                            count = count + 1;
                        }




                        // KURUNG KE-4
                        if (temp[0] + ((temp[1] + temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] + temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] + temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] + temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] - temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] - temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] - temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] - temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] * temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] * temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] * temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] * temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] / temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] / temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] / temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + ((temp[1] / temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        // -----------------------------------------------------
                        if (temp[0] - ((temp[1] + temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] + temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] + temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] + temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] - temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] - temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] - temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] - temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] * temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] * temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] * temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] * temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] / temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] / temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] / temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - ((temp[1] / temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if (temp[0] * ((temp[1] + temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] + temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] + temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] + temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] - temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] - temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] - temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] - temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] * temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] * temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] * temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] * temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] / temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] / temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] / temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * ((temp[1] / temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if (temp[0] / ((temp[1] + temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] + temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] + temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] + temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] - temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] - temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] - temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] - temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] * temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] * temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] * temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] * temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] / temp[2]) + temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] / temp[2]) - temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] / temp[2]) * temp[3]) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / ((temp[1] / temp[2]) / temp[3]) == 24) {
                            count = count + 1;
                        }



                        // KURUNG KE-5
                        if (temp[0] + (temp[1] + (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] + (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] + (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] + (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] - (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] - (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] - (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] - (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] * (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] * (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] * (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] * (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] / (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] / (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] / (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] + (temp[1] / (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if (temp[0] - (temp[1] + (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] + (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] + (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] + (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] - (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] - (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] - (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] - (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] * (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] * (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] * (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] * (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] / (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] / (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] / (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] - (temp[1] / (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        // -----------------------------------------------------

                        if (temp[0] * (temp[1] + (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] + (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] + (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] + (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] - (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] - (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] - (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] - (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] * (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] * (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] * (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] * (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] / (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] / (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] / (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] * (temp[1] / (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        // ------------------------------------------------------

                        if (temp[0] / (temp[1] + (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] + (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] + (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] + (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] - (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] - (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] - (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] - (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] * (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] * (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] * (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] * (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] / (temp[2] + temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] / (temp[2] - temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] / (temp[2] * temp[3])) == 24) {
                            count = count + 1;
                        }

                        if (temp[0] / (temp[1] / (temp[2] / temp[3])) == 24) {
                            count = count + 1;
                        }
                    }
                }
            }
        }
    }
    
    cout << endl;
    cout << count;
    cout << " Solutions Found";
}