// Question 1.
// 3456 b_10 --> 1101 1000 0000 b_2
// 2048+
// 1024+
//  256+
//  128

// Question 2.
// (a) line(1) cd to the current directory ie no change
//     line(3) cd to the root directory (~ is an alias)
// omitting an argument to cd does nothing
//
// (b) ./some_dir; /u/d/rachadyo/Documents/some_dir
//     list the contents of the current directory (ls .)
//
// (c)
// Documents
// |
// |--> some_dir
// |
// |--> another_dir
// |
// |--> third_dir
//      |
//      |--> inside_dir
//
// Line 14 is the same as 15
// Line 16 prints the parent directory list
// ls and pwd dont change current directory
//

// Question 3
// gcc filename.c -o output.out
// ./output.out
// ./third_dir/output.out
