RFC1: Lambda Fuction
====================

- 提出时间: 2019-04-15
- 当前状态: Stage0

## Motivation

## References

参考如下语言的设计:

### Python Style

Python 语言中只有一种匿名函数表示法.

Python 语言使用 lambda 作为关键词, : 界定参数, 接着到结尾为止都是表达式.

#### 范例:

```python
Y = lambda b:((lambda f:b(lambda *x:f(f)(*x)))((lambda f:b(lambda *x:f(f)(*x)))))
factorialY = Y(lambda f: lambda n: (1 if n<2 else n*f(n-1)))
fibonacciY = Y(lambda f: lambda n: 0 if n == 0 else (1 if n == 1 else f(n-1) + f(n-2)))
```

#### 缺点:
 - 不能换行

### ECAMScript Style

`ECAMScript` 中有三种匿名函数表示法.

第一种 function 形式



第二种 arrow 形式

```
(x, y) => { return x + y; }
```



#### 范例:

```javascript
var Y = f => (x => x(x))(y => f(x => y(y)(x)));
var factorialY = Y(f => n => n == 1 ? n * f(n-1) : 1);
var fibonacciY = Y(f => n => n <= 1 ? 1 : f(n-1) + f(n-2));
```

#### 缺点:
 - 需要显式 return
 - 不支持 params => {object:literal} 的写法
 - 由于 ASI 机制, 参数和 `=>` 之间不能换行

### Scala Style


```scala
def Y[A,B](f: (A=>B)=>(A=>B)) = {
	case class W(wf: W=>A=>B) {
		def apply(w: W) = wf(w)
	}
	val g: W=>A=>B = w => f(w(w))(_)
	g(W(g))
}
val factorialY = Y[Int, Int](f => i => if (i == 1) 1 else f(i - 1) * i)
val fibonacciY = Y[Int, Int](f => i => if (i <= 1) i else f(i - 1) + f(i - 2))
```

### Wolfram Style

Wolfram 语言中有三种匿名函数表示法.

#### 范例:

```mathematica
Y = Function[f,#[#]&[Function[g,[g[g][##]&]]]];
```

`wolfram` 中可以使用 #0 代表自身, 不需要使用 Y 组合子来匿名递归.

```mathematica
(*With Y-Combinator*)
factorialY = Y[Function[f, If[# < 1, 1, # f[# - 1]]&]];
fibonacciY = Y[Function[f, If[# < 2, #, f[# - 1] + f[# - 2]]&]];
(*Without Y-Combinator*)
factorial = If[#==1,1,# #0[#-1]]&;
fibonacci = If[#<=1,1,#0[#-1]+#0[#-2]]&;
```

### Racket Style

```racket
(define Y (λ(f)((λ(x)(f (x x)))(λ(x)(f (x x))))))
(define factorialY (Y (λ(f) (λ(n) (if (== n 1) 1 (* n (f (- n 1))))))))
(define fibonacciY (Y (λ(f) (λ(n) (if (<= n 1) n (+ (f (- n 1)) (f (- n 2))))))))
```


## Design
