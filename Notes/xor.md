✅ Use XOR when:
1. You're told every number appears twice, except one (or two)
Classic example:

"Every element appears twice except one — find that one."

Apply XOR to cancel out duplicates.

✅ XOR will leave you with the unique number.

cpp
Copy
Edit
int ans = 0;
for (int x : nums) ans ^= x;
return ans;
2. You need to cancel out pairs
XOR is great for canceling because:

x ^ x = 0

x ^ 0 = x

So if things are appearing in pairs or you need to undo something, XOR often works.

3. Bit manipulation problems
If the problem talks about bits, or tells you to do it without using extra space, that often hints at XOR.

❌ Don't use XOR when:
You need counts, ordering, or combinations.

XOR won't help if the numbers appear an unknown number of times (like 3 or 4 times).

XOR won’t sort or group — it’s just good at canceling pairs.

🔍 Tip: Look at the constraints or keywords
If the problem says:

"Linear time and constant space"

"All elements appear twice except one"

"Find the single number"

…you should immediately think of XOR.