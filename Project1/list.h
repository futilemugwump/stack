#pragma once
/*  template <class T>
struct TNode {
	T val;
	TNode<T> *pNext;
};
template <class T>
class TStack {
	TNode<T> *pFirst;
public:
	TStack(int a = 0) {
		pFirst = NULL;
	}
	~TStack()
	{
		TNode<T> *p = pFirst;
		while (pFirst != NULL) {
			pFirst = pFirst->pNext;
			delete p;
			p = pFirst;
		}
	}
	bool IsFull()const
	{
		TNode<T> *p;
		p = new TNode<T>;
		if (p == NULL)
		{
			return true;
		}
		else
		{
			delete p;
			return false;
		}
	}
	bool IsEmpty()const
	{
		return !pFirst;
	}
	void Push(const T& a)
	{
		if (IsFull())
			throw - 11;
		else {
			TNode<T> *p = new TNode<T>;
			p->pNext = pFirst;
			p->val = a;
			pFirst = p;
		}
	}
	void Clear() {
		TNode<T> *p = pFirst;
		while (pFirst) {
			pFirst = pFirst->pNex
				delete p;
			p = pFirst;
		}
	}
	TStack<T>& operator=(const TStack<T>& st)
	{
		if (this != &st) {
			if (!IsEmpty())
				Clear();
			else {
				TNode<T> *p = st.pFirst;
				if (!p)
					pFirst = p;
				while (p) {
					Push(p->val);
					p = p->pNext;
				}
				delete p;
			}
		}
		return *this;
	}
	TStack(const TStack<T>& st)
	{
		TNode<T> *p = st.pFirst;
		if (!p) {
			pFirst = p;
		}
		while (p) {
			Push(p->val);
			p = p->pNext;
		}
		delete p;
	}
	
	
	T Pop()
	{
		if (IsEmpty()) {
			throw - 14;
		}
		else {
			T res = pFirst->val;
			TNode<T> *p = pFirst;
			pFirst = pFirst->pNext;
			delete p;
			return res;
		}
	}
	T Top()
	{
		if (IsEmpty())
			throw - 15;
		else
			return pFirst->val;
	}

	
}; */

#include<iostream>
template <class T>
struct TNode
{
	T val;
	TNode<T> *pNext;
};

template <class T>
class TStack
{
private:
	TNode<T> *pFirst;
public:
	TStack();
	~TStack();
	TStack(const TStack<T>& st);
	TStack<T>& operator=(const TStack<T>& st);
	bool IsEmpty()const;
	bool IsFull()const;
	void Push(const T& a);
	T Pop();
	T Top();
	void Clear();
};

template <class T>//////////////////////////////////
TStack<T>::TStack()
{
	pFirst = NULL;
}

template <class T>
TStack<T>::~TStack()//////////////////
{
	TNode<T> *tmp = pFirst;
	while (pFirst != NULL)
	{
		pFirst = pFirst->pNext;
		delete tmp;
		tmp = pFirst;
	}
}

template <class T>////////
TStack<T>::TStack(const TStack<T>& st)
{
	TNode<T> *tmp = st.pFirst;
	if (tmp == NULL)
	{
		pFirst = tmp;
	}
	while (tmp != NULL)
	{
		Push(tmp->val);
		tmp = tmp->pNext;
	}
	delete tmp;
}

template <class T>///////////
TStack<T>& TStack<T>::operator=(const TStack<T>& st)
{
	if (this != &st)
	{
		if (!IsEmpty())
		{
			Clear();
		}
		else
		{
			TNode<T> *tmp = st.pFirst;
			if (tmp == NULL)
			{
				pFirst = tmp;
			}
			while (tmp != NULL)
			{
				Push(tmp->val);
				tmp = tmp->pNext;
			}
			delete tmp;
		}
	}
	return *this;
}

template <class T>///////////////////////////
bool TStack<T>::IsEmpty()const {
	return pFirst == NULL;
}

template <class T>////////////////
bool TStack<T>::IsFull()const {
	TNode<T> *tmp;
	tmp = new TNode<T>;
	if (tmp == NULL)
	{
		return 1;
	}
	else
	{
		delete tmp;
		return 0;
	}
}

template <class T>//////////////////////////
void TStack<T>::Push(const T& a) {
	if (IsFull())
	{
		char e[] = "Stack is Full";
		throw e;
	}
	else
	{
		TNode<T> *tmp;
		tmp = new TNode<T>;
		tmp->pNext = pFirst;
		tmp->val = a;
		pFirst = tmp;
	}
}

template <class T>////////////////////////////////////
T TStack<T>::Pop() {
	if (IsEmpty())
	{
		char e[] = "Stack is Empty";
		throw e;
	}
	else
	{
		T res = pFirst->val;
		TNode<T> *tmp;
		tmp = pFirst;
		pFirst = pFirst->pNext;
		delete tmp;
		return res;
	}
}

template <class T>
T TStack<T>::Top() {
	if (IsEmpty())
	{
		char e[] = "Stack is Empty";
		throw e;
	}
	else
	{
		return pFirst->val;
	}
}

template <class T>
void TStack<T>::Clear() {
	TNode<T> *tmp = pFirst;
	while (pFirst != NULL)
	{
		pFirst = pFirst->pNext;
		delete tmp;
		tmp = pFirst;
	}

}


