/*
  We can easily write a function that adds 1 to any number.
  Recall that the infix operator (+) will add two integers.
 */
let add1 = x => x+1;

/*
  Let's write a function that squares its argument (multiplies it by itself)
 */
let square = x => x*x;

/*
  Functions are first class in Reason. This means that you can take
  a function and pass it around as an argument to other functions.

  Let's write a function named twice: it will take a function and apply
  that function to itself two times.

  For example, if we wanted to make an "add2" function, we could do it
  by writing:
  let add2 = twice(add1)
 */
let twice = (x) => x*2;

/* Now that we have twice, write add2 and raiseToTheFourth */
let add2 = y => add1(y) + 1; /* Hint: use add1 */

let raiseToTheFourth = y => square(y) * square(y); /* Hint: use square */

Test.runAll([
  (add1(4) == 5, "add1"),
  (square(4) == 16, "square"),
  (square(-4) == 16, "square"),
  (twice(3) == 6, "twice"),
  (add2(1335) == 1337, "add2"),
  (raiseToTheFourth(1) == 1, "raiseToTheFourth"),
  (raiseToTheFourth(10) == 10000, "raiseToTheFourth"),
]);