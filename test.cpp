#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <mutex>
using namespace std;

template<class T>
class Shared_Ptr
{
public:
	Shared_Ptr(T* ptr = nullptr)
		: _ptr(ptr)
		, _mutex(new mutex)
		, _count(new int(1))
	{}

	T& operator*()
	{
		return *_ptr;
	}

	T* operator->()
	{
		return &(*_ptr);
	}

	Shared_Ptr(Shared_Ptr<T>& sp)
	{
		_ptr = sp._ptr;
		_count = sp._count;
		_mutex = sp._mutex;
		Add();
	}

	Shared_Ptr& operator=(Shared_Ptr<T>& sp)
	{
		if (sp._ptr != _ptr)
		{
			Releaes();
			_ptr = sp._ptr;
			_count = sp._count;
			_mutex = sp._mutex;
			Add();
		}
	}

	~Shared_Ptr()
	{
		Release();
	}
private:
	void Release()
	{
		_mutex->lock();
		int flag = 0;
		if (--(*count) == 0)
		{
			if (_ptr != nullptr)
			{
				delete _ptr;
				_ptr = nullptr;
			}
			flag = 1;
			delete _count;
			_count = nullptr;
		}
		if (flag == 1)
		{
			delete _mutex;
		}
		_mutex->unlock();
	}
	void Add()
	{
		_mutex->lock();
		++(*count);
		_mutex->unlock();
	}
private:
	T* _ptr;
	mutex* _mutex;
	int* _count;
};