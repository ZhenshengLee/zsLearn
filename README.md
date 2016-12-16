# zsLearn

## dlib-apt安装

* apt install

```shell
sudo apt install libdlib-dev
```

* 解决ubuntu Bug

```shell
# This can be solved by removing the line
# list(APPEND _IMPORT_CHECK_FILES_FOR_dlib::dlib "${_IMPORT_PREFIX}/lib/libdlib.a" )
# from /usr/lib/cmake/dlib/dlib-none.cmake
sudo gedit /usr/lib/cmake/dlib/dlib-none.cmake
```

## 使用vscode

* 安装[vscode](https://code.visualstudio.com/ )

* 安装下列插件：

```shell
cmake - Version :0.0.15
cmake-tools - Version :0.8.6
code-settings-sync - Version :2.3.8
cpptools - Version :0.9.3
```

## 复制此目录，使用cmake变异示例程序