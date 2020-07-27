# win10下使用oh-my-zsh并与VScode结合
### 使用到的工具
> `git、scoop、ConEmu、powershell、VScode`可能用到的工具集。

### 为什么要美化终端
1. 使用`oh-my-zsh`的超级顺滑的功能
2. 简洁、优美的命令行界面
3. 与`VScode`优雅的结合

### 如何美化
1. 安装`oh-my-posh`
2. 设置终端配置文件
3. 安装`powerline`字体
4. 设置`ConEmu`去替代终端

#### 安装`oh-my-posh`
注意事项：需要以管理员的身份运行`powershell`或`ConEmu`等其他第三方 shell。
安装`oh-my-posh`之前需要先安装`posh-git`，它是`oh-my-posh`的依赖包。
安装`posh-git`：
```powershell
Install-Module posh-git -Scope CurrentUser
```
如果之前没有安装过`NuGet`，那么会提示优先安装的提示，按提示选择确认安装即可。
如果提示无法安装或无法连接到网络等原因导致的`NuGet`未安装成功，那么可使用`scoop NuGet`去安装`NuGet`后，再执行`posh-git`的安装命令。
> scoop 是一个 windows 系统下的非常好用的包管理软件。
>
执行`posh-git`的安装命令后，执行过程中**不要按回车**。在第一次提示处输入`Y`，在第二次提示处输入`A`。完成后接下来继续。

执行下列命令安装`oh-my-posh`，在提示处输入`Y`：
```powershell
Install-Module oh-my-posh -Scope CurrentUser
```

#### 设置终端配置文件
接下来在`powershell`或`ConEmu`中执行下列命令检测并初始化`profile`文件（类似 `linux bash`中的`.bashrc`文件）保存我们的配置：
```powershell
if (!(Test-Path -Path $PROFILE )) { New-Item -Type File -Path $PROFILE -Force }
```
根据提示找到`Microsoft.PowerShell_profile.ps1`文件的路径，然后写入配置命令并保存（配置文件是用于每次终端启动时先执行的命令，这样就节省了每次配置的步骤）：
```vim
Import-Module posh-git
Import-Module oh-my-posh
Set-Theme Paradox （主题可根据喜好去替换）
```

#### 安装`powerline`字体
安装`powerline`字体的方式：从[powerline/fonts: Patched fonts for Powerline users](https://github.com/powerline/fonts)克隆这个仓库，然后执行安装文件。命令如下：
```powershell
git clone https://github.com/powerline/fonts.git
cd fonts
.\install.psl
```
执行完成后，字体就安装完成了。

#### 设置`ConEmu`去替代终端
启动`ConEmu`之后打开顶部标签栏最右边的设置界面，然后进行配置：
> 1. 设置字体显示为中文（通用-字体界面）
> 2. 设置字体为`... for powerline`的字体
> 3. 设置字体大小、状态栏、透明度看自己喜好设置……
> 4. Unicode 范围（字体界面）不要选择默认P开头的，否则一些特殊字符会变成问号
> 5. 配置ConEmu的默认启动shell，在“启动-任务”界面，先选择默认带管理的powershell，然后勾选`默认shell`选项。
> 6. **设置ConEmu为默认shell**，在“集成-默认终端”界面，勾选`强制使用...`和 `在系统启动时注册`。
> 7. 最后在`VScode`的字体设置后添加`, monospace,'Meslo LG M for Powerline'`（与第2步设置相同的字体）样式的字体，用`，`号分隔。

至此，做win10系统下美化与优化shell的任务完成了。

### 参考网站
[将美化进行到底，把 PowerShell 做成 oh-my-zsh 的样子](https://blog.walterlv.com/post/beautify-powershell-like-zsh.html)

[超酷的 PowerShell 美化指南](https://zhuanlan.zhihu.com/p/51901035)

[Windows 命令行终端 PowerShell 美化计划](https://juejin.im/post/5e804f946fb9a03c3f1e922e)