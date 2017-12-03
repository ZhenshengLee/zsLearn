# 1. zsLearning MinGW+

## 1.1. 简介

使用cmake+MinGW+GTest来打造自己的小编译环境，为程序开发和调试中提供便利

## 1.2. 环境搭建

### 1.2.1. VSCode

略

#### 插件

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

~~要用到CMake Server，所以安装3.7.2以上版本，过程略~~

Windows平台需要安装3.10最新版本

### 1.2.3. Log4CXX

这个暂时不安装

### 1.2.4. Google Test

直接拷贝到目录下，使用cmake编译，只使用gtest，不适用gmock

修改CMakeLists.txt

### 1.2.5. Clang Code Static Analyzer

安装clang软件包即可

#### 1.2.5.2. MinGw

下载复制到D盘

### 1.2.6. cppcheck

直接安装即可

#### 1.2.6.2. MinGw

略

### 1.2.7. cpplint

使用anoconda安装

#### 配置

TODO: 屏蔽相关提示

- [ ] 大括号位置提示
- [ ] 头文件加目录提示