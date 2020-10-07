/**
 * Insertion Sort
 *
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */

/**
 * @param {Array} items
 * @return {Array} sorted (Ascending)
 */
function insertionSort(items = []) {
  for (let i = 1; i < items.length; i++) {
    const temp = items[i];
    let j = i - 1;

    while (j >= 0 && items[j] > temp) {
      items[j + 1] = items[j];
      j--;
    }
    items[j + 1] = temp;
  }

  return items;
}

console.log(insertionSort([3, 5, 3, 2, 1, 4]));
