#pragma once
#include <memory>
#include <utility>

namespace cwstl
{
	template<typename T>
	class vector
	{
	public:
		//nested class 중첩 클래스
		class iterator
		{
			//생성자
			iterator(T* p = nullptr, size_t idx = 0);
			//소멸자
			~iterator();
			//증감 연산자 prefix, postfix
			iterator& operator++();
			iterator operator++(int);
			//더하기, 빼기 연산자
			iterator& operator--();
			iterator operator--(int);
			iterator operator+(size_t n);
			iterator operator-(size_t n);
			//비교 연산자
			bool operator==(const iterator& it);
			bool operator!=(const ierator& it);
			//포인터 연산자
			T& operator*();
			cosnt T* operator->();
		private:
			//멤버 변수
			friend class vector;
			T* pv;
			size_t pos;
		};

		//constructors
		explicit vector(size_t c = 1);
	};

}

