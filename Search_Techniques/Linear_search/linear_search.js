
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
  for(let i = 0; i < items.length; i++) {// loop will run till n
    if(items[i] === targetItem) return i;// if the element is fount return than index
  }
  return -1;// if the loop has been ended then return value as -1
 }

console.log(linearSearch([1,2,3,4,5], 2));// calling search funtion to find 2
console.log(linearSearch([1,2,3,4,5], 10));// calling search funtion to find 10
console.log(linearSearch([1,2,3,4,5,5], 5));// calling search funtion to find 5
