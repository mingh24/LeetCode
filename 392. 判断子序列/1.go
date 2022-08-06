func isSubsequence(s string, t string) bool {
	if len(s) > len(t) {
		return false
	}

	si := 0
	ti := 0

	for si < len(s) && ti < len(t) {
		if s[si] == t[ti] {
			si++
		}

		ti++
	}

	return si >= len(s)
}