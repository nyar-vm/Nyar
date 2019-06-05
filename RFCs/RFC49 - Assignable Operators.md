




a = 1
a.b = 1
a.b() = f
a[1]=1





```antlr
assignModify: assignLHS mod_assign Set assignRHS;
```

### Feasible Operators

| Operator | Name | Remark |
| :------- | :--- | :----- |
| `+=`     |
| `-=`     |
| `*=`     |
| `/=`     |

a + =1


### Infeasible Operators

 | Operator | Name | Remark   |
 | :------- | :--- | :------- |
 | `.=`     |      | 不可重载 |
 | `:=`     |      | 不可重载 |
 | `!=`     |
 | `>=`     |
 | `<=`     |

