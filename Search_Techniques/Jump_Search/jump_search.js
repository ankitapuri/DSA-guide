
// jump search using Javascript
var Searcharray = [2, 6, 8, 20,30,55,97,200,76,127,900];

console.log("Found at position :" + jumpSearch(Searcharray, 2));
console.log("Found at position :" + jumpSearch(Searcharray, 97));
console.log("Found at position :" + jumpSearch(Searcharray, 200));
console.log("Found at position :" + jumpSearch(Searcharray, 900));

function jumpSearch(Searcharray, Searchvalue){
  var length = Searcharray.length;
  var step = Math.floor(Math.sqrt(length));
  var index = Math.min(step, length)-1;
  var lowerBound = 0;
  while (Searcharray[Math.min(step, length)-1] < Searchvalue)
  {
    lowerBound = step;
    step += step;
    if (lowerBound >= length){
      return -1;
    }
  }
  
  var upperBound = Math.min(step, length);
  while (Searcharray[lowerBound] < Searchvalue)
  {
    lowerBound++;
    if (lowerBound == upperBound){
      return -1;
    }
  }
  if (Searcharray[lowerBound] == Searchvalue){
     return lowerBound;
  }
  return -1;
}