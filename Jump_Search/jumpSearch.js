function jumpSearch(arr, target) {

	let len = arr.length

	//Finding the block size for the jump
	let step = Math.floor(Math.sqrt(len));

	//blockStart is the starting index of the block that our target will be in
	let blockStart = 0, currentStep = step;

	while (arr[Math.min(currentStep, len) - 1] < target)
	{
		//as long as we haven't found the block, we move to the next block and check again
		blockStart = currentStep;
		currentStep += step;

		//If the next block is pass the length of the array, target doesn't exist, return -1
		if (blockStart >= len)
			return -1;
	}

	//Linear Search within the block until we find the possible index for the target
	while (arr[blockStart] < target)
	{
		blockStart++;

		//If we reached the next block or end of array, the target doesn't exist
		if (blockStart == Math.min(currentStep, len))
			return -1;
	}

	//Check if the element is the target, if not, target doesn't exist.
	if (arr[blockStart] == target)
		return blockStart
	else
		return -1;
}