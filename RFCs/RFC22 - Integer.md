RFC4.1: Integer
===============





### Introduction



都有  方法


from #(Integer x)

into #(Integer x)

toInteger

Integer

### Literal

Integer 类型可以直接输入得到



## Alias

Valkyrie 中定义了如下结构

```nyar
trait AbstractInteger(ValueType);
type Integer64: AbstractInteger(64)
type Integer32: AbstractInteger(32)
type Integer16: AbstractInteger(16)
type Integer: AbstractInteger(0)
```

Vanilla 中定义了以下别名:

```nyar
type! i64: Integer64
type! i32: Integer32
type! i16: Integer16
type! int: Integer
```

| Alias |                        Min |                       Max |
| :---- | -------------------------: | ------------------------: |
| int   |                `-infinity` |               `+infinity` |
| i64   | `-922,3372,0368,5477,5808` | `922,3372,0368,5477,5807` |
| i32   |            `-21,4748,3648` |            `21,4748,3647` |
| i16   |                  `-3,2768` |                 `+3,2767` |

## Methods

| Modifier | Method          | Detail               |
| :------- | :-------------- | :------------------- |
| new      | `toString()`    |                      |
| override | `__attribute__` | 添加 `numberic` 属性 |




