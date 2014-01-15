#include <vector>
#include <algorithm>

std::vector create()
{
   std::vector v(10);
   
   for(int i = 0; i < 10; ++i)
   {
      v.push_back(i);
   }

   return v;
}
