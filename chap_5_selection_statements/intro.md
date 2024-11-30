Although C has many operators, it has relatively few statements. We’ve encountered just two so far: the return statement and the expression statement. Most of
C’s remaining statements fall into three categories, depending on how they affect
the order in which statements are executed: <br>
■ **Selection statements:** The if and switch statements allow a program to
select a particular execution path from a set of alternatives. <br>
■ **Iteration statements**. The while, do, and for statements support iteration
(looping).<br>
■ **Jump statements.** The break, continue, and goto statements cause an
unconditional jump to some other place in the program. (The return statement belongs in this category, as well.)<br>
The only other statements in C are the compound statement, which groups several
statements into a single statement, and the null statement, which performs no
action.<br>
This chapter discusses the selection statements and the compound statement.
(Chapter 6 covers the iteration statements, the jump statements, and the null statement.)<br> Before we can write if statements, we’ll need logical expressions: conditions that if statements can test.<br> Section 5.1 explains how logical expressions are
built from the relational operators (<, <=, >, and >=), the equality operators (==
and !=), and the logical operators (&&, ||, and !).<br> Section 5.2 covers the if statement and compound statement, as well as introducing the conditional operator
(?:), which can test a condition within an expression. <br>Section 5.3 describes the
switch statement.