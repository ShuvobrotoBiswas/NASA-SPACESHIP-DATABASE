#include <iostream>

using namespace std;
int n, i, j, weight[10][10], step=1, Min, s, visited[10], a, b, mincost=0;
int main()
{
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the weighted adjacency matrix: "<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>weight[i][j];
            if(weight[i][j]==0)
                weight[i][j] = 99;
        }
    }

    cout<<"Enter the starting vertex: ";
    cin>>s;
    visited[s] = 1;
    while(step<n)
    {
        for(i=1, Min=99; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if (weight[i][j]<Min)
                {
                    if(visited[i]!=0)
                    {
                        Min = weight[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (visited[a]==0 || visited[b]==0)
        {
            cout<<"Edge "<<step<<" ("<<a<<","<<b<<") = "<<Min<<endl;
            mincost = mincost+Min;
            visited[b] = 1;
            step++;
        }
        weight[a][b] = weight[b][a] = 99;
    }
    cout<<"MST cost = "<<mincost;
}
