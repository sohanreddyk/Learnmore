    #include<iostream>
    using namespace std;
    int main()
    {
        int arr[3];
        for(int i = 0; i < 3; i++) {
            cout << "Enter number " << i + 1 << ": ";
            cin >> arr[i];
        }

        int max = arr[0];
        for(int i = 1; i < 3; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }

        cout << "The maximum number is " << max << "." << endl;
        return 0;
    }