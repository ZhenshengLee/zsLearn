# 1. zsLearning apue

## 1.1. 简介

这是一个通过阅读和练习APUE书本知识来学习Linux系统编程的一个项目。

同时也是自己学习和规范编程技艺的一个实践项目。

在学习APUE之前构建好CMake程序设计框架，包括编辑器VSCode插件环境，调试环境gdb，单元测试环境gtest，日志记录环境log4cxx，文档环境markdown，静态检查工具clang static code analyzer, cppcheck，风格检查工具cpplint，进行相应配置以符合项目需要。

## 1.2. 环境搭建

### 1.2.1. VSCode

软件安装过程

#### 插件

TODO: 添加自动注释生成插件，评估并选择几款插件

```shell
EXTENSIONS ADDED :

auto-close-tag - Version :0.5.1
auto-comment-blocks - Version :1.0.1
better-comments - Version :0.1.3
Bookmarks - Version :0.16.0
c-cpp-flylint - Version :0.2.7
cmake - Version :0.0.17
cmake-tools - Version :0.10.2
code-settings-sync - Version :2.8.3
code-spell-checker - Version :1.4.10
codedox - Version :1.2.5
comment - Version :5.0.0
cpplint - Version :0.0.5
CppSnippets - Version :0.0.12
cpptools - Version :0.13.1
dot - Version :0.0.1
extension-leaderboard - Version :0.0.2
githistory - Version :0.2.3
gitignore - Version :0.5.0
gitlens - Version :5.6.4
Go - Version :0.6.66
graphviz-preview - Version :0.0.3
guides - Version :0.8.4
latex-workshop - Version :3.5.5
LogFileHighlighter - Version :1.2.0
markdown-all-in-one - Version :0.10.3
markdown-checkbox - Version :0.0.3
markdown-emoji - Version :0.0.5
markdown-preview-enhanced - Version :0.2.9
markdown-shortcuts - Version :0.8.1
markdown-toc - Version :1.5.6
Material-theme - Version :2.10.16
matlab - Version :0.7.1
mdmath - Version :2.0.7
output-colorizer - Version :0.1.2
partial-diff - Version :0.3.3
path-intellisense - Version :1.4.2
plantuml - Version :2.3.1
project-manager - Version :0.21.1
psi-header - Version :1.0.0
python - Version :0.7.0
regex - Version :0.1.0
vscode-clang - Version :0.2.2
vscode-file-header-comment-helper - Version :0.4.0
vscode-markdown-paste-image - Version :0.6.2
vscode-markdownlint - Version :0.10.1
vscode-open - Version :0.1.0
vscode-pandoc - Version :0.0.8
vscode-svgviewer - Version :1.4.3
vscode-todo-highlight - Version :0.5.11
vscode-todo-parser - Version :1.9.1
vscode-wordcount-cjk - Version :1.0.0
wordcount - Version :0.1.0
xml - Version :1.9.2

```

#### 配置文件

这里仅给出全局配置文件，工作空间配置文件已包含在代码目录内

```cpp
// general-setting
    "files.autoSave": "onFocusChange",
    "extensions.autoUpdate": true,
    "git.confirmSync": false,
    "window.zoomLevel": 0,
    "workbench.startupEditor": "newUntitledFile",
    "workbench.iconTheme": "vscode-icons",
    "workbench.colorTheme": "One Dark Pro",
    "telemetry.enableTelemetry": false,
    "telemetry.enableCrashReporter": false,
    "editor.renderIndentGuides": false,
    "editor.minimap.enabled": true,
    "editor.detectIndentation": false,
    "editor.insertSpaces": true,
    // "http.proxy": "http://127.0.0.1:1080",
    // "http.proxyStrictSSL": false,

    // plantUML
    "amigo.renderer.JAVA_HOME": "/usr/lib/jvm/default-java",
    
    // clang
    "clang.cflags": ["-std=c99"],
    "clang.cxxflags": ["-std=c++11"],
    
    // code-runner
    "code-runner.defaultLanguage": "cpp",
    "code-runner.fileDirectoryAsCwd": false,
    "code-runner.saveFileBeforeRun": true,
    "code-runner.runInTerminal": true,
    
    // setting-sync
    "sync.gist": "9ce02353e912509dd7eb859c20b36e8c",
    "sync.lastUpload": "2017-10-13T16:30:16.363Z",
    "sync.autoDownload": false,
    "sync.autoUpload": false,
    "sync.lastDownload": "2017-09-03T06:12:46.576Z",
    "sync.version": 262,
    "sync.showSummary": true,
    "sync.forceDownload": false,
    "sync.workspaceSync": false,
    "sync.anonymousGist": false,
    "sync.host": "",
    "sync.pathPrefix": "",
    "sync.quietSync": false,
    "sync.askGistName": false,
    
    // code-spell checker
    "cSpell.userWords": [
        "plantuml"
    ],

    // c-cpp-flylint
    "c-cpp-flylint.clang.enable": true,
    "c-cpp-flylint.cppcheck.enable": true,
    "c-cpp-flylint.flexelint.enable": false,
    "c-cpp-flylint.standard": [
        "c11",
        "c++11"
    ],
    "c-cpp-flylint.run": "onType",
    "c-cpp-flylint.includePaths": [
        "usr/include",
        "usr/local/include",
        "${workspaceRoot}/include"
    ],
    "c-cpp-flylint.clang.includePaths": null,
    "c-cpp-flylint.clang.includes": null,

     // c/c++ config
    "C_Cpp.intelliSenseEngine": "Tag Parser",

    // cmake-tools-helper
    "cmake-tools-helper.cmake_download_path": "/home/zs/.vscode/extensions/maddouri.cmake-tools-helper-0.1.1/cmake_download",
    
    // todo
    "todohighlight.isCaseSensitive": false,
    "TodoParser": {
        "exclude": ["cpp", "c"],
        "include": ["js"],
        "folderExclude": ["node_modules", ".vscode"],
        "only": ["sub-folder/sub-sub-folder"],
        "showInProblems": false,
        "markers": ["NOTE:", "REMINDER:", ["FIXME", "Warning"]],
        "autoDefaultMarkers": true
    }
```

### 1.2.2. CMake

TODO: 添加判断不同平台，设置不同编译系统的语句。目前两个平台，MinGW和Linux

要用到CMake Server，所以安装3.7.2以上版本，过程略

### 1.2.3. Log4CXX

#### 1.2.3.1. Ubuntu

由于官方没有支持CMake，自己又能力有限，所以没有添加到项目目录下。

```shell
sudo apt install liblog4cxx10-dev
```
### 1.2.4. Google Test

考虑到多平台，直接拷贝到目录下

### 1.2.5. Clang Code Static Analyzer

#### 1.2.5.1. Ubuntu

```shell
sudo apt instal clang
```

#### 1.2.5.2. MinGw

略

### 1.2.6. cppcheck

#### 1.2.6.1. Ubuntu

```shell
sudo apt install cppcheck
```

#### 1.2.6.2. MinGw

略

### 1.2.7. cpplint

#### 1.2.7.1. Ubuntu

```shell
sudo -H pip install cpplint
```

#### MinGW

考虑到Windows下也要用，所以加入到目录下。

#### 配置

TODO: 屏蔽相关提示

- [ ] 大括号位置提示
- [ ] 头文件加目录提示