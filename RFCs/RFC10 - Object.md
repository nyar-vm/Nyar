RFC10: Object
=============

- 提出时间: 2019-05-20
- 当前状态: Stage-0
- 语言实现: Valkyrie, Vanilla

## Introduction

Vanilla 并不是一个纯的 OOP 语言, Vanilla 中并非一切皆对象.

但只要看上去像是对象, 用起来也像是对象就够了, 可以说 Vanilla 是一种 duck object oriented language.

`Object` 是名义上所有类的基类, 也是创建新的类时默认继承的类.

## Reference

### Scala 

### Rust


## Details

顶级关键词有 trait 和 class, 另外 let 语义中有 structure 和 interface 的语法糖.

没有类似 scala 的 objcet, 匿名对象可以直接在字典上挂函数实现, 匿名类可以靠函数返回一个字典实现.

```nyar
class CustomObject extend SomeObject act SomeTrait AnotherTrait{
    @(Integer i, Dict os){
        pass;
    }
    custom modifier symbol;
    module::modifier function(Integer i);
    hidden from #(String s);
}
```

### Extend

可以简写成

class CustomObject(SomeObject) ~SomeTrait

可以进一步简写成:

class CustomObject(SomeObject, SomeTrait, AnotherTrait)

只有首个 Object 是继承, 其他都是实现.

### Modifier

最后一个符号为 symbol, 其他全是 modifier

只有一个符号会被解析为 symbol, 并加上默认的 modifier.

可以有任意多的修饰符, 修饰符是无序的, 并按照某种规则排序解析, 以解决冲突问题.

无法作为修饰符的符号有: 

- 结构关键词: class trait let 
- 控制流关键词: for while break return pass


### Lambda Method

如 from, into, create, destory 等 modifier, 实际不需要字段名.

但由于词法上不能直接省略, 会导致歧义, 所以用 # 代替.




如下四种方法等价:

```nyar
class Me {
    create __init__(Any[] args*){pass};
    create #(Any[] args*){pass};
    Me(Any[] args*){pass};
    @(Any[] args*){pass};
}
```


### Trait

Trait封装method和field的定义。

class只能继承一个class，但可以实现多个 trait。

Trait用来定义object类型支持的method.

Trait可以部分实现，没有构造函数.


### Inherit

在 Vanilla 中真实父类没有什么意义, 因为出于性能等考虑, 一般都是直接在 structure 上挂载 trait 然后规定名义父类 `__super__` 实现的.



`is-a`
`is-from`

是两回事

继承树不能反应真实关系, .


字段 `__super__` 记录的并不是真实的父类, 而是,

用 `Type.BaseTrace()` 函数可以寻找真正的继承关系.

对于内置对象, 大多数情况下



Object::


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





