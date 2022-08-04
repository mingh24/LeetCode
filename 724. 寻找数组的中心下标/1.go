func pivotIndex(nums []int) int {
	pivot := -1
	totalSum := 0
	leftSum := 0

	for _, num := range nums {
		totalSum += num
	}

	for i, num := range nums {
		if leftSum*2 == totalSum-num {
			pivot = i
			break
		}

		leftSum += num
	}

	return pivot
}