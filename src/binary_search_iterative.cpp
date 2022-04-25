#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {
    int l = 0;
    int r = arr.size() - 1;
    while (l <= r){
      int m = (l + r) / 2;
      if(arr[m] == search_elem){
        return m;
      }
      if(arr[m] > search_elem){
        r = m - 1;
      }
      if(arr[m] < search_elem){
        l = m + 1;
      }
    }

    return std::nullopt;
  }

}  // namespace assignment