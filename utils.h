#include <vector>
#include <algorithm>

std::vector<int> create()
{
   std::vector<int> v(10);
   
   for(int i = 0; i < 10; ++i)
   {
      v.push_back(i);
   }

   return v;
}

void show(const std::vector<int>& v)
{
	for(int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}


