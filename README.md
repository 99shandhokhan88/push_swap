# push_swap

"push_swap" is a computer science project that challenges students to create an algorithm in the C programming language. The objective is to sort a randomly ordered list of numbers in two stacks (Stack A and Stack B) using a limited set of predefined actions, such as swapping elements, rotating the stacks, and pushing elements between the stacks. The main goal of the project is to sort the numbers in Stack A with the fewest possible actions. Students must devise efficient sorting strategies to accomplish this within the project's action limit.

Here's my roadmap for "push_swap" project, broken down into a 20-day schedule based on my experience:

## Day 1 - Day 4: Understanding the Project and Problem**

I read the subject and I asked some of my peers for help. I spend the first few days fully understanding the requirements and constraints of the "push_swap" project. I made sure I'm comfortable with the allowed actions: sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, and pb. I reviewed the provided strategies for handling 3 random numbers and 5 random numbers, as they serve as the foundation for larger cases. After that I searched some infos on the web finding those resources:
- [Push Swap Medium Article](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
- [Push Swap YouTube Video 1](https://www.youtube.com/watch?v=OaG81sDEpVk)
- [Push Swap YouTube Video 2](https://www.youtube.com/watch?v=7h1s2SojIRw)
- [Push Swap YouTube Video 3](https://www.youtube.com/watch?v=XE4VP_8Y0BU)
- [Push Swap YouTube Video 4](https://www.youtube.com/watch?v=-qOVVRIZzao)
- [Push Swap Visualizer](https://push_swap.simple.ink/)
- [Push Swap Medium Article by Jamie Dawson](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Push Swap YouTube Video 5](https://www.youtube.com/watch?v=XE4VP_8Y0BU)
- [Push Swap YouTube Video 6](https://www.youtube.com/watch?v=JPyuH4qXLZ0)
- [QuickSort - The Best Sorting Algorithm](https://medium.com/human-in-a-machine-world/quicksort-the-best-sorting-algorithm-6ab461b5a9d0)
- [Longest Increasing Subsequence - Wikipedia](https://en.wikipedia.org/wiki/Longest_increasing_subsequence#:~:text=In%20computer%20science%2C%20the%20longest,not%20necessarily%20contiguous%2C%20or%20unique)
- [Initializing a Struct in C](https://stackoverflow.com/questions/330793/how-to-initialize-a-struct-in-accordance-with-c-programming-language-standards)
- [Exit() in C Standard Library](https://koor.fr/C/cstdlib/exit.wp)
- [GCC Compiler Options](https://www.rapidtables.com/code/linux/gcc/gcc-g.html)
- [Quick Sort Using Recursion](https://www.mycareerwise.com/programming/category/sorting/quick-sort-using-recursion)
- [Worst, Average, and Best Case Analysis of Algorithms](https://www.geeksforgeeks.org/worst-average-and-best-case-analysis-of-algorithms/?ref=lbp)
- [Introduction to Algorithms - GeeksforGeeks](https://www.geeksforgeeks.org/introduction-to-algorithms/?ref=lbp)
- [Analysis of Algorithms - Wikipedia](https://en.wikipedia.org/wiki/Analysis_of_algorithms)
- [Stack Sorting PDF](https://liacs.leidenuniv.nl/~rijnjnvan/ds2013/assets/opdrachten/opdracht1-stacksorting.pdf)
- [Sorting in C](https://www.educba.com/sorting-in-c/)
- [Quick Sort - GeeksforGeeks](https://www.geeksforgeeks.org/quick-sort/)
- [C Programming Structures](https://www.programiz.com/c-programming/c-structures)
- [Big O Notation Explanation](https://www.jesuisundev.com/comprendre-la-notation-big-o-en-7-minutes/#:~:text=C%27est%20quoi%20la%20notation,l%27efficacité%20de%20ton%20code.)
- [Why Big O Notation Matters](https://www.freecodecamp.org/news/big-o-notation-why-it-matters-and-why-it-doesnt-1674cfa8a23c/)
- [Quick Sort Algorithm Tutorial](https://www.tutorialspoint.com/data_structures_algorithms/quick_sort_algorithm.htm)
- [Quick Sort Tutorial](https://www.programiz.com/dsa/quick-sort)
- [In-Place QuickSort in Java](https://www.java67.com/2014/07/quicksort-algorithm-in-java-in-place-example.html)
- [Flowcharts - An Introduction](https://www.geeksforgeeks.org/an-introduction-to-flowcharts/)
- [Push Swap Tutorial](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
- [Insertion Sort - Wikipedia](https://en.wikipedia.org/wiki/Insertion_sort)
- [Insertion Sort YouTube Video](https://www.youtube.com/watch?v=kgBjXUE_Nwc)
- [Longest Increasing Subsequence DP](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/)
- [Random Number Generator](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php)
- [Exit(0) vs. Exit(1) in C/C++](https://www.geeksforgeeks.org/exit0-vs-exit1-in-c-c-with-examples/)


After all this, considering that I pushed so_long and I had only 20 days until the end of November 2023, I find that the most fast, clear, pleasant and smart way for this project is to follow the guide of one of my friends at 42 called Lnicoter:
- [push_swap guide that I will follow](https://github.com/NicoTerabyte/Push_swap/blob/main/Push_swap/english_guide.pdf)


The idea is simple, You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers. You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest. There are only a few moves you’re allowed to used to manipulate the stacks that we’re going to call “Actions”. The main goal of this project is to organize Stack A in as few actions as possible.











**Day 4 - Day 5: Implementation for 3 Random Numbers**

- Begin coding the sorting algorithm for 3 random numbers.
- Test your code with various scenarios and ensure it sorts the numbers correctly in a minimal number of actions (2 or less).

**Day 6 - Day 8: Implementation for 5 Random Numbers**

- Extend your code to handle 5 random numbers.
- Apply the logic mentioned for moving the first two numbers to Stack B and sort the rest in Stack A.
- Test your implementation thoroughly.

**Day 9 - Day 11: Implementation for 100 Random Numbers (Initial Approach)**

- Implement the sorting algorithm for 100 random numbers, initially using the Insertion Sort algorithm.
- Focus on getting the basic functionality working before optimization.

**Day 12 - Day 15: Optimization for 100 Random Numbers**

- Refine your code for 100 random numbers using the chunking strategy you outlined.
- Test and compare the efficiency of your optimized approach with the initial Insertion Sort method.
- Make sure it stays within the action limit of 12.

**Day 16 - Day 18: Implementation for 500 Random Numbers**

- Apply the optimized strategy for 100 random numbers to handle 500 random numbers.
- Make any necessary adjustments based on the larger dataset.

**Day 19 - Day 20: Testing and Fine-Tuning**

- Perform comprehensive testing with various input scenarios for all test cases: 3, 5, 100, and 500 random numbers.
- Fine-tune your code, making it more efficient and optimizing action usage.
- Debug any issues that arise during testing.

During the entire 20-day period, you should be actively using the push_swap visualizer tool to visualize and analyze the actions performed by your code, making it easier to spot any inefficiencies or errors.

This roadmap should help you make steady progress and successfully complete your "push_swap" project within the given time frame. If you encounter any challenges or need further assistance along the way, don't hesitate to seek help and guidance. Good luck with your project!
