#pragma once
#include <iostream>
#include <set>

// set �ڷᱸ���� Ư¡
// Red-blackƮ���� �����Ǿ� �ִ�.
// ���ĵǾ� �ִ� �ڷᱸ��.
// �ߺ��� ������� �ʴ´�.


void SetExample()
{
	std::set<int> mySet;

	mySet.emplace(1);
	mySet.emplace(-1000);
	mySet.emplace(10);
	mySet.emplace(15);
	mySet.emplace(1000);
	mySet.emplace(25);

	for (const int num : mySet)
	{
		std::cout << num << " ";
	}

}

