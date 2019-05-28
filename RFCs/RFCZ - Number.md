RFC0: Number
============

- 提出时间: 2019-03-15
- 当前状态: Stage-0
- 语言实现: Valkyrie, Vanilla

## Introduction

模块 `Object::Number` 定义了所有基本的数值类型.

还有同名的抽象类

所有子类都有向上转义的 *methods*, 但是没有同级转换的 *methods*

## Classes

在导入 `Object::Number` 时;

会添加以下 *classes*:

- Object::Number(Abstract)
  - Byte
    - Unsigned64
    - Unsigned32
    - Unsigned16
  - Integer
    - Integer64
    - Integer32
    - Integer16
  - Decimal
    - Float256
    - Float128
    - Float64
    - Float32
    - Float16
  - Fraction
  - Complex
    - Complex64
    - Complex32
  - Quaternion
    - Quaternion64
    - Quaternion32

向其他命名空间注入以下 *class*:

- Object::Array
  - Bytes


## Functions

在导入 `Object::Number` 时;

会向 `Checker` 命名空间注入以下 *function*:

- `isNumber()`
- `isInteger()`
- `isDecimal()`
- `isFraction()`
- `isComplex()`
- `isQuaternion()`

会向 `Converter` 命名空间注入以下 *function*:

- `toInteger()`
- `toByte()`
- `toDecimal()`
- `toComplex()`
- `toQuaternion()`
- `toInteger64()`
- `toInteger32()`
- `toInteger16()`
- `toUnsigned64()`
- `toUnsigned32()`
- `toUnsigned16()`
- `toFloat256()`
- `toFloat128()`
- `toFloat64()`
- `toFloat32()`
- `toFloat16()`
- `toFraction()`
- `toComplex64()`
- `toComplex32()`
- `toQuaternion64()`
- `toQuaternion32()`


## Alias

```nyar
trait Number(AbstractObject);
```

## Methods

| Modifier | Method          | Detail               |
| :------- | :-------------- | :------------------- |
| new      | `toString()`    |                      |
| override | `__attribute__` | 添加 `numberic` 属性 |

