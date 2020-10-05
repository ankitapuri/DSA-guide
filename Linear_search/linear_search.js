
/**
 * Linear Search
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */


/**
 * @param {Array} items
 * @param {Number} targetItem
 */
 function linearSearch(items, targetItem) {
  for(let i = 0; i < items.length; i++) {
    if(items[i] === targetItem) return i;
  }
  return -1;
 }

console.log(linearSearch([1,2,3,4,5], 2));
console.log(linearSearch([1,2,3,4,5], 10));
console.log(linearSearch([1,2,3,4,5,5], 5));
