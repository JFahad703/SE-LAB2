#include <iostream>

using namespace std;
int n = 100;
int main()
{
    char arr[n];
    int length = 0;

    cout << "Enter a word : ";

    cin >> arr;
    for (length = 0; length < n && arr[length] != '\0'; length++){}

    int i = 0;
    int j = length - 1;
    while (i < j)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "Anagram: " << arr << endl;

    return 0;
}
