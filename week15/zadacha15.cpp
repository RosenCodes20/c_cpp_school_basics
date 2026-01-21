#include <iostream>
#include <string>

using namespace std;

class Resource {
    public:
        Resource() {
            cout << "Resource created!" << endl;
        }

        ~Resource() {
            cout << "Resource destroyed!" << endl;
        }

};

int main() {
    // 1 и 2
    {
        Resource *r_cpp = new Resource();
        delete r_cpp;
        // При изпълнение програмата извежда: "Resource created!" "Resource destroyed!" Причина: 
        // - При new Resource() автоматично се извиква конструкторът. 
        // - При delete r_cpp автоматично се извиква деструкторът, който освобождава ресурса.
    }

    // 3

    Resource *r_c = (Resource*) malloc(sizeof(Resource));

    free(r_c);

    // В този случай програмата не извежда никакво съобщение.
    // malloc заделя "сурова" памет, но НЕ извиква конструктора на класа Resource.
    // free освобождава паметта, но НЕ извиква деструктора.
    // Няма съобщение от конструктора
    // Няма съобщение от деструктора защото не са извикани!!!!
    // Не е добра практика използването на malloc и free върху C++ обекти, които имат конструктор и деструктор и това ни дава пример защо!!

    // 4
    int size = 3;
    int *arr = new int[size];

    for (int i = 0; i <= 2; i++) {
        arr[i] = (i + 1) * size;
    }

    for (int i = 0; i <= 2; i++) {
        cout << arr[i] << endl;
    }

    delete[] arr;
    cout << "Array memory freed!" << endl;
}