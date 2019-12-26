#include <iostream>
#pragma once
template <class T>
class TQueue{
	int MaxSize;
	int CurSize;
	T* arr;
	int Head;
	int Tail;
public:
	TQueue(int _MaxSize = 1) {
		MaxSize = _MaxSize;
		CurSize = 0;
		arr = new T[MaxSize];
		Head = 0;
		Tail = -1;
	}
	~TQueue() {
		delete[] arr;
	}
	int GetCurSize() {
		return CurSize;
	}
	int GetMaxSize() {
		return MaxSize;
	}
	int GetHead() {
		return arr[Head];
	}
	int GetTail() {
		return arr[Tail];
	}
	int GetHeadPos() {
		return Head;
	}
	int GetTailPos() {
		return Tail;
	}
	TQueue<T>& operator= (const TQueue<T>& q) {
		if (this != &q) {
			if (MaxSize != q.MaxSize) {
				MaxSize = q.MaxSize;
				delete[] arr;
				arr = new T[MaxSize];
			}
			Head = q.Head;
			Tail = q.Tail;
			CurSize = q.CurSize;
			if (Head <= Tail)
				for (int i = Head; i <= Tail; i++)
					arr[i] = q.arr[i];
			else {
				for (int i = Head; i < MaxSize; i++)
					arr[i] = q.arr[i];
				for (int i = 0; i <= Tail; i++)
					arr[i] = q.arr[i];
			}
		}
		return *this;
	}
	void Push(T a) {
		if (CurSize < MaxSize) {
			if (Tail != MaxSize - 1)
				Tail++;
			else
				Tail = 0;
			arr[Tail] = a;
			CurSize++;
		}
		else throw (MaxSize - CurSize);
	}
	T Pop() {
		if (!CurSize) throw 0;
		CurSize--;
		if (Head != MaxSize - 1)
			return arr[Head++];
		else{
			int pos = Head;
			Head = 0;
			return arr[pos];
		}
	}
	bool IsFull() {
		return CurSize == MaxSize;
	}
	bool IsEmpty() {
		return !CurSize;
	}

	friend std::ostream& operator<<(std::ostream &os, const TQueue &q) {
		for (int i = q.Head; i < q.Head + q.CurSize; i++)
			os << q.arr[i % (q.MaxSize)] << " ";
		return os;
	}
};


