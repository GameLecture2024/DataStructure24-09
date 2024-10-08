#pragma once

// �׷��� Graph
// 1. �׷�����? vertex(��)�� edge(��)���� ������ ���� ���� ���踦 ���������� ǥ���� �ڷᱸ����.

// �׷����� Ư��(feature)

// 1. ���⼺ ���ų�, ���� �ʴ´�.  (directed  vs unDirected)
// 2. ���� ����ġ�� ���°�?  weighted, ����� ���� ����ġ�� �ο��� �� �ִ�. �ο����� ������ 0,1�� ǥ���Ѵ�.
// 3. ��ȸ�ϴ°�?           cyclic graph	 vs  Acyclic graph


// Graph Theroy �׷��� �̷�
// DAG ( Directed ACyclic Grpah) : Ʈ���� �� �����Դϴ�.

// �׷����� ǥ�� 

// 1. adjacent Matrix ���� ��Ʈ����

// 2. adjacent list	���� ����Ʈ

#include <vector>
#include <iostream>

using namespace std;

class Graph_Matrix
{
private:
	int Vertex;  // ������ ��
	vector<vector<int>> adjMatrix;	  // �׷������� ���� ���� ���� ǥ��

public:
	Graph_Matrix(int vertices) : Vertex(vertices), adjMatrix(vertices, vector<int>(vertices, 0))
	{
	}


	void addEdgeMatrix(int v1, int v2)
	{
		adjMatrix[v1][v2] = 1;
		adjMatrix[v2][v1] = 1;
	}


	void printGraph()
	{
		for (int i = 0; i < Vertex; i++)
		{
			for (int j = 0; j < Vertex; j++)
			{
				std::cout << adjMatrix[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}

};

class Graph_List
{
private:
	int Vertex;  // ������ ��
	vector<vector<int>> adjList;	  // �׷������� ���� ���� ���� ǥ��

public:
	Graph_List(int vertices) : Vertex(vertices)
	{
		adjList.resize(Vertex);
	}

	void addEdgeList(int v1, int v2) // directed, undirected
	{
		adjList[v1].push_back(v2);
		adjList[v2].push_back(v1);
	}

	void printGraph()
	{
		for (int i = 0; i < Vertex; i++)
		{
			std::cout << "���� " << i << "�� ���� ��Ʈ����:";
			for (auto x : adjList[i])
			{
				std::cout << " ->" << x;
			}
			std::cout << std::endl;
		}
	}
};


void GraphExample()
{
	Graph_List graph_L(5);
	graph_L.addEdgeList(0, 2);
	graph_L.addEdgeList(0, 3);
	graph_L.addEdgeList(1, 3);
	graph_L.addEdgeList(1, 4);
	graph_L.addEdgeList(2, 4);

	//graph_M.printGraphList();
	graph_L.printGraph();

	std::cout << "Graph Matrix" << std::endl;

	Graph_Matrix graph_M(5);
	graph_M.addEdgeMatrix(0, 2);
	graph_M.addEdgeMatrix(0, 3);
	graph_M.addEdgeMatrix(1, 3);
	graph_M.addEdgeMatrix(1, 4);
	graph_M.addEdgeMatrix(2, 4);

	graph_M.printGraph();
}

// �׷��� Ž�� ����
// 0�� �� :  1,3 ����
// 1�� �� : 0,1,3,5 ����
// 2�� �� : 2,4 ����
// 3�� �� : 0,2 ����
// 4, 5�� �� : ������ �ȵǾ� �ֽ��ϴ�.

// �� ���� ��ü�� ����Ǿ� ������ true ��ȯ, �ƴϸ� false��ȯ�ϵ��� �ڵ带 �ۼ��غ�����.

class VisitAllRooms
{
private :
	vector<vector<int>> rooms; // ����� �׷����� ǥ���ϴ� 2���� �迭
	set<int> seen; // Ž���� ���� �����ϴ� �ڷᱸ�� 

	// ��� ���
	void recurDFS(vector<vector<int>>& rooms)
	{
		// stack : ������ vertex ����, seen �ְ�, ���


		// recurDfs(0);
	}

	// iterative
	void iterDFS()
	{
	    
	}

	void BFS()
	{


		// queue
	}
};
