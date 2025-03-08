#include<iostream>

class ArrayList
{ 
private:
	int len;
	int* data;
	void init(int len = 10)
	{
		//(*this).len = len;
		this->len = len;
		this->data = (int*)malloc(sizeof(int) * len);
	}
	bool indexValid(int index)
	{
		return 0 <= index < this->len;
	}
	void expand();

public:
	ArrayList(int len = 10)
	{
		this->init(len);
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}
	ArrayList(ArrayList& list)
	{
		//this->len = list.len;
		//this->data = list.data;
		this->init(list.len);
		for (int i = 0; i < list.len; ++i)
		{
			this->set(i, list.get(i));
		}
	}
	~ArrayList()
	{
		//for (int i = 0; i < this->len; ++i)
		//{
		//	this->data[i] = 0;
		//}
		free(this->data);
		//this->data = nullptr;
		//this->len = 0;
	}
	void randomize(int min = 10, int max = 99)
	{
		for (int i = 0; i < len; ++i)
		{
			this->data[i] = rand() % (max - min + 1) + min;
		}
	}
	void print()
	{
		for (int i = 0; i < this->len; ++i)
		{
			printf("%d ", this->data[i]);
		}
		printf("\n");
	}
	int get(int index)
	{
		if (indexValid(index))
		{
			return this->data[index];
		}
		return -1;
	}
	void set(int index, int value)
	{
		if (indexValid(index))
		{
			this->data[index] = value;
		}
	}
	int count()
	{
		return len;
	}

	void pushBack(int element)
	{
		int* arr = (int*)malloc(sizeof(int) * (this->len));
		int* ptr = &data[1];

		for (int i = 0; i < this->len - 1; ++i)
		{
			arr[i] = *ptr;
			ptr++;
		}
		arr[this->len] = element;

		this->data = arr;
	}
	void pushFront(int element)
	{
		int* arr = (int*)malloc(sizeof(int) * (this->len));
		int* ptr = &data[0];

		for (int i = 1; i < this->len; ++i)
		{
			arr[i] = *ptr;
			ptr++;
		}
		arr[0] = element;

		this->data = arr;
	}
	void insert(int index, int element)
	{
		int* arr = (int*)malloc(sizeof(int) * (this->len + 1));

		for (int i = 0; i < len + 1; ++i)
		{
			if (i = index)
			{
				arr[i] = element;
				continue;
			}
			arr[i] = this->data[i];
		}
		this->data = arr;
		for (int i = 0; i < len + 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
	}
	int popBack()
	{
		int* arr = (int*)malloc(sizeof(int) * (this->len - 1));
		for (int i = 0; i < len - 1; ++i)
		{
			arr[i] = this->data[i];
		}
		this->data = arr;
		for (int i = 0; i < len - 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
	}
	int popFront()
	{
		int* arr = (int*)malloc(sizeof(int) * (this->len - 1));
		for (int i = 1; i < len; ++i)
		{
			arr[i] = this->data[i];
		}
		this->data = arr;
		for (int i = 1; i < len; ++i)
		{
			std::cout << this->data[i] << " ";
		}
	}
	int extract(int index)
	{
		int* arr = (int*)malloc(sizeof(int) * (this->len - 1));
		for (int i = 0; i < this->len - 1; ++i)
		{
			if (i = index)
			{
				continue;
			}
			arr[i] = this->data[i];
		}
		return *arr;
	}
	int sum()
	{
		int counter = 0;
		for (int i = 0; i < this->len; ++i)
		{
			counter += this->data[i];
		}
		return counter;
	}
	/// <summary>
	/// Âòîðîé ïî âåëè÷èíå ýëåìåíò
	/// </summary>
	int secondMax()
	{
		for (int i = 1; i < this->len; ++i)
		{
			for (int j = 0; j < this->len; ++j)
			{
				if (this->data[j] < this->data[i])
				{
					std::swap(this->data[j], this->data[j + 1]);
				}
			}
		}
		for (int i = len - 1; i >= 0; --i)
		{
			if (this->data[i] < this->data[len - 1])
			{
				return this->data[i];
			}
			else
				return -1;
		}
	}
	/// <summary>
	/// èíäåêñ ïîñëåäíåãî ìèíèìàëüíîãî ýëåìåíòà
	/// </summary>
	int lastMinIndex()
	{
		if (this->len == 0) 
		{
			return -1;
		}

		int min_element = this->data[0];
		int last_min = 0;
		for (int i = 0; i < this->len; ++i)
		{
			if (this->data[i] <= min_element)
			{
				min_element = this->data[i];
				last_min = i;
			}
		}
		return last_min;
	}
	/// <summary>
	/// ñìåñòèòü íà k ýëåìåíòîâ âïðàâî
	/// </summary>
	int shift(int k)
	{
		k = k % this->len;

		int* temp = new int[k];

		for (int i = 0; i < k; i++)
		{
			temp[i] = this->data[this->len - k + i];
		}

		for (int i = this->len - 1; i >= k; i--) 
		{
			this->data[i] = this->data[i - k];
		}

		for (int i = 0; i < k; i++) 
		{
			this->data[i] = temp[i];
		}
	}
	/// <summary>
	/// êîëè÷åñòâî íå÷åòíûõ
	/// </summary>
	int countOdd()
	{
		int counter;
		for (int i = 0; i < this->len; ++i)
		{
			if (this->data[i] % 2 != 0)
			{
				++counter;
			}
		}
		return counter;
	}
	/// <summary>
	/// ñóììà ÷åòíûõ ýëåìåíòîâ
	/// </summary>
	int sumEven()
	{
		int counter;
		for (int i = 0; i < this->len; ++i)
		{
			if (this->data[i] % 2 == 0)
			{
				counter += this->data[i];
			}
		}
		return counter;
	}
};

int max(ArrayList list)
{
	int mx = list.get(0);
	for (int i = 0; i < list.count(); ++i)
	{
		mx = (mx > list.get(i) ? mx : list.get(i));
	}
	return mx;
}

int main(int argc, char* argv[])
{
	ArrayList list(10);
	list.randomize();
	list.print();
	printf("%d\n", max(list));
	return 0;
}