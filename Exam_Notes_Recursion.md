# DSA Exam Notes - Recursion & Backtracking

## 1. Recursion kya hoti hai?

- Recursion tab hoti hai jab ek function apne aap ko call karta hai.
- Iska use problem ko chhote parts mein solve karne ke liye hota hai.
- Har recursive call ke liye ek base case hona chahiye.

## 2. Important terms

- Base Case: Jab recursion stop ho jaye.
- Recursive Case: Problem ko chhota karke phir se call karna.
- Call Stack: Function calls ka memory stack.

## 3. Recursion ke rules

1. Base case likho.
2. Problem ko smaller version mein todho.
3. Recursive call ko base case ki taraf le jao.
4. Overlapping calls se bachao.

## 4. Common examples

- Factorial
- Fibonacci
- Sum of digits
- Power calculation
- Binary search (recursive)

## 5. Time and Space Complexity

- Factorial: O(n) time, O(n) stack
- Fibonacci: O(2^n) naive, O(n) optimized DP
- Binary search: O(log n)

## 6. Types of recursion

- Direct recursion
- Indirect recursion
- Tail recursion
- Head recursion

## 7. Backtracking kya hoti hai?

- Solution ko step by step build karte hain.
- Agar current choice galat hoti hai to wapas jaate hain.
- Isse searching aur combination problems mein use hota hai.

## 8. Backtracking ke important points

- Choice choose karo
- Constraint check karo
- Agar valid hai to recurse karo
- Agar fail ho to undo karo

## 9. Famous problems

- Permutations
- Subsets
- N-Queens
- Rat in a Maze
- Sudoku

## 10. Example: Factorial

```cpp
int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}
```

## 11. Example: Permutations

- Ek element choose karo
- Baki elements ke saath recursion karo
- Backtrack karke next choice lo

## 12. Exam tips

- Base case hamesha dhyan mein rakho
- Stack overflow ka dhyan rakho
- Time complexity samjho
- Dry run karna seekho
- Backtracking mein undo/restore zaroori hota hai
