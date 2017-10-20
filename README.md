# zsLearn
Code learning Using MinGW

## 环境

### cpplint

```shell
pip install cpplint
```

### pclint

* 手动创建和配置lnt文件



```s
//  Gnu C/C++ (version 2.95.3 or later), -si4 -sl4 -sp8, lib-stl.lnt lib-wnt.lnt
//  Standard lint options
//	LINT-NT.EXE：	可执行文件，已升级到v9.00L。
//	PATCH.EXE：	用于升级版本的工具。
//	msg.txt：			消息描述文件，描述了各种警告信息。
//	pc-lint.pdf：		PC-Lint在线手册。
//	readme.txt：		在线手册的补充。
//	lnt\
//		co-xxx.lnt	编译器选项文件。
//		env-xxx.lnt	编辑环境选项文件。
//		lib-xxx.lnt	库相关的选项文件。
//		sl-xxx.lnt	非ANSI编译器的标准库模块。
//		au-xxx.lnt	推荐的检查规则文件，例如：MISRA规则。
//		std.lnt		内存模型等全局性的选项。
//      可以使用绝对路径


e:\Zhensheng\documents\GitHub\zsLearn\lnt\au-sm123.lnt
e:\Zhensheng\documents\GitHub\zsLearn\lnt\au-ds.lnt
e:\Zhensheng\documents\GitHub\zsLearn\lnt\au-misra2.lnt
e:\Zhensheng\documents\GitHub\zsLearn\lnt\co-mwwin32.lnt
e:\Zhensheng\documents\GitHub\zsLearn\lnt\lib-stl.lnt
e:\Zhensheng\documents\GitHub\zsLearn\lnt\lib-wnt.lnt
e:\Zhensheng\documents\GitHub\zsLearn\lnt\options.lnt
-si4 -sl4 -sp8
-i"D:\mingw64\lib\gcc\x86_64-w64-mingw32\7.1.0\include"
-i"D:\mingw64\include"
-i"D:\mingw64\opt\include"
```

### vscode

#### setting

```s
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
    
    // clang
    "clang.cflags": ["-std=c99"],
    "clang.cxxflags": ["-std=c++11"],
    
    // code-runner
    "code-runner.defaultLanguage": "cpp",
    "code-runner.fileDirectoryAsCwd": false,
    "code-runner.saveFileBeforeRun": true,
    "code-runner.runInTerminal": true,
    
    // code-spell checker
    "cSpell.userWords": [
        "plantuml"
    ],

    // c-cpp-flylint
    "c-cpp-flylint.clang.enable": false,
    "c-cpp-flylint.cppcheck.enable": false,
    "c-cpp-flylint.flexelint.enable": true,
    "c-cpp-flylint.flexelint.executable": "D:\\lint\\lint-nt.exe",
    "c-cpp-flylint.flexelint.configFile": "./lnt/std.lnt",
    "c-cpp-flylint.run": "onType",
    "c-cpp-flylint.includePaths": [
        "D:\\mingw64\\lib\\gcc\\x86_64-w64-mingw32\\7.1.0\\include",
        "D:\\mingw64\\include",
        "D:\\mingw64\\opt\\include",
        "D:\\mngw64\\x86_64-w64-mingw32\\include",
        "${workspaceRoot}/include"
    ],

    // cpplint
    "cpplint.cpplintPath": "C:\\Users\\zhens\\Anaconda2\\Scripts\\cpplint.exe",
    "cpplint.lintMode": "single",

     // c/c++ config
    "C_Cpp.intelliSenseEngine": "Tag Parser",

    // cmake-tools-helper
    "cmake-tools-helper.cmake_download_path": "/home/zs/.vscode/extensions/maddouri.cmake-tools-helper-0.1.1/cmake_download",
    

    // intergrated terminal
    "terminal.integrated.shell.windows": "C:\\Program Files\\Git\\bin\\bash.exe",
    "terminal.integrated.shellArgs.windows": [
        "--login", "-i"
    ],

    // todo:
    "todohighlight.isCaseSensitive": false,
    "TodoParser": {
        "exclude": ["cpp", "c"],
        "include": ["js"],
        "folderExclude": ["node_modules", ".vscode"],
        "only": ["sub-folder/sub-sub-folder"],
        "showInProblems": false,
        "markers": ["NOTE:", "REMINDER:", ["FIXME", "Warning"]],
        "autoDefaultMarkers": true
    },

    // vscode setting sync
    "sync.gist": "6004ed2706ca587a527f9e96d9887491",
    "sync.lastUpload": "2017-10-20T15:41:43.231Z",
    "sync.lastDownload": "2017-01-12T13:25:27.249Z",
    "sync.version": 262,
    "sync.autoDownload": false,
    "sync.autoUpload": false,
    "sync.showSummary": true,
    "sync.forceDownload": false,
    "sync.workspaceSync": false,
    "sync.anonymousGist": false,
    "sync.host": "",
    "sync.pathPrefix": "",
    "sync.quietSync": false,
    "sync.askGistName": false,
    "git.enableSmartCommit": true,
    
    // auto comment tools
    // file Header
    "psi-header.config": {
        "forceToTop": true,
        "blankLinesAfter": 6,
        "license": "Custom"
    },
    "psi-header.changes-tracking": {
        "isActive": true,
        "modAuthor": "修改者: ",
        "modDate": "上次修改: ",
        "modDateFormat": "日期",
        "include": [],
        "exclude": [
            "markdown",
            "json"
        ],
        "autoHeader": "manualSave"
    },
    "psi-header.license-text": [
        "All shall be well and all shall be well and all manner of things shall be well.",
        "We're doomed!"
    ],
    "psi-header.variables": [
        ["company", "股份有限公司"],
        ["author", "黎振胜"],
        ["authoremail", "art@psioniq.uk"]
    ],
    "psi-header.lang-config": [
        {
            "language": "lua",
            "begin": "--[[",
            "prefix": "--",
            "end": "--]]",
            "blankLinesAfter": 0
        },
        {
            "language": "python",
            "begin": "###",
            "prefix": "# ",
            "end": "###",
            "blankLinesAfter": 0,
            "beforeHeader": [
                "#!/usr/bin/env python3",
                "# -*- coding:utf-8 -*-"
            ]
        },
        {
            "language": "javascript",
            "begin": "/**",
            "prefix": " * ",
            "end": " */",
            "blankLinesAfter": 2,
            "forceToTop": false
        },
        {
            "language": "typescript",
            "mapTo": "javascript"
        }
    ],
    "psi-header.templates": [
        {
            "language": "cpp",
            "template": [
                "gagaga: <<filepath>>",
                "Project: <<projectpath>>",
                "Created Date: <<filecreated('dddd, MMMM Do YYYY, h:mm:ss a')>>",
                "作者: <<author>>",
                "-----",
                "Last Modified: ",
                "Modified By: ",
                "-----",
                "Copyright (c) <<year>> <<company>>",
                "",
                "<<licensetext>>"
            ]
        },
        {
            "language": "c",
            "template": [
                "gagaga: <<filepath>>",
                "Project: <<projectpath>>",
                "Created Date: <<filecreated('dddd, MMMM Do YYYY, h:mm:ss a')>>",
                "作者: <<author>>",
                "-----",
                "Last Modified: ",
                "Modified By: ",
                "-----",
                "Copyright (c) <<year>> <<company>>",
                "",
                "<<licensetext>>"
            ]
        }
    ],
    // function header
    "doxdocgen.generic.triggerSequence": "/**",
    "doxdocgen.generic.firstLine": "/**",
    "doxdocgen.generic.briefTemplate": "摘要 ",
    "doxdocgen.generic.paramTemplate": "@param {param} ",
    "doxdocgen.generic.tparamTemplate": "@tparam {param} ",
    "doxdocgen.generic.returnTemplate": "@return {type} ",
    // simple tag string
    "tagged.tagString": "// #year-#month-#day - 标签: #enteredText"
```

#### 插件

```s
arm - Version :0.1.2
auto-close-tag - Version :0.5.1
auto-comment-blocks - Version :1.0.1
better-comments - Version :0.1.3
Bookmarks - Version :0.16.0
c-cpp-flylint - Version :0.5.0
clang-format - Version :1.6.0
cmake - Version :0.0.17
cmake-tools - Version :0.10.2
code-settings-sync - Version :2.8.3
code-spell-checker - Version :1.4.10
cpplint - Version :0.0.5
CppSnippets - Version :0.0.12
cpptools - Version :0.14.0
divider - Version :1.1.0
dot - Version :0.0.1
doxdocgen - Version :0.0.5
Doxygen - Version :1.0.0
GBKtoUTF8 - Version :0.0.2
git-easy - Version :1.9.1
git-project-manager - Version :1.4.0
gitblame - Version :2.2.0
githd - Version :0.10.0
githistory - Version :0.2.3
gitignore - Version :0.5.0
gitlens - Version :5.7.1
Go - Version :0.6.66
graphviz-preview - Version :0.0.3
guides - Version :0.9.0
latex-workshop - Version :3.5.5
LogFileHighlighter - Version :1.2.0
markdown-all-in-one - Version :0.11.0
markdown-checkbox - Version :1.0.3
markdown-emoji - Version :0.0.6
markdown-preview-enhanced - Version :0.2.9
markdown-shortcuts - Version :0.8.1
markdown-toc - Version :1.5.6
Material-theme - Version :2.10.17
mdmath - Version :2.0.7
output-colorizer - Version :0.1.2
partial-diff - Version :0.3.3
path-intellisense - Version :1.4.2
pdf - Version :0.2.0
plantuml - Version :2.3.2
project-manager - Version :0.21.1
psi-header - Version :1.0.0
regex - Version :0.1.0
tagged-comment - Version :0.4.0
vscode-clang - Version :0.2.2
vscode-icons - Version :7.15.0
vscode-languagetool-en - Version :3.8.0
vscode-languagetool-zh - Version :3.8.0
vscode-markdown-paste-image - Version :0.7.1
vscode-markdownlint - Version :0.10.1
vscode-open - Version :0.1.0
vscode-open-in-github - Version :1.2.8
vscode-pandoc - Version :0.0.8
vscode-todo-highlight - Version :0.5.11
vscode-wordcount-cjk - Version :1.0.0
wordcount - Version :0.1.0
xml - Version :1.9.2
yog-plantuml-highlight - Version :0.0.5
```