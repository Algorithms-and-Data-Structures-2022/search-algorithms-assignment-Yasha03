#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r){
      int s = arr[l] + arr[r];
      if(s == sum){
        return std::make_pair(l, r);
      }
      if(s < sum){
        l++;
      }
      if(s > sum){
        r--;
      }
    }

    return std::nullopt;
  }

}  // namespace assignment