
#include <iostream>
#include <fstream>

using namespace std;

    int main() {
        int M[3][6]; //объявлем целочисленный массив 3x6
        int i,j,num;
        for(i=0;i<3;i++) {
            for (int j=0;j<6;j++) {cin >> M[i][j]; } //ввод элементов массива с клавиатуры
        }
        for(i=0;i<3;i++) {
            for (j=0;j<6;j++) {cout << M[i][j] << " " ;} //вывод массива на экран
            cout << endl; //в виде матрицы
        }



        cin >> i >> j; //ввод столбца и строки
       // i=i+1; j=j+1;
        cout << M[i][j] << endl; //вывод элемета строка и строки
        cin >> num; //ввод числа из массива
        M[i][j]=num; //запись числа в массив
        cout << M[i][j] << endl;
        for(i=0;i<3;i++) {
            for (j=0;j<6;j++) {cout << M[i][j] << " " ;} //вывод массива на экран
            cout << endl; //в виде матрицы
        }


        ofstream file; //создание метода записи в файл
        file.open("/home/gridlock/1.txt"); // создание файла
        for(i=0;i<3;i++) {
            for(j=0;j<6;j++) {file << M[i][j] << "  " ;}
            file << endl; //запись файла
        }
        file.close();





        //if(i=0){}



//input 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
            return 0;
}
