func isIsomorphic(s string, t string) bool {
	sMap := make(map[byte]byte)
	tMap := make(map[byte]byte)

	for i := range s {
		if _, ok := sMap[s[i]]; !ok {
			sMap[s[i]] = t[i]
		}

		if _, ok := tMap[t[i]]; !ok {
			tMap[t[i]] = s[i]
		}

		if sMap[s[i]] != t[i] || tMap[t[i]] != s[i] {
			return false
		}
	}

	return true
}