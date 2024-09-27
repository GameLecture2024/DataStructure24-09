#pragma once

#include <vector>
#include <iostream>

// �������� ����

// int abc = 10;
// int* intptr = &abc;
// ������ ������ *, ++, ++ ,==, !=, 

template <typename T>
class Container
{
private:
	T* arr;
	int size;
	int capacity;

	class iterator
	{
	private:
		T* ptr;
	public:
		// ������
		iterator() : ptr(nullptr) {}
		iterator(T* ptr) : ptr(ptr) {}

		T& operator*()
		{
			return *ptr;
		}

		// ���� ������ ++it
		iterator& operator++()
		{
			ptr++;
			return *this;
		}

		// ���� ������ it++
		iterator& operator++(int)
		{
			iterator temp = *this;
			ptr++;
			return temp;
		}

		bool operator==(const iterator& other)
		{
			return ptr == other.ptr;
		}

		bool operator!=(const iterator& other)
		{
			return ptr != other.ptr;
		}

		iterator operator+(const int count)
		{

		}

	};

	// iterator ���� �Լ�
public:
	using iterator = iterator;
	iterator begin() { return iterator(arr); }
	iterator end() { return begin() + size; }


	// Containter �ڷᱸ���� ��� ����
public:
	Container(int size = 3)
	{
		arr = new T[size];
		size = 0;
		capacity = size;
	}

	void push_back(T data)
	{
		arr[size] = data;
		size++;
	}

	void pop_back()
	{
		size = size > 0 ? size - 1 : 0;	 // 1. size > 0 �� true -> (size - 1 )����, false -> 0 ����� size ����
	}
};

void IteratorExample()
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << std::endl;
	}

	auto it = vec.begin();

	std::cout << "iterator�� ����� �ݺ� �����" << std::endl;

	for (it; it != vec.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	// for�ݺ��� : range based for loop

	std::cout << "���� ��� ���� �����" << std::endl;

	for (int elem : vec)   // iterator vec.begin() ~ vec.end()   it++
	{
		std::cout << elem << std::endl;
	}


	Container<int> myCon;
	myCon.push_back(10);
	myCon.push_back(20);
	myCon.push_back(30);

	
}


