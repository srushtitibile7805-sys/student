class Solution{
public:
   long long countCommas (int n) {
      long long count = 0;

  for(int i = 1000; i <= n; i++) {
    count++;
  }
   return count;
 }
};
