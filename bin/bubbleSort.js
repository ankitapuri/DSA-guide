//ES6 syntax, doube arrow functions
let bubbleSort = (arr) => {
    let len = arr.length;
    for (let i = 0; i < len; i++) {
        for (let j = 0; j < len; j++) {
            if (arr[j] > arr[j + 1]) {
                let tempArr = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempArr;
            }
        }
    }
    return arr;
};

//driver to test function
bubbleSort([2,3,34,4,5,3,1,213,13,2])
//output: [1, 2, 2, 3, 3, 4, 5, 13, 34, 213]
