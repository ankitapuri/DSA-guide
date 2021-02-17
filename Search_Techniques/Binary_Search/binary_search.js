// Javascript implementation of Binary Search 

const binarySearch = (array, element) => {
  let startIndex = 0;
  let endIndex = array.length - 1;

  while (startIndex <= endIndex) {// it will run the loop while startIndex is less than or equal to endIndex

    let middleIndex = Math.floor((startIndex + endIndex) / 2); // it will store lower value of mid in middleIndex

    if (element === array[middleIndex]) {
      return middleIndex; // if value of element is equal to the array at middleIndex then return that index 
    }

    //Element is on the right side of the middle element
    if (element > array[middleIndex]) {
      startIndex = middleIndex + 1; // if the value of element is greater than value of the array at middleIndex then increase startIndex by middleIndex+1
    }

    //Element is on the left side of the middle element
    else {
      endIndex = middleIndex - 1;  //else decrease endIndex by middleIndex-1
    }

  }

  return -1; // the value is not found return -1
}

const getElementIndex = () => {

  var ar = [2, 3, 4, 10, 40];
  var el = 10;
  var ind = binarySearch(ar, el) // calling the binary search function

  if (ind === -1) {
    console.log("Element not present"); // print that element is not present when binary search funtion will return -1
  } else {
    console.log("Element found at " + ind + " index"); // print the required index when element is found at a particular index
  }

}

getElementIndex();// calling ourfunction
