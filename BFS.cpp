#include <iostream>
using namespace std;

int n,m, k,i ,j , matrix[10][10], source, rear, Front;
int visited[10], step=1, connection[10], Queue[10];
int main ()
{
	cout<<"Enter the Number of Vertices: ";
	cin>>n;
	cout<<"Enter the number of edges: ";
	cin>>m;
	
	for(k=1; k<=m; k++)
	{
		cin>>i>>j;
		matrix[i][j]=1;
		
	}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter the source vertex: ";
	cin>>source;
	cout<<"BFS ORDER: ";
	cout<<source<<" ";
	visited[source] = 1;
	while(step<n)
	{
		for(j=1; j<=n; j++)
		{
			if(matrix[source][j] !=0
			&& visited[j] !=1
			&&connection[j] !=1)
			{
				connection[j]=1;
				Queue[rear] = j;
				rear++;
			}
		}
		source = Queue[Front];
		cout<<source<<" ";
		Front++;
		connection[source] = 0;
		visited [source] =1;
		step++;
	}
}


