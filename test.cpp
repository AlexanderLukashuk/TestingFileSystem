#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
 
// #include <conio.h> //Заголовочный файл conio.h необходим, чтобы использовать
                   //функцию getch()
 
int main() 
{
    const int size_time = 3, size_dist = 4;
 
    // vector<vector<int>> array [size_time + 1][size_dist + 5];
    vector<vector<int> > array;
    // vector<vector<int>> array2 [size_time + 1][size_dist + 5];
    vector<vector<int> > array2;
 
    // for (int i = 0; i < (size_time + 1); i++)
    // {
    //     for (int j = 0; j < (size_dist + 5); j++)
    //     {
    //         array[i][j] = (i + j);
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < size_time; i++) {

			vector<int> row; // вспомогательный вектор
			for (int j = 0; j < size_dist; j++) {

				row.push_back(i + j); // заполняем вектор row нулями
			}
			array.push_back(row); // добавляем вектор row в вектор gameField
		}

    for (int i = 0; i < (size_time); i++)
    {
        for (int j = 0; j < (size_dist); j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "POSOSI HUI" << endl;
 
    // ofstream fout("test.txt", ios::out);   //Открывается файл в диске С: с названием out.txt
 
    // for (int i = 0; i < (size_time + 1); i++)
    // {
    //     for (int j = 0; j < (size_dist + 5); j++)
    //     {
    //         fout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }   

    ofstream fout("test.txt", ios::out);   //Открывается файл в диске С: с названием out.txt
 
    for (int i = 0; i < size_time; i++)
    {
        for (int j = 0; j < size_dist; j++)
        {
            fout << array[i][j] << " ";
        }
        cout << endl;
    }   
    cout << "POSOSI" << endl;
                
    cout << endl;
    // ifstream in("test.txt", ios::in);
    // if (in.is_open()) 
    // {
    //     for (int i = 0; i < (size_time + 1); i++)
    //     {
    //         for (int j = 0; j < (size_dist + 5); j++)
    //         {
    //             array2[i][j] = (i + j);
    //             cout << array2[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    // in.close();

    int temp;
    ifstream in("test.txt", ios::in);
    if (in.is_open()) 
    {
        for (int i = 0; i < size_time; i++)
        {
            vector<int> row;
            for (int j = 0; j < size_dist; j++)
            {
                in >> temp;
                row.push_back(temp);
            }
            array2.push_back(row);
        }
    }
    in.close();
    cout << "ZAEBAL" << endl;

    array2 = array;
    for (int i = 0; i < size_time; i++)
    {
        for (int j = 0; j < size_dist; j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "AGAIN POSOSI" << endl;

    // getch();  //Задерживает экран
    return 0; //Завершает программу
}