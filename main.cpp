#include <iostream>
#include <vector>
using namespace std;
//1. Set of Problems on One-Dimensional Vectors
//int main() {
    //Problem 1
    // vector<int> v;
    // v.push_back(10);
    // cout<<"After adding 10"<<endl;
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<' ';
    // }
    // cout<<"\nSize: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(20);
    // cout<<"After adding 20"<<endl;
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<' ';
    // }
    // cout<<"\nSize: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(30);
    // cout<<"After adding 30"<<endl;
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<' ';
    // }
    // cout<<"\nSize: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<"After adding 40"<<endl;
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<' ';
    // }
    // cout<<"\nSize: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(50);
    // cout<<"After adding 50"<<endl;
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<' ';
    // }
    // cout<<"\nSize: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;


    //Problem 2
    // vector<int> v={1,2,3,4,5};
    // cout<<"Original vector: "<<endl;
    // for (int i=0;i<v.size();i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl<<"\n";
    // v.insert(v.begin(),0);
    // for (int i=0;i<v.size();i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n Elements shifted: 5"<<endl;
    // v.push_back(6);
    // for (int i=0;i<v.size();i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n Elements shifted: 0"<<endl;
    // v.insert(v.begin()+3,99);
    // for (int i=0;i<v.size();i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n Elements shifted: 4"<<endl;


    //Problem 3
    // vector<int> v = {10,20,30,40,50,60};
    // cout<<"Original vector:";
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // cout<<"\n"<<endl;
    // v.erase(v.begin());
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<" ";
    // }
    // cout<<"\nElements shifted after erase: 5\n";
    // v.pop_back();
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<" ";
    // }
    // cout<<"\nElements shifted after erase: 0\n";
    // v.erase(v.begin()+2);
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] <<" ";
    // }
    // cout<<"\nElements shifted after erase: 1\n";


    //Problem 4
    // vector<int> v;
    // for (int i = 1; i <= 20; i++) {
    //     int oldCapacity = v.capacity();
    //     v.push_back(i);
    //     cout<<"\nSize: "<<v.size()<<"  Capacity: "<<v.capacity();
    //     if (oldCapacity != v.capacity()) {
    //         cout<<"  Capacity changed";
    //     }
    // }
    // cout<<"\n\nsizeof(int): "<<sizeof(int)<<endl;
    // int totalBytes = v.size()*sizeof(int);
    // cout<<"total bytes: "<<totalBytes<<endl;
    // cout<<"Final size: "<<v.size()<<endl;
    // cout<<"Final Capacity: "<<v.capacity()<<endl;
//}


//2. Set of Problems on Multidimensional Arrays
//int main() {
    //Problem 5
    // int rows = 3;
    // int cols = 4;
    // int **A = new int*[rows];
    // for (int i = 0; i < rows; i++) {
    //     A[i] = new int[cols];
    // }
    // int value = 1;
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         A[i][j] = value;
    //         value++;
    //     }
    // }
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < rows; i++) {
    //     delete[] A[i];
    // }
    // delete[] A;
    // return 0;


    //Problem 6
    // int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    // int C[2][2] = {};
    // int calc = 0;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         for (int k = 0; k < 3; k++) {
    //             C[i][j] += A[i][k] * B[k][j];
    //             calc ++;
    //         }
    //     }
    // }
    // cout << "Result: "<<endl;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << C[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout <<"Calculations: "<<calc << endl;
    // return 0;
//}


//3.Guided Practice: Do it yourself
int main() {
    //Problem 7
    vector<vector<int>> A ={
        {1,2},
        {3,4}
    };
    vector<vector<int>> B ={
        {5,6},
        {7,8}
    };
    vector<vector<int>> C(2,vector<int>(2,0));
    int calculations = 0;
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++) {
                C[i][j] += A[i][k] * B[k][j];
                calculations++;
            }
        }
    }
}