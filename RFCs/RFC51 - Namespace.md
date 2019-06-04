RFC50: Name Space
================

命名空间

只有符号才区分大小写

模块名和命名空间不区分大小写

using Module 和 using module 效果相同


- `SomeName/`
  - `source/`
    - `__index__`(SomeName.source)
  - `library/`
    - `__index__`(SomeName.library)
    - `caseA.nr`(SomeName.library.caseA)
    - `caseB.nr`(SomeName.library.caseB)
  - `source.nyar`(SomeName.source)
  - `library.nr`(SomeName.library)
  - `project.arc`


moduleName 的库


项目名可以调, 不然就是文件夹名



从这个角度看, `source.nyar` 和 `source/__index__` 是等价的.


using namespace Lib;


using A B



## 

当以 using 执行时, 会导入被编译的模块: 

function, type, class, trait, macro, constant 是有效的, 会被编译并导出

value, var, expression, statement 编译时会看作死代码忽略, 不会被导出



public static class FunctionStore {
	static 
}


## 后缀检索

一般来说会自动检索 n, nr, nk 和 nyar 文件

- `*.n`: Nyar Optimized Binary
- `*.nr`: Nyar Vanilla
- `*.nk`: Nyar Notebook
- `*.nyar`: Nyar Valkyrie

如下后缀需要添加扩展:

- `*.ipynb`: JupyterParser
- `*.nb`: WolframParser

可以调
