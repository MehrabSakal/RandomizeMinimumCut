#include <iostream>
#include <random>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txf","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edge;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v;
        edge.push_back({v});
    }
    random_device rd; 
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, m);
    int idx=distrib(gen);
}