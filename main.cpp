
#include <iostream>
#include <fstream>
using namespace std;

int M[3][6]; //объявлем целочисленный массив 3x6
int i,j,num,n;



void declarationM() {
    cout << "Введите массив" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) { cin >> M[i][j]; } //ввод элементов массива с клавиатуры
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) { cout << M[i][j] << " "; } //вывод массива на экран
        cout << endl; //в виде матрицы

    }
}

void inputM(){
    cout << "Введите строку и столбец" << endl;
    cin >> i >> j; //ввод столбца и строки
    // i=i+1; j=j+1;
    cout << M[i][j] << endl; //вывод элемета строка и строки
    cout << "Замените число" << endl;
    cin >> num; //ввод числа из массива
    M[i][j]=num; //запись числа в массив
    cout << M[i][j] << endl;
    for(i=0;i<3;i++) {
        for (j=0;j<6;j++) {cout << M[i][j] << " " ;} //вывод массива на экран
        cout << endl; //в виде матрицы
    }
}

void outputM(){
    cout << "Файл записан" << endl;
    ofstream file; //создание метода записи в файл
    file.open("/home/adminlocal/1.txt"); // создание файла
    for(i=0;i<3;i++) {
        for(j=0;j<6;j++) {file << M[i][j] << "  " ;}
        file << endl; //запись файла
    }
    file.close();
}
    int main() {
    START:
    cout << "Выберете пункт меню" << endl;
    cin >> n;
        switch(n) {
            case 1: {declarationM(); goto START;} break;
            case 2: {inputM(); goto START;} break;
            case 3: {outputM(); goto START;} break;
            default: cout  << "САСАЙ!" << endl;
        }

//input 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
            return 0;
}
