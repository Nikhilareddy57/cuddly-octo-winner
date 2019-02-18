#include <bits/stdc++.h>

using namespace std;

int main()
{	
	
	int numVex, numEdg; //number of vertices|V|; number of edges |E|;
	bool graph[numVex][numVex]; //graph[i][j] = true => i -> j
	float edgeWt[numVex][numVex] = {0.0};//edge weights:probability of info propogation along edge
	float nodeRel[numVex] = {0.0};//node weights:relevance of node to info propagated

	cout << "Input number of vertices:";
	cin >> numVex;
	for(int i=0; i< numVex; i++) //initiating all connections to false
		for(int j=0; j<numVex; j++)
			graph[i][j] = false; 

	cout << "Input number of edges:";
	cin >> numEdg;
	if(numEdg > numVex*(numVex-1))
		throw "Invalid Input";

	cout << "Input edges and weights:\n";
	for(int i=0,x,y,w; i<numEdg; i++)
	{
		cin >> x >> y >> w;
		if(0<=x && x<numVex && 0<=y&& y<numVex)
		{
			graph[x][y] = true;
			edgeWt[x][y] = w;
		}
		else 
			throw "Invalid edge";//cout << "Invalid edge\n";
	}

	int q; //query vertex
	cout << "Query vertex:";
	cin >> q; 
	if(q >= numVex)
		throw "Invalid Input";

	
	
	return 0;
}