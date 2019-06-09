RFC101: Trait
=============

trait 是用来描述某些特性的, 本身不能挂实现.

trait 倾向于形容词命名, 而 class 倾向于名词命名.

### Immutable

trait 是不可变的, 一经声明, 不能动态的往里面添加新的属性.

trait 的声明存在于 typespace 而非 namespace.

一般可以合成一个新的, 然后用 delete 修饰符去掉不要的, 然后添加你要的.

真的要大改你可以删除同名 trait 然后重新声明一个新的, 然后复制源码.

虽然 trait 不可变, 但是 trait 的实例是可变的

即便什么实现也没有, trait 还是可以通过空初始化机制实例化, 继而把合法字段挂上去或者覆盖掉.

很不推荐这种做法, 但是确实存在这种场景.

### Compound

trait 没有继承的概念, 只有组合或者说合成的概念.

如下语法可以获得带多个 trait 属性的新 trait.

```nyar
trait A act B C D E { };
trait A(B, C, D, E) { };
```

由于 nyar 不支持返回值多态, 所以同名字段有可能冲突

冲突解决的细则参见 [RFC102]() 与 [RFC103]().

### Duck Type

Trait 机制是天生的 duck type

一个 class 要能实例化, 必须实现 trait 中规定的所有属性.

无论继承关系如何, 无论类型表达如何, 只要标记了某种 trait 就一定能调用到你想要的方法.
