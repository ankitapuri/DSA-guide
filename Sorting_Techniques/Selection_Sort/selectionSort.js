function selectionSort(items) {
	var length = items.length;
	for (var i = 0; i < length - 1; i++) {
		var min = i; 
		for (var j = i + 1; j < length; j++) { 
			if (items[j] < items[min]) { 
				min = j; 
			}
		}
		if (min != i) {
			var tmp = items[i];
			items[i] = items[min];
			items[min] = tmp;
        }
    }
    return items;
}

var sorted = selectionSort([34,5,6,2,99,5,4,2,56,1]);
console.log(sorted);