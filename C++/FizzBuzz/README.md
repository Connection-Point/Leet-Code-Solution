### FizzBuzz in Python

```python
class Solution {
 public:
  vector<string> fizzBuzz(int n) {
    vector<string> ans;

    for (int i = 1; i <= n; ++i) {
      string s;
      if (i % 3 == 0)
        s += "Fizz";
      if (i % 5 == 0)
        s += "Buzz";
      ans.push_back(s.empty() ? to_string(i) : s);
    }

    return ans;
  }
};


**Explanation:**

The code is a function that takes an integer `n` as input and returns a vector of strings. The vector contains the numbers from 1 to `n`, with the following modifications:

* If a number is divisible by 3, the string in the vector will be "Fizz".
* If a number is divisible by 5, the string in the vector will be "Buzz".
* If a number is divisible by both 3 and 5, the string in the vector will be "FizzBuzz".
* Otherwise, the string in the vector will simply be the number itself.

The code works by first creating an empty vector of strings. Then, it iterates from 1 to `n`, and for each number `i`, it does the following:

* It creates a string `s`.
* If `i` is divisible by 3, it appends "Fizz" to `s`.
* If `i` is divisible by 5, it appends "Buzz" to `s`.
* If `s` is empty, it simply appends the number `i` to `s`.
* It pushes `s` onto the vector of strings.

Finally, the code returns the vector of strings.

**Time complexity:** O(n)

**Space complexity:** O(n)


I hope this is helpful! Let me know if you have any other questions.
