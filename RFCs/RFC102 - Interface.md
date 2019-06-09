RFC102: Interface
=================

只包含方法的 trait 叫 interface

用这一关键词只是为了强调, 告诉 ide 和解释器添加字段请报错.

编译的话和用 trait 声明是完全一样的

编译器完全能识别出这种特化, 运行效率也是一模一样的.

## Rules

### 冲突合并规则

既然是 trait 那就支持合成, 冲突的本质是 nyar 不支持返回值多态

如果自动合并为 union type 大多数情况下会导致潜在问题, 因此为了明确编写者的目的, 手动指定是一个安全且清晰有效的解决方案.

方法的冲突合并规则为:

**方法同返回类型保留, 方法不同返回类型消去, 方法特别声明优先**

举个例子:

```nyar
interface A {
	a(): String
	b(self): String
	c(self, Integer x): Object
}
interface B {
	a(): Integer
	b(self): String
	c(self, Integer x): Object
}
interface C(A, B){
	c(self, String x): Object
}
```

等价于

```nyar
interface A {...}
interface B {...}
interface C {
	b(self): String
	c(self, Integer x): Object
	c(self, String x): Object
}
```

a 返回值类型不同, 于是被消去了

b 返回值类型相同, 得到了保留

`c(self, Integer x)` 和 `c(self, String x)` 是两个不同的函数

而 c 是特别声明, 于是不管原来是什么, 直接覆盖.

### 空初始化规则

structure 是 trait 所以可以空初始化.

如果这个类型是 Unit 那么会直接实例化这个类型.

如果这个类型有零元, 那么会实例化零元, 一般来说是 Nothing 型.

如果没有零元, 那么就填充 null.

### 函数初始化规则

与其说 structure 也可以当函数用, 不如说函数参数体本身就是匿名 structure.




