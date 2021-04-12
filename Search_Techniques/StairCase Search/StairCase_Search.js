var arr = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16],[23,24,25,26]]; //INPUT ARRAY
var search=26;// ELEMENT TO BE SEARCHED IN 2D ARRAY
var n = arr.length-2;
var rows = arr.length;
var test = matchedValue(arr,n,search);//CALLING A FUNCTION WHICH RETURNS OBJECT WHICH SHOWS RESPECTIVE ROW AND COLUMN 
console.log(test);// PRINT REQUIRED OBJECT
function matchedValue (arr,n, m) {// FUNCTION WHICH FINDS RESPECTIVE ROW AND COLUMN
var i =0;
 while ( i < rows  && n>= 0) {
  
   if (arr[i][n] === m) {
    //HERE WE WILL RETURN THE REQUIRED OBJECT
     return {
      row: i,
      col : n
     };
   }
   if (arr[i][n] >  m) {
    n--;//IF VALUE IS LARGER THAN VALUE TO BE SEARCHED THEN DECREASE THE COLUMN
   } else {
    // IF VALUE IS SMALLER THAN VALUE TO BE SEARCHED THEN INCREASE THE ROW
    i++;
   }
}
return "Element is not found ";// IF THE WHILE LOOP ENDED, THEN THERE IS NO ELEMENT PREASENT AND RETURN THE STRING
}
