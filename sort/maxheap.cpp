#include <iostream>

template <typename Item>
class MaxHeap{
private:
	Item *data;
	size_t count;
public:
	MaxHeap(int capacity)
	{
		data = new Item[capacity + 1];
		count = 0;
	}
	~MaxHeap()
	{
		delete [] data;
	}

	void insert()
	{

	}
};


