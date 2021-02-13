/**
 * Shell Sort
 *
 * Time Complexity: O(n log n) for best case, and for other cases, it depends on the gap sequence.
 * Space Complexity: O(1)
 */

/**
 * @param {Array} items
 * @return {Array} sorted (Ascending)
 */

function shellSort(items = []) {
  for (let gap = Math.floor(items.length / 2); gap >= 1; gap = Math.floor(gap / 2)) {
    for (let j = gap; j < items.length; j++) {
      for (let i = j - gap; i >= 0; i -= gap) {
        if (items[i] < items[i + gap]) {
          break;
        } else {
          [items[i], items[i + gap]] = [items[i + gap], items[i]];
        }
      }
    }
  }

  return items;
}

console.log(shellSort([3, 5, 3, 2, 1, 4]));
