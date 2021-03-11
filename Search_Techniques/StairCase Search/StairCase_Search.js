var arr = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16],[23,24,25,26]]; 
var search=26;
var n = arr.length-2;
var rows = arr.length;
var test = matchedValue(arr,n,search);
console.log(test);
function matchedValue (arr,n, m) {
var i =0;
 while ( i < rows  && n>= 0) {
   if (arr[i][n] === m) {
     return {
      row: i,
      col : n
     };
   }
   if (arr[i][n] >  m) {
    n--;
   } else {
    i++;
   }
}
return "Element is not found ";
}
