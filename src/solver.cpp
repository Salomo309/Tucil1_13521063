#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
using namespace std;

int inputConvertCharToInt(char input) {
    if (input == 'A') {
        return 1;
    } else if (input == 'J') {
        return 11;
    } else if (input == 'Q') {
        return 12;
    } else if (input == 'K') {
        return 13;
    } else if (input == '10') {
        return 10;
    } else {
        return (int)input-48 ;
    }

    
}

void printArray(int array[4]) {
    int i;

    for (i = 0; i < 4; i++) {
        cout << array[i];
        cout << " ";
    }
}

string randomGen(char a, char b, char c, char d) {
    string input;
    srand(time(0));

    char array[13] = {'A','2','3','4','5','6','7','8','9','J','Q','K'};
    int inda = rand() % 12;
    int indb = rand() % 12;
    int indc = rand() % 12;
    int indd = rand() % 12;

    a = array[inda];
    b = array[indb];
    c = array[indc];
    d = array[indd];

    cout << a; cout << " ";
    cout << b; cout << " ";
    cout << c; cout << " ";
    cout << d; cout << endl;

    input = input + a + " ";
    input = input + b + " ";
    input = input + c + " ";
    input = input + d;

    cout << input;
    return input;
}

bool valid(string input) {
    int i;

    while (input[i] != ' ') {
        i++;
        if (input[i] != 'A' && input[i] != '2' && input[i] != '3' && input[i] != '4' && input[i] != '5' && input[i] != '6' && 
        input[i] != '7' && input[i] != '8' && input[i] != '9' && input[i] != 'J' && input[i] != 'Q' && input[i] != 'K') {
            if (input[i] == '1' && input[i+1] == 0) {
                return true;
            } else {
                return false;
            }
        }
    }
}

void inputIntToArray (int input, int i, int array[4]) {
    array[i] = input;
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
    int num1, num2, num3, num4, num5, p;
    
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
                        
                        for (x = 0; x < 4; x++) {
                            for (y = 0; y < 4; y++) {
                                for (z = 0; z < 4; z++) {
                                    num1 = charToOps(ops[y], temp[1], temp[2]);
                                    num1 = charToOps(ops[z], num1, temp[3]);
                                    num1 = charToOps(ops[x], num1, temp[0]);
                                    
                                    num2 = charToOps(ops[z], temp[2], temp[3]);
                                    num2 = charToOps(ops[y], num2, temp[1]);
                                    num2 = charToOps(ops[x], num2, temp[0]);
                                    
                                    num3 = charToOps(ops[x], temp[0], temp[1]);
                                    num3 = charToOps(ops[y], num3, temp[2]);
                                    num3 = charToOps(ops[z], num3, temp[3]);
                                    
                                    num4 = charToOps(ops[y], temp[1], temp[2]);
                                    num4 = charToOps(ops[x], num4, temp[0]);
                                    num4 = charToOps(ops[z], num4, temp[3]);
                                    
                                    if (num1 == 24) {
                                        count = count + 1;
                                    }
                                        
                                    if (num2 == 24) {
                                        count = count + 1;
                                    }
                                        
                                    if (num3 == 24) {
                                        count = count + 1;
                                        
                                    }
                                        
                                    if (num4 == 24) {
                                        count = count + 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
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
                        
                        for (x = 0; x < 4; x++) {
                            for (y = 0; y < 4; y++) {
                                for (z = 0; z < 4; z++) {
                                    num1 = charToOps(ops[y], temp[1], temp[2]);
                                    num1 = charToOps(ops[z], num1, temp[3]);
                                    num1 = charToOps(ops[x], num1, temp[0]);
                                    
                                    num2 = charToOps(ops[z], temp[2], temp[3]);
                                    num2 = charToOps(ops[y], num2, temp[1]);
                                    num2 = charToOps(ops[x], num2, temp[0]);
                                    
                                    num3 = charToOps(ops[x], temp[0], temp[1]);
                                    num3 = charToOps(ops[y], num3, temp[2]);
                                    num3 = charToOps(ops[z], num3, temp[3]);
                                    
                                    num4 = charToOps(ops[y], temp[1], temp[2]);
                                    num4 = charToOps(ops[x], num4, temp[0]);
                                    num4 = charToOps(ops[z], num4, temp[3]);
                                    
                                    if (num1 == 24) {
                                        count = count + 1;
                                        cout << temp[0] << " " << ops[x] << " (" << temp[1] << " " << ops[y] << " (" << temp[2] << " " << ops[z] << " " << temp[3] << "))"; 
                                        cout << endl;
                                    }
                                        
                                    if (num2 == 24) {
                                        count = count + 1;
                                        cout << temp[0] << " " << ops[x] << " ((" << temp[1] << " " << ops[y] << " " << temp[2] << ") " << ops[z] << " " << temp[3] << ")";
                                        cout << endl;
                                    }
                                        
                                    if (num3 == 24) {
                                        count = count + 1;
                                        cout << "(("<< temp[0] << " " << ops[x] << " " << temp[1] << ") " << ops[y] << " " << temp[2] << ")) " << ops[z] << " " << temp[3];
                                        cout << endl;
                                    }
                                        
                                    if (num4 == 24) {
                                        count = count + 1;
                                        cout << "("<< temp[0] << " " << ops[x] << " (" << temp[1] << " " << ops[y] << " " << temp[2] << ")) " << ops[z] << " " << temp[3];
                                        cout << endl;
                                    }
                                }
                            }
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