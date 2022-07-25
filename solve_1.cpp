#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<vector>
#include<string>
#include <iomanip>
#include <deque>
#include<list>
#include<cmath>
#include<fstream>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;

struct Point{
    int x,y;
};


int N;//ŒÚ‹q”
int Q;//’â~ƒ|ƒCƒ“ƒg”
vector<Point>C;
vector<Point>Stop_Point;


void input(){
    ifstream input_file("instance_1.txt");
    input_file>>N;
    C.resize(N);
    rep(i,N){
        char a;
        input_file>>C[i].x>>a>>C[i].y;
    }
    input_file>>Q;
    Stop_Point.resize(Q);
    rep(i,Q){
        char a;
        input_file>>Stop_Point[i].x>>a>>Stop_Point[i].y;
    }
    input_file.close();
}

int main()
{
    input();
}