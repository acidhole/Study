#include <iostream>
#include <fstream>
#include <limits> //директива для numeric_limits


using namespace std;

long M[3][6]; //объявлем целочисленный массив 3x6, а так же глобальные переменные
long i,j,num,sw;
string conf="Да";


//процедура поиска ошибок ввода
void inputERR() {
    if (cin.fail()) {                //пока не будет введено нормальное число, выполняем цикл
        cout << "Ошибка ввода, возврат 0.\n";  //сообщаем об ошибке ввода
        cin.clear();                //выход из зацикливания cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');   //возможность введения более однго неверного символа
    }
}


//ввод элементов массива
void declarationM() {
    cout << "Процедура создания массива '3x6'.\n\nДля ручного заполнения с клавиатуры введите 'Да'. Для автозаполнения с файла введите любую клавишу.\n";
    cin >> conf;
    if(conf=="Да"){
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 6; j++) {
                cout << "Введите число.\n";          //ручной ввод
                inputERR();
                cin >> M[i][j];
            }
        }
    }
    else {
        ifstream file;
        file.open("/home/gridlock/Min[i][j].txt");   //или чтение из файла
        if(!file.is_open()) {cout << "Ошибка записи\n";} //проверка открытия файла
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 6; j++) {
                file >> M[i][j];
            }
        }
    }
    cout << "Созданный массив: \n";
    for (i = 0; i < 3; i++) {                           //вывод массива на экран
        for (j = 0; j < 6; j++) { cout << M[i][j] << " "; }
        cout << "\n"; //в виде матрицы
    }
}

//процедура многократного изменения матрицы
void inputM(){
    while(conf=="Да") {
        cout << "Процедура изменения массива '3x6'.\n\nВведите строку:\n";
        cin >> i;
        inputERR();
        if(i > 0 && i < 4 ) {i = i - 1;}  //проверка условий для ввода строки
        else {
            cout << "Ошибка ввода, выбрана 2 строка.\n";
            i=1;
        }
        cout << "Введите столбец:\n";
        cin >> j;
        inputERR();
        if(j > 0 && j < 7 ) {j=j - 1;}  //проверка условий для ввода столбца
        else {
            cout << "Ошибка ввода, выбрана 2 столбец.\n";
            j=1;
        }
        cout << "Будет заменено число: " << M[i][j] << "\nЗамените число.\n"; //вывод элемета строка и строки
        cin >> num; //выбор числа из массива
        inputERR();
        M[i][j] = num; //запись числа в массив
        i=i+1; j=j+1; //возврат значений строк и столбцов
        cout <<"Имененный массив: \n";
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 6; j++) { cout << M[i][j] << " "; } //вывод массива на экран
            cout << "\n"; //в виде матрицы
        }
        cout << "Для повторения процедуры введите 'Да'. Для завершения введите любую клавишу.\n";
        cin >> conf;
    }
}


//создание метода записи в файл
void outputM(){
    cout << "Процедура записи массива '3x6' в файл.\n";
    ofstream file;
    file.open("/home/gridlock/Mout[i][j].txt"); // создание файла
    if(!file.is_open()) {cout << "Ошибка записи\n";} //проверка открытия файла
    else {cout << "Файл записан.\n";}
    for(i=0;i<3;i++) {
        for(j=0;j<6;j++) {file << M[i][j] << "  " ;}
        file << "\n"; //запись файла
    }
    file.close();
}


int main() {
    //реализация программы в виде меню
    //setlocale(LC_ALL,"Rus");
    cout << "Здравствуйте, Юрий Федорович! Вас приветсвует программа работы для с массивами в11.\n\n";
    while (conf == "Да"){
        cout << "Введите цифру для выбора пункт меню:\n";
        cout << "'1' Создание массива.\n'2' Изменение массива.\n'3' Запись массива в файл.\n'4' Завершение программы\n";
        cin >> sw;
        inputERR();
        switch(sw) {
            case 1: declarationM(); cout << "Для выхода в меню введите 'Да'. Для завершения программы введите любую клавишу.\n";
                cin >> conf; break;
            case 2: inputM(); cout << "Для выхода в меню введите 'Да'. Для завершения программы введите любую клавишу.\n";
                cin >> conf;  break;
            case 3: outputM(); cout << "Для выхода в меню введите 'Да'. Для завершения программы введите любую клавишу.\n";
                cin >> conf; break;
            case 4: cout << "Для завершения программы введите любую клавишу. Для отмены введите 'Да'.\n";
                cin >> conf; break;
            default: cout  << "Ошибка ввода... Возврат в начало.\n";
        }
    }
    cout << "Спасибо за Внимание! Разработчик: Спиров Е.В.(ИБ62-в).\n";

//input 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
    return 0;
}