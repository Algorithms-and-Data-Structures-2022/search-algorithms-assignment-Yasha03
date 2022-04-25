#include "assignment/linear_search_recursive.hpp"

namespace assignment {

  std::optional<int> LinearSearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    return search(arr, search_elem, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> LinearSearchRecursive::search(const std::vector<int>& arr, int search_elem, int curr_index) const {
    if(curr_index < 0){
      return std::nullopt;
    }

    if(arr[curr_index] == search_elem){
      return curr_index;
    }

    return search(arr, search_elem, curr_index - 1);
  }

}  // namespace assignment