Contracts and other legal documents are often dated in the following way:
Dated this __________ day of __________ , 20__ .<br>
Let’s write a program that displays dates in this form. We’ll have the user enter the
date in month/day/year form, then we’ll display the date in “legal” form:<br> <br>
*Enter date (mm/dd/yy): 7/19/14 <br>
Dated this 19th day of July, 2014.<br><br>*
We can get printf to do most of the formatting. However, we’re left with two
problems: how to add “th” (or “st” or “nd” or “rd”) to the day, and how to print the
month as a word instead of a number