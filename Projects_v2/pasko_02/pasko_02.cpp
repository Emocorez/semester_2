#include <iostream>
#include <string>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

void StartObserve(_CrtMemState& ms_old) {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    _CrtMemCheckpoint(&ms_old);
}

void GetObserveResult(_CrtMemState& ms_old) {

    _CrtMemState  ms_diff, ms_new;

    _CrtMemCheckpoint(&ms_new);


    if (_CrtMemDifference(&ms_diff, &ms_old, &ms_new)) {
        cout << "Memory leak: " << ms_diff.lTotalCount << " bytes. " << endl;
    }
}

int main()
{
    _CrtMemState ms_old;

    StartObserve(ms_old);
    //std::cout << "Hello World!\n";

    int num; // размер массива
    cout << "Enter integer value: ";
    //cin >> num; // получение от пользовател€ размера массива
    num = 10;
    int* p_darr = new int[num]; // ¬ыделение пам€ти дл€ массива
    for (int i = 0; i < num; i++) {
        // «аполнение массива и вывод значений его элементов
        p_darr[i] = i;
        cout << "Value of " << i << " element is " << p_darr[i] << endl;
    }

    //delete[] p_darr;

    GetObserveResult(ms_old);

    //_CrtDumpMemoryLeaks();

    return 0;
}

