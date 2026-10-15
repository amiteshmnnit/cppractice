# Practice notes

## Edge-case checklist
- Smallest input (n = 1, value = 1 or 2)
- Largest input (check for overflow, use long long)
- All values equal
- Already sorted / reverse sorted
- Zero and negative numbers

## Problem log

### 4A Watermelon (800) - 15 Oct 2026
- Verdict: WA on test 5, then Accepted
- Bug: didn't cater the logic for smallest even number in which pattern fails
- Breaking input: 2
- Lesson: if range is small - dry run on your own / check boundary conditions

### 71A Way Too Long Words (800) - 15 Oct 2026
- Verdict: Accepted first try
- Lesson: revisited the string usage - .length(), string s[5]=>s[0][1]=>1st string 2nd character.