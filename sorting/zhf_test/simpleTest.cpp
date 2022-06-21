#include<iostream>
#include<vector>
using namespace std;
/** Insertion Sort Function
 *
 * @tparam T type of array
 * @param [in,out] arr pointer to array to be sorted
 * @brief std::vector<T> * arr 其中arr是一个指针，指向vector<T>, 传地址或者传引用都可以
 */
template <typename T>
void insertionSort(std::vector<T> *arr) {
    size_t n = arr->size();

    for (size_t i = 1; i < n; i++) {
        T temp = (*arr)[i]; // 这里的arr[0] 相当于 *arr
        int32_t j = i - 1;
        while (j >= 0 && temp < (*arr)[j]) {
            (*arr)[j + 1] = (*arr)[j];
            j--;
        }
        (*arr)[j + 1] = temp;
    }
}

void test_ptr(int *var) { cout << var[0] << endl; }

int main() {
    vector<int> a = {3, 4, 5, 1, 2};
    insertionSort(&a);
    for(int item : a)
    {
        cout << item << " " << endl;
    }
    int number = 1;
    int* p = &number;
    test_ptr(p);
    return 0;
}