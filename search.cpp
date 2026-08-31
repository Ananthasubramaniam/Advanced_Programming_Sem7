#include <iostream>
using namespace std;

class Search{
    private:
        int arr[100];
        int n;

    public:
        void input(){
            cout<<"no of elements in the list:";
            cin >> n;
            for (int i = 0; i < n; i++) {
            cout<<"enter element"<< i<<':';
            cin >> arr[i];
        }
        }

        int linear_Search(int target){
            for (int i = 0; i<n; i++){
                if (target == arr[i]){
                return i;
                }
            }
            return -1;
        }

        int linear_Search(int target){
            for (int i = 0; i<n; i++){
                if (target == arr[i]){
                return i;
                }
            }
            return -1;
        }
};


int main(void){
    Search s;
    s.input();

    int target;
    cin >> target;
    int num;
    num = s.linear_Search(target);
    cout <<"the num is found at index: " << num<<endl;
    return 0;
}