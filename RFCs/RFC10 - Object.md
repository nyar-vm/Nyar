RFC10: Object
=============

- 提出时间: 2019-04-15
- 当前状态: Stage-0
- 语言实现: Valkyrie, Vanilla

## Introduction

Vanilla 并不是一个纯的 OOP 语言, Vanilla 中并非一切皆对象.

但只要看上去像是对象, 用起来也像是对象就够了, 可以说 Vanilla 是一种 duck object.




在 Vanilla 中没有什么意义, 因为出于性能等考虑,

继承树不能反应真实关系, 模块关系才是适用方法检索的依据.


字段 `__super__` 记录的并不是真实的父类, 而是,

用 `Type.BaseTrace()` 函数可以寻找真正的继承关系.

对于内置对象, 大多数情况下

真名 姓氏


`Object` 是名义上所有类的基类, 也是创建新的类时默认继承的类.





真名 ::


Object::



`is-a`
`is-from`



- Object
  - Number
  - String
  - Null
  - Nothing
  -

这些方法都是定义在 Object 上的.

但是也可以不从 Object 继承, 转而继承

Object 的 `__super__` 字段就是 ,

虽然没有了这些奇奇怪怪好用的 method, 但是一切都可以自定义.



```nyar
class A()
let structure A { }
```

这两种语法效果是类似的

Nyar 中你得用






