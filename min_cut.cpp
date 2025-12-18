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
        edge.push_back({u,v});
    }
    random_device rd; 
    mt19937 gen(rd());
    int cut=0;
    while (edge.size()>2)
    {
        uniform_int_distribution<> distrib(0, edge.size());
        int idx=distrib(gen);
        edge.erase(idx);
        vector<vector<int>>edges;
        for(int i=0;i<m;i++)
        {
            if(edge[u][v]==idx)
            {
                for(int i=0;i<m;i++)
                {
                    edges[u].push_back(v,w);
                }
                cut++;
            }
        }
    }
    cout<<cut<<endl;
    
}

