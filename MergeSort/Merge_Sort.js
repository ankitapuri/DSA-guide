function mergeSort(arr){
   var len = arr.length;
   if(len < 2)
      return arr;
   var mid = Math.floor(len/2);
   var leftArr = arr.slice(0,mid);
   var rightArr = arr.slice(mid);

   return merge(mergeSort(leftArr),mergeSort(rightArr));
}

function merge(leftArr, rightArr){
  var result = [];
  var leftLength = leftArr.length;
  var rightLength = rightArr.length;
	var l = 0;
  var r = 0;
  while(l < leftLength && r < rightLength){
     if(leftArr[l] < rightArr[r]){
       result.push(leftArr[l++]);
     }
     else{
       result.push(rightArr[r++]);
    }
  }
  
  return result.concat(leftArr.slice(l)).concat(rightArr.slice(r));
}

var arrToBeSorted = [12, 11, 13, 5, 6, 7];

console.log(mergeSort(arrToBeSorted))

