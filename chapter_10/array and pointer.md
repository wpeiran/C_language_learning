### 数组

- **数组是由数据类型相同的一系列元素组成**。
- 需要使用数组时，通过声明数组告诉编译器数组中内含多少元素和这些元素的类型。编译器根据这些信息正确地创建数组。
- 普通变量可以使用的类型，数组元素都可以用。
- 数组通常被用来存储程序需要的数据。
- 使用**符号常量表示数组大小**，是比较推荐且常用的的做法。

### 使用数组的注意事项

- **使用数组前必须先初始化它**。在使用数组元素之前，必须先给它们赋初始值。否则，编译器将使用的值是内存相应位置上的现有值。 
- **初始化列表中的项数应与数组的大小一致**。当初始化列表中的值少于数组元素个数时，编译器会把剩余的元素都初始化为0。
- 如果不初始化数组，数组元素和未初始化的普通变量一样，其中储存的都是垃圾值；如果部分初始化数组，剩余的元素会被初始化为 0。
- C 不允许把数组作为一个单元赋给令一个数组，除初始化外，也不允许使用花括号列表的形式赋值。
- 在使用数组时，要防止数组下标超出边界。也就是说，必须确保下标是有效值。**使用越界的数组下标会导致程序改变其他变量的值**。

### 初始化数组

初始化数组的方式：用以逗号分隔的列表（用花括号括起来）来初始化数组，各值之间用逗号分隔。在逗号和值之间可使用空格。

```c
int main(void)
{
 int powers[8] = {1,2,4,6,8,16,32,64}; // 从 ANSI C 开始支持这种初始化方式
 const int powers[8] = {1,2,4,6,8,16,32,64}; // 使用 const 初始化只读数组
}
```

### 指定初始化器

**指定初始化器一种方便的指定数组中某一元素的方法**。而不必像传统的数组初始化一样去指定全部的元素。

示例，初始化数组中的任意元素：

```c
int arr[6] = {[5] = 212};  // 把 arr[5] 初始化为 212
```

#### 指定初始化器的两个重要特性：

- 第一，如果指定初始化器后面有更多的值，那么后面这些值将被用于初始化指定元素后面的元素。
- 第二，如果再次初始化指定的元素，那么最后的初始化将会取代之前的初始化值。

### 给数组元素赋值

**声明数组后，可以借助数组下标（或索引）给数组元素赋值**。例如，下面的程序段给数组的所有元素赋值：

```c
// 给数组的元素赋值
#include <stdio.h>
#define SIZE 50
int main(void)
{
    int counter, evens[SIZE];
    
    for (counter = 0; counter < SIZE; counter++)
        evens[counter] = 2 * counter;
    ......
}
```

### 多维数组

多维数组就是**嵌套数组**，即一个数组中的每个元素都是一个数组。声明和调用方式如下：

```c
float rain[5][12]; // 内含5个数组元素的数组，每个数组元素内含12个float类型的元素
rain[0][0]; // 调用第0个数组元素的第0个元素
```

### 指针和数组

#### 为什么使用指针呢？

> 因为计算机的硬件指令非常依赖地址，指针在某种程度上把程序员想要传达的指令以更接近机器的方式表达。因此，使用指针的程序更有效率。

- 指针提供了一种<u>以符号形式使用地址的</u>方法。

#### C 中指针和数组的关系

- **在 C 中，数组名是该数组首元素的地址**。

  - ```c
    // 如果 flizny 是一个数组，下面的语句成立：
    flizny == &flizny[0] // 数组名是该数组首元素的地址
    ```

- **在 C 中，指针加 1 指的是增加一个存储单元**。**对数组而言，这意味着加 1 后的地址是下一个元素的地址**，而不是下一个字节的地址。这是为什么必须声明所指向对象类型的原因之一。只知道地址不够，因为计算机要知道准出对象需要多少字节（即使指针指向的是标量变量，也要知道变量的类型，否则 *pt 就无法正确的取回地址上的值）。

![](C:\Users\Administrator\Desktop\C语言特性\数组和指针加法_meitu_1.jpg)

- **指针的值是“它所指向对象的地址”**。**地址的表示方式依赖于计算机内部的硬件**。许多计算机（包括PC和Mac）都是**按字节编码**，**意思是内存中的每个字节都按顺序编号**。这里，一个较大对象的地址（如 double 类型的变量）通常是该对象第一个字节的地址。
- 在指针前面使用 `*` 运算符可以得到<u>该指针所指对象的</u>值。

#### C 语言的灵活性

```c
dates + 2 == &date[2] 		// 相同的地址
*(dates + 2) == dates[2]	// 相同的值
```

以上的关系等式体现了 C 语言的灵活性；同时也表明了数组和指针的关系十分密切，可以使用指针标识数组的元素和获得元素的值。

**从本质上看，就是“同一个对象有两种表示法”**。数组的元素可以用**索引（数组表示法）**或**指针（指针表示法）**的方式去表示数组中的同一个元素。

- **数组表示法和指针表示法**，在编译器编译这两种写法时生成的代码相同。也就是说，**它们是两种等效的方法**。—— 它们**彼此之间可以互换表示**（如上的代码示例）。**结合实际情况去选择表达方式**。

### 函数、数组和指针

**函数要处理数组必须知道何时开始、何时结束**。可实现的两种方式方式：

- **数组表示法**：函数使用一个指针形参数组的开始，用一个整数形参表明待处理数组的元素的个数（指针形参也表明了数组中的数据类型）。
- **指针表示法**：函数使用两个指针参数，第1个指针指明数组的开始出（与前面用法相同），第2个指针指明数组的结束处。

### 指针操作

可对指针变量进行的基本操作：

- **赋值**：可以把地址赋给指针。例如，用数组名、带地址运算符（&）的变量名、另一个指针进行赋值。
- **解引用**：`*`运算符给出指针指向地址上存储的值。
- **取值**：和所有变量一样，指针变量也有自己的地址和值。对指针而言，`&`运算符给出指针本身的地址。
- **指针与整数相加**：可以使用 `+` 运算符把指针与整数相加，或整数与指针相加。无论哪种情况，整数都会和指针所指向类型的大小（以字节为单位）相乘，然后把结果与初始地址相加。
- **递增指针**：递增指向数组元素的指针可以让该指针移动至数组的下一个元素。
- **指针与整数相减**：可以使用 `-`运算符从一个指针中减去一个整数。**指针必须是第1个运算对象，整数是第2个运算对象**。该整数将乘以指针指向类型的大小（以字节为单位），然后用初始地址减去乘积。
- **递减指针**：除了递增指针还可以递减指针。前缀或后缀的递增和递减运算符都可以使用。
- **指针求差**：可以计算两个指针的差值。通常，**求差的两个指针分别指向同一个数组的不同元素，通过计算求出两个元素之间的距离**。差值的单位与数组类型的单位相同。如果指向两个不同数组的指针进行求差运算可能会得出一个值，或者导致运行时错误。
- **比较**：使用关系运算符可以比较两个指针的值，**前提是两个指针都指向相同类型的对象**。

#### 注意事项：

- 在递增或递减指针时还要注意一些问题。编译器不会检查指针是否仍指向数组元素。C 只能保证指向数组任意元素的指针和指向数组后面第1个位置的指针有效。但是，如果递增或递减一个指针后超出了这个范围，则是为定义的。另外，可以解引用指向数组任意元素的指针。但是，即使指针指向数组后面一个位置是有效的，也能解引用这样的越界指针。
- 一定要牢记一点：**千万不要解引用为初始化的指针**。切记：**创建一个指针时，系统只分配了储存指针本身的内存，并未分配储存数据的内存**。因此，**在使用指针之前，必须先用已经分配的地址初始化它**。例如，可以用一个现有变量的地址初始化该指针（使用带指针形参的函数时，就属于这种情况）。无论如何，使用指针时一定要注意，不要解引用未初始化的指针！！

#### 指针的基本用法：

- **指针的第1个基本用法是在函数间传递信息**。如果希望在被调函数中改变主调函数的变量，必须使用指针。
- **指针的第2个基本用法是用在处理数组的函数中**。

### 保护数组中的数据

在C中调用数组中的数据是通过指针去实现的，这样效率最高；当然也可以通过传递值的方式，但那样在函数中使用数组就非常耗费空间。使用数组在函数中可以方便的调用元素的同时，也有它的弊端就是可能因为程序错误而把数组中的数据错误处理。

我们在函数中调用数组数据的时候会设计两种使用方式：修改数值中的数据、不修改数组中的数据。那么，在不不修改数组中的数据的时候如何保护数组中的数据呢？可以使用声明常量的方式去保护数组中的数据。

#### const（constant - 不变的、恒定的） 的声明方式：

- **const 数组**：**声明为 const 类型的数组，其元素是不能被改变的**。

  - ```c
    #define MONTHS 12
    ......
    const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    days[9] = 44; // 编译错误
    ```

    

- **指向 const 的指针**：**指向 const 的指针不能用于改变值，但可以改变指向地址**。

  - ```c
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double * pd = rates;	// pd 指向数组的首元素
    // 第2行代码把 pd 指向的 double 类型的值声明为 const，这表示不能使用 pd 来更改它所指向的值：
    *pd = 29.89;	// 不允许
    pd[2] = 222.22; // 不允许
    rates[0] = 99.99; // 允许，因为 rates 未被 const 限定
    /*无论是使用指针表示法还是数组表示法，都不允许使用pd修改它所指向数据的值。但是要注意，因为retes并未被声明为const，所以仍然可以通过rates修改元素的值。另外，可以让pd指向别处：*/
    pd++;  // 让pd指向rates[1] -- 没问题
    // 指向const的指针通常用于函数形参中，表明该函数不会使用指针改变数据。例如如下的函数声明：
    void show_array(const double *ar, int n);
    ```

  - **关于指针赋值和const需要注意一些规则**：

    - 首先，**把 const 数据或非 const 数据的地址初始化为指向const的指针或为其赋值是合法的**：

      - ```c
        double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
        const double locked[4] = {0.08, 0.075, 0.0725, 0.07};
        const double * pc = retes;  // 有效
        pc = locked;				// 有效
        pc = &rates[3];				// 有效
        ```

    - 然而，**只能把非 const 数据的地址赋给普通指针**：

      - ```c
        double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
        const double locked[4] = {0.08, 0.075, 0.0725, 0.07};
        const double * pc = retes;  // 有效
        pc = locked;				// 无效
        pc = &rates[3];				// 有效
        ```

    - **这个规则非常合理。否则，通过指针就能改变 const 数组中的数据**。

- **const 指针**：用于**声明并初始化一个不能指向别处的指针**。**关键是 const 的位置**：

  - ```c
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    double * const pc = rates;  // pc 指向数组的开始
    pc = &rates[2];             // 不允许，因为该指针不能指向别处
    *pc = 92.99;				// 没问题--更改 rates[0] 的值
    // 可以用这种指针修改它所指向的值，但是它只能指向初始化时设置的地址。
    ```

- **const 的 const 指针**：**该指针即不能更改它所指向的地址，也不能修改指向地址上的值**：

  - ```c
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double * const pc = rates;
    pc = &rates[2];		// 不允许
    *pc = 92.99;		// 不允许
    ```


### 思考记录：

- 函数可接受的参数类型，也就是说在声明形参时可以声明指向的数据类型有哪些？
  - **整数类型**：char、short、int、long、long long
  - **浮点数类型**：float、double、long double
  - **指针类型**：
    - （任意整数与浮点数类型——常用于指向一维数组或修改主调函数变量值的时候使用）`xxx * pointer`
    - （保护数组数据的声明方式——无法修改地址指向的值）`const xxx * pointer`
    - （声明多维数组的方式）：需要指明二维数组元素大小的原因是，要知道元素的大小才能计算下一个元素的地址。
      - 数组表示法（**函数中常用**）：`xxx arr[][4]、xxx arr[][4][5][12]`——与下列同效
      - 指针表示法： `xxx (*arr)[4]、xxx (*arr)[4][5][12]`——与上方同效
    - 变长数组形参：可接受传统数组和变长数组（其传递的维数为变量）
      - `int sum2d(int *rows*, int *cols*, int *ar*[*rows*][*cols*])`——变长数组声明为形参的时候，传递给它的变量必须在它之前。

### 变长数组（VLA）：

#### 什么是变长数组？

**变长数组**（variable-length array, **VLA**），**允许使用变量表示数组的维度**。而普通的C数组在创建时必须使用整型常量、整型常量表达式或整型常量组合去表示数组的维度。如下所示：

```c
int quarters = 4;
int regions = 5;
double sales[regions][quarters];  // 一个变长数组（VLA）
```

**变长数组还允许动态内存分配，这说明可以在程序运行时指定数组的大小**。普**通C数组都是静态内存分配，即在编译时确定数组的大小**。由于数组大小是常量，所以编译器在编译时就知道了。

#### 变长数组的限制：

- **变长数组必须是自动存储类别**，这意味着无论在函数中声明还是作为函数形参声明，都不能使用 static 或 extern 存储类别说明符。而且，**不能在声明中初始化它们**。最终，C11把变长数组作为一个可选特性，而不是必须轻质实现的特性。
- 需要注意的是，在函数定义的形参列表中声明的变长数组并未实际创建数组。**和传统的语法类似，变长数组名实际上是一个指针**。这说明带变长数组形参的函数实际上是在原始数组中处理数组，因此可以修改传入的数组。

#### 注意事项：变长数组不能改变大小

变长数组中的“变”不是指可以修改已创建数组的大小，一旦创建了变长数组，它的大小则保持不变。**这里的“变”指的是：在创建数组时，可以使用变量指定数组的维度**。

#### 声明为参数的正确方式：

声明一个带二维变长数组参数的函数，如下所示：

```c
int sum2d(int rows, int cols, int ar[rows][cols]); // ar 是一个变长数组（VLA）
// C99、C11标准规定，可以省略原型中的形参名，但在这种情况下，必须用星号代替省略的维度：
int sum2d(int, int, int ar[*][*]);  // ar 是一个变长数组（VLA），省略了维度参名
```

注意前两个形参（rows 和 cols）用作第3个形参二维数组 ar 的两个维度。因为 ar 的声明要使用 rows 和 cols，所以在形参列表中必须声明 ar 之前先声明这两个形参。

### 复合字面量：

**字面量是除符号常量外的常量**。例如，5 是 int 类型字面量，81.3 是 double 类型的字面量，‘Y’ 是 chra 类型的字面量，“elephant”是字符串字面量。**代表数组和结构内容的是复合字面量**。

- 对于数组，复合字面量类似数组初始化列表，前面是用括号括起来的类型名。例如：

  - ```c
    （int [2]){10, 20} // 复合字面量——声明中没有数组名， int[2]既是复合字面量的类型名。
    ```

  - ```c
    // 初始化有数组名的数组时可以省略数组大小，复合字面量也可以省略大小，编译器会自动计算数组当前的元素个数：
    (int []){50, 20, 90} // 内含3个元素的复合字面量
    ```

#### 复合字面量的用法：

1. **因为复合字面量是匿名的，所以不能先创建然后再使用它，必须在创建的同时使用它**。**使用指针记录地址就是一种用法**。也就是说，可以这样用：

   - ```c
     int * ptl;
     ptl = (int [2]){10, 20};
     ```

     与有数组名的数组类似，复合字面量的类型名也代表首元素的地址，所以可以把它赋给指向 int 的指针。然后便可使用这个指针。例如，本例中 `*ptl`是10，ptl[1]是20。

2. 还可以**把复合字面量作为实际参数传递给带匹配形式参数的函数**：

   - ```c
     int sum(const int ar[], int n);
     ...
     int tota13;
     tota13 = sum((int []){4,4,4,5,5,5}, 6);
     ```

     这里，第1个实参是内含6个int类型值的数组，和数组名类似，这同时也是该数组首元素的地址。**这种用法的好处是，把信息传入函数前不必先创建数组，这是复合字面量的典型用法**。

   - **可以把这种用法用于二维数组或多维数组**。例如，下面的代码演示了如何创建二维int数组并存储其地址：

     ```c
     int (*pt2)[4];  // 声明一个指向二维数组的指针，该数组内含2个数组元素，
     				// 每个元素是内含4个int类型值的数组
     pt2 = (int [2][4]){{1,2,3,-9},{4,5,6,-8}};
     // 如上所示，该复合字面量的类型是 int [2][4]，即一个 2x4 的 int 数组
     ```

3. **注意事项**： 记住，**复合字面量只是提供临时需要值的一种手段**。复合字面量具有作用域，这意味着一旦离开定义复合字面量的块，程序将无法保证字面量是否存在。也就是说，复合字面量的定义在最内层的花括号中。

### 关键概念：

数组用于储存相同类型的数据。C 把数组看作是派生类型，因为数组是建立在其他类型的基础上的。也就是说，无法简单地声明一个数组。在声明数组时必须说明其元素的类型，如 int 类型的数组、float 类型的数组，或其他类型的数组。所谓的其他类型也可以是数组类型，这种情况下，创建的是数组的数组（或称为二维数组）。

通常编写一个函数来处理数组，这样在特定的函数中解决特定的问题，有助于实现程序的模块化。在把数组名作为实际参数时，传递给函数的不是整个数组，而是数组的地址（因此，函数对应的形式参数时指针）。为了处理数组，函数必须知道从何处开始读取数据和要处理多少个数组元素。数组地址提供了“地址”，“元素个数”可以内置在函数中或作为单独的参数传递。第2种方法更普遍，因为这样做可以让同一个函数处理不同大小的数组。

数组和指针的关系密切，同一个操作可以用数组表示法或指针表示法。它们之间的关系允许你在处理数组的函数中使用数组表示法，即使函数的形式参数是一个指针，而不是数组。

对于传统的 C 数组，必须用常量表达式指明数组的大小，所以数组大小在编译时就已确定。C99/C11新增了变长数组，可以用变量表示数组大小。这意味着变长数组的大小延迟到程序运行时才确定。

### 总结：

数组是一组数据类型相同的元素。数组元素按顺序储存在内存中，通过整数下标（或索引）可以访问各元素。在 C 中，数组首元素的下标是 0，所以对于内含 n 个元素的数组，其最后一个元素的下标是 n-1。作为程序员，要确保使用有效的数组下标，因为编译器和运行的程序都不会检查下标的有效性。

声明一个简单的一维数组形式如下：

```c
type name[size]
```

这里，type 是指数组中每个元素的数据类型，name 是数组名， size 是数组元素的个数。对视传统的 C 数组，要求 size 是整型常量表达式。但是 C99/C11允许使用整型非常量表达式。这种情况下的数组被称为变长数组。

C 把数组名解释为该数组首元素的地址。换言之，数组名与指向该数组 首元素的指针等价。概括地说，数组和指针的关系十分密切。如果 ar 是一个数组，那么表达式 `ar[i]`和 `*(ar+1)`等价。

对于 C 语言而言，不能把整个数组作为参数传递给函数，但是可以传递数组的地址。然后函数可以使用传入的地址操控原始数组。如果函数没有修改原始数组的意图，应在声明函数的形式参数时使用关键字 const。在被调函数中可以使用数组表示法或指针表示法，无论用那种表示法，实际上使用的都是指针变量。

指针加上一个整数或递增指针，指针的值以所指对象的大小为单位改变。也就是说，如果 pd 指向一个数组的8字节 double 类型值，那么 pd 加 1 意味着其值加 8，以便它指向该数组的下一个元素。

二维数组既是“数组的数组”。例如，下面声明了一个二维数组：

```c
double sales[5][12];
```

该数组名为 sales，有 5 个元素（一维数组），每个元素都是一个内含 12 个 double 类型值的数组。第 1 个一维数组时 sales[0]，第2个一维数组是 sales[1]，以此类推，每个元素都是内含12 个 double 类型值的数组。使用第 2 个下标可以访问这些一维数组中的特定元素。例如，`sales[2][5]`是 `sales[2]`的第6个元素，而 `sales[2]`是 sales 的第 3 个元素。

C语言传递多维数组的传统方法是把数组名（即数组的地址）传递给类型匹配的指针形参。声明这样的指针形参要指定所以的数组维度，除了第1维度。传递的第1个维度通常作为第2个参数。例如，为了处理前面声明的 sales 数组，函数原型和函数调用如下：

```c
void display(double ar[][12], int rows); // 声明与二维数组类型匹配的指针形参
...
display(sales, 5);
```

变长数组提供第2中语法，把数组维度作为参数传递。在这种情况下，对应函数原型和函数调用如下：

```c
void display(int rows, int cols, double ar[rows][cols]); // 声明变长数组形参
...
display(5, 12, sales);
```

虽然上述讨论中使用的是 int 类型的数组和 double 类型的数组，其他类型的数组也是如此。然而，字符串有一些特殊的规则，这是由于其末尾的空字符所致。有了这个空字符，不用传递数组的大小，函数通过检测字符串的末尾也知道在何处停止。