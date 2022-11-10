// CPPFirstLesson.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Lift {
    private:
        int floors[5]{1,0,0,0,0};
        bool state = false;

    public:
        bool GetState() 
        {
            cout << "Лифт находится в состоянии " << (state ? "включен" : "выключен") << endl;
            return state;            
        }
        void SetState(bool st)
        {
            state = st;
            cout << "Лифт перешел в состояние " << (state ? "включен" : "выключен") << endl;
        }
        int GetFloor()
        {
            int i = 0;
            for (; i < sizeof(floors) - 1; i++)
            {
                if (floors[i] == 1)
                {
                    return i + 1;
                }
                   
            }
            
            return 0;
            
        }

        void SetFloor(int floor)
        {
            int buf = GetFloor();
            if (state) {
                if (floor != buf)
                {
                    floors[buf -1] = 0;
                    floors[floor-1] = 1;
                    cout << "Вы поехали на этаж номер " << floor << endl;
                }
            }
        }
};

int main()
{
    setlocale(LC_ALL, "");
    Lift mylift;
    mylift.GetState();
    mylift.SetState(true);
    cout << "Вы на этаже номер " << mylift.GetFloor() << endl;
    mylift.SetFloor(4);
    cout << "Вы на этаже номер " << mylift.GetFloor() << endl;
    mylift.SetState(false);
    mylift.GetState();
    return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
