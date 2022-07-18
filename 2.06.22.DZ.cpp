queue.h
#pragma once
#include <stack>
template<typename type>
class Queue {
private:
	type* wait;			//Очередь
	int maxLength;		//Максимальный размер очереди
	int length;			//Текущий размер очереди
	int L;
	int R;
public:
	Queue();			//Конструктор
	Queue(int m);		//Конструктор с размером очереди
	void add(type c);	//Добавление элемента    
	type extract();		//Извлечение элемента
	void clear();		//Очистка очереди
	bool is_empty();	//Проверка существования элементов в очереди
	bool is_full();		//Проверка на переполнение очереди
	int get_count();	//Количество элементов в очереди
	void show();		//демонстрация очереди
	~Queue();			//Деструктор                       
};

template<typename type>
inline Queue<type>::Queue()
{
	this->wait = nullptr;
	this->maxLength = 0;
	this->length = 0;
}

template<typename type>
inline Queue<type>::Queue(int m)
{
	this->wait = new type[m];
}

template<typename type>
inline void Queue<type>::add(type c)
{
	this->length;

}

template<typename type>
inline type Queue<type>::extract()
{
	return type();
}



stack.h
#pragma once
#include <stack>
template<typename type>
class Stack {
	type* data;				// Массив для хранения данных
	int _top;				// Указатель на вершину стека
public:
	Stack();					// Конструктор по умолчанию
	Stack(int size);			// Конструктор для инициализации размера стека
	Stack(const Stack& st);		// Конструктор копирования
	Stack(Stack&& st);			// Конструктор переноса

	bool empty()const;			// Пустой стек?						
	void push(type& val);		// Добавление элемента в конец стека
	void push(type&& val);		// Перенос элемента в конец стека
	int size()const;			// Количество элементов в стеке
	void pop();					// Удаление последнего элемента в стеке
	const type& top()const;		// Возврат последнего элемента в стеке
	void swap(Stack& val);		// Обмен 2х стеков местами

	~Stack();					// Деструктор
};

template<typename type>
inline Stack<type>::Stack()
{
	this->data = nullptr;
	this->_top = 0;
	size = 0;
}

template<typename type>
inline Stack<type>::Stack(int size)
{
	this->data = new type[size];
	this->size = size;
}

template<typename type>
inline Stack<type>::Stack(const Stack& st)
{
	this->data = new type[st.size];
	for (auto i = 0; i < st.size; i++)
	{
		this->data[i] = st.data[i];
	}
}

template<typename type>
inline Stack<type>::Stack(Stack&& st)
{
	this->data = st.data;
	this->top = st.top;
	this->size = st.size;
}

template<typename type>
inline bool Stack<type>::empty() const
{
	size_t ans{ 0 };
	for (auto i = 0; i < this->size; i++) {
		if (this->data[i] != 0) {
			ans += 1;
		}

		if (ans != 0) {
			return false;
		}
		if (ans == 0) {
			return 0;
		}
}

}

template<typename type>
inline void Stack<type>::push(type& val)
{
	this->data[this->_top] = val;
	this->size += 1;
	this->_top += 1;

}

template<typename type>
inline void Stack<type>::push(type&& val)
{
	this->data[this->_top] = *val;
	this->size += 1;
	this->_top += 1;
}

template<typename type>
inline int Stack<type>::size() const
{
	return this->size;
}

template<typename type>
inline void Stack<type>::pop()
{
	this->_top = _top - 1;
}

template<typename type>
inline const type& Stack<type>::top() const
{
	// TODO: вставьте здесь оператор return
	return this->data[_top - 1];
}

template<typename type>
inline Stack<type>::~Stack()
{
	delete[] * this;
}
