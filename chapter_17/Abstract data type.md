## Abstract data type

### 抽象的数据类型（ADT）

#### **什么是类型？**

**类型特指两类信息**：**属性**和**操作**。例如，int 类型的属性是它代表一个整数值，因此它共享整数的属性。允许对 int 类型进行算术操作：改变 int 类型值的符号、两个 int 类型值相加、相减、相乘、相除、求模。当声明一个 int 类型的变量时，就表示了只能对该变量进行这些操作。

#### **如何定义类型？**

计算机科学领域已开发了一种定义新类型的好方法，用 3 个步骤完成从抽象到具体的过程。

1. **提供类型属性和相关操作的抽象描述**。这些描述既不能依赖特定的实现，也不能依赖特定的编程语言。这种正式的抽象描述被称为“**抽象数据类型**（**ADT**）”。
2. **开发一个实现 ADT（抽象数据类型） 的编程接口**。也就是说，**指明如何存储和执行所需操作的函数**。例如在C中，可以提供结构定义和操控该结构的函数原型。这些作用于用户定义类型的函数相当于C基本类型的内置运算符。需要使用该新类型的程序员可以使用这个接口进行编程。
3. **编写代码实现接口**。这一步至关重要，但是使用该新类型的程序员无需了解具体的实现细节。