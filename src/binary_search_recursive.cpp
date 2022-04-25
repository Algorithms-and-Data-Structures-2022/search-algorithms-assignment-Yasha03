//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с границами поиска от начала массива до конца
    return search(arr, search_elem, 0, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> BinarySearchRecursive::search(const std::vector<int>& arr, int search_elem, int start, int stop) const {

    if (start > stop) {
      return std::nullopt;
    }

    int m = (start + stop) / 2;

    if(arr[m] == search_elem){
      return m;
    }


    if (arr[m] > search_elem) {
      return search(arr, search_elem, start, m - 1);
    }else{
      return search(arr, search_elem, m + 1, stop);
    }

  }

}  // namespace assignment
