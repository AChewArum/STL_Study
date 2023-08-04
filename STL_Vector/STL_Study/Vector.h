#pragma once
#include <memory>
#include <utility>

namespace cwstl
{
	template<typename T>
	class vector
	{
	public:
		//nested class ��ø Ŭ����
		class iterator
		{
			//������
			iterator(T* p = nullptr, size_t idx = 0);
			//�Ҹ���
			~iterator();
			//���� ������ prefix, postfix
			iterator& operator++();
			iterator operator++(int);
			//���ϱ�, ���� ������
			iterator& operator--();
			iterator operator--(int);
			iterator operator+(size_t n);
			iterator operator-(size_t n);
			//�� ������
			bool operator==(const iterator& it);
			bool operator!=(const ierator& it);
			//������ ������
			T& operator*();
			cosnt T* operator->();
		private:
			//��� ����
			friend class vector;
			T* pv;
			size_t pos;
		};

		//constructors
		explicit vector(size_t c = 1);
	};

}

