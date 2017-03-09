//var x: Int = 4
val y = 4

def square(n: Int): Int = n * n
square(3)

def plus1(n: Int): Int = n + 1

def twice(n: Int, f: Int => Int) = {
  val once = f(n)
  f(once)
}

twice(3, square)

def nTimes(x: Int, n: Int, f: Int => Int): Int =
  if (n == 0) x
  else nTimes(f(x), n -1, f)

nTimes(3, 5, plus1)

val ls = List(7, 69, 255, 108, 13, 420)

ls.filter(x => x > 100).map(x => "#" + x).take(2)

case class Cl(x: Int) {
  lazy val next: Cl = new Cl(x + 1)
}

val cl = new Cl(3)
cl.next.next.next.x