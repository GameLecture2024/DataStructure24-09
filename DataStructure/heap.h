#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>  // swap( a1, a2) 

// �ڷᱸ���� �̿��ؼ� �����͸� �� �����ϴ� ����� �����.
// �ڷᱸ���� �ȿ� �ִ� �����͸� ���� ������, ȿ�������� ����ϴ� ��� ������մϴ�. => �˰���

// Heap
// Ư¡ : ���� ���� Ʈ���� ���¸� ���� �ִ�.
// ���� : 
// Max Heap : �켱������ ���� ������(ū ��) ���� ū ���� ���� �ö󰡴� ����
// Min Heap : ���� ���� ���� Root ��忡 �����ϴ� Heap����

// Heapify�� ��Ģ
// root�� ��带 pop�մϴ�.
// ���� �������� ���� ��带 root�� �־��ݴϴ�.
// root�� �ڽĵ�� �θ�� �񱳸� �ؼ� ū ���� �θ�� �ٲߴϴ�.  
// ���ʿ� root�� �༮�� �� �̻� ������� ���� �� ���� �ݺ��մϴ�.

// �θ��� ��� ���ϴ� ���� : (idx - 1) / 2
// �ڽ��� ��� left   : idx * 2 + 1
// �ڽ��� ��� right	 : idx * 2 + 2

// ������ ������ ����ؼ� �Ʒ� �ڵ带 �����غ�����.
//  while �ݺ���
//   �θ� ��� < idx ���(���� ���� ���) -> ���� ���� ��� swap  = false
// 
class PriorityQueue
{
private:
	std::vector<int> p_queue;

	void heapifyUp(int idx)	  // �������� ���� indx
	{
		//int a1 = 10;
		//int a2 = 20;
		//std::swap(a1, a2);
	}

	// ������ ���� : size - 1  -> root
	// left, right
	// int largest
	// while, �� 

	void heapifyDown(int idx)  // 0
	{

	}

public:
};
