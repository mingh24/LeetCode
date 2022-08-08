func longestPalindrome(s string) int {
	maxLength := 0
	charCount := [128]int{}

	for _, ch := range s {
		charCount[ch]++
	}

	for _, count := range charCount {
		maxLength += count / 2 * 2
	}

	if maxLength != len(s) {
		maxLength++
	}

	return maxLength
}