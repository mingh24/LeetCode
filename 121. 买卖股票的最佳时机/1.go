func minInt(nums ...int) int {
	if len(nums) == 0 {
		return 0
	}

	min := nums[0]

	for i := 1; i < len(nums); i++ {
		if nums[i] < min {
			min = nums[i]
		}
	}

	return min
}

func maxInt(nums ...int) int {
	if len(nums) == 0 {
		return 0
	}

	max := nums[0]

	for i := 1; i < len(nums); i++ {
		if nums[i] > max {
			max = nums[i]
		}
	}

	return max
}

func maxProfit(prices []int) int {
	maxProft := 0
	minToBuy := prices[0]

	for i := 1; i < len(prices); i++ {
		minToBuy = minInt(minToBuy, prices[i])
		maxProft = maxInt(maxProft, prices[i]-minToBuy)
	}

	return maxProft
}