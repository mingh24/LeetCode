func runningSum(nums []int) []int {
	res := make([]int, len(nums))

	if len(nums) > 0 {
		res[0] = nums[0]
	}

	for i := 1; i < len(nums); i++ {
		res[i] = res[i-1] + nums[i]
	}

	return res
}