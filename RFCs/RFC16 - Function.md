


## Funcion

含参数, 返回值为 `Null`

注意, 作用域里表达式是惰性的, 如果要即性求值则使用 const 标记.

```nyar
def f(x): x^2
end
```

f(x) = x^2

```nyar
def doSomething(x,*args,**kws){

}
```

|     A |                |
| ----: | :------------- |
|   `x` | Pattern x      |
|  `x^` | Symbol x       |
|  `x*` | unnamed params |
| `x**` | named params   |



prefix +(s){


}



### Mathematica

Mathematica 的函数参数基于模式匹配

匹配, 多匹配, 选项模式

```Mathematica
Optional[f] = {"k" -> v}
f[x, y_, z__, o: OptionalPattern[]] := {x, y, {z}, {o}}
```


### Python

位置参数、默认参数、可变参数、命名关键字参数、关键字参数

完全不知道接受了什么奇怪的参数

## Design

Nyar 只有**位置参数** (如 `x, y`), **变长参数** (如 `args`), **具名参数** (如 `kvs`).


```
def f(typed x, typed y, typed[] args*, traited kvs**)
out {typed, typed, typed[], traited}:
    return x, y, args, kvs
end
```

Nyar 没有默认参数可选参数

这俩可以通过 trait 实现


一般不建议写函数签名, 太长了



f(a,b,c,f,g)

虽然麻烦了点, 但是便于统一管理, 非常清晰.


