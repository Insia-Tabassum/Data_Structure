#include<iostream>
using namespace std;
int main()
{
    int m[5][5]={{0,8,0,14,0},
                {8,0,15,0,9},
                {0,15,0,11,0},
                {14,0,11,0,6},
                {0,9,0,6,0}};

                for(int i=0;i<5;i++){
                    for(int j=i+1;j<5;j++){
                        if(m [i][j]!=0){
                            cout<<"<" <<i<<";"<<j <<">="<<endl;
                        }
                    }
                }


}










