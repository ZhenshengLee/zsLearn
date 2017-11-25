---
author: 黎振胜
Last Modified: 2017-11-26, 12:03 am
filename: README.md
---

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
    "workbench.panel.location": "bottom",
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
        "jupyter",
        "plantuml",
        "sqlite"
    ],

    // c-cpp-flylint
    "c-cpp-flylint.clang.enable": false,
    "c-cpp-flylint.cppcheck.enable": false,
    "c-cpp-flylint.flexelint.enable": true,
    "c-cpp-flylint.flexelint.executable": "D:\\lint\\lint-nt.exe",
    "c-cpp-flylint.flexelint.configFile": "./lnt/std.lnt",
    "c-cpp-flylint.run": "onType",
    "c-cpp-flylint.includePaths": [
        "${workspaceRoot}/include",
        "D:\\mingw64\\lib\\gcc\\x86_64-w64-mingw32\\7.1.0\\include",
        "D:\\mingw64\\lib\\gcc\\x86_64-w64-mingw32\\7.1.0\\include-fixed",
        "D:\\mingw64\\include",
        "D:\\mingw64\\opt\\include",
        "D:\\mngw64\\x86_64-w64-mingw32\\include"
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
    "sync.lastUpload": "2017-11-19T12:43:27.369Z",
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
        "modAuthor": "Modified By: ",
        "modDate": "Last Modified:",
        "modDateFormat": "YYYY-MM-DD, h:mm a",
        "include": [
            "markdown"
        ],
        "exclude": [
            "json",
            "c",
            "cpp"
        ],
        "autoHeader": "autolSave"
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
        },
        {
            "language": "markdown",
            "begin": "---",
            "prefix": "",
            "end": "---",
            "blankLinesAfter": 1
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
                "Created Date: <<filecreated('YYYY-MM-DD, h:mm:ss a')>>",
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
            "language": "markdown",
            "template": [
                "author: <<author>>",
                "Last Modified:",
                "filename: <<filename>>"
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
    "tagged.tagString": "// #year-#month-#day - 黎振胜: #enteredText",
    
    // markdown paste
    "pasteImage.path": "./image/",
    "pasteImage.silence": true,
    "vsicons.dontShowNewVersionMessage": true,

    // astyle
    "C_Cpp.formatting" : "Disabled",
    "astyle.executable": "D:\\Program Files (x86)\\AStyle\\bin\\Astyle.exe",
    "astyle.astylerc": null,

    // xml-tools
    "xmlTools.xqueryExecutionEngine": "D:\\Program Files (x86)\\Altova\\XMLSpy2012\\XMLSpy.exe",
    
    // jupyter
    "jupyter.appendResults": true
```

#### 插件

```s
auto-close-tag v0.5.3
  auto-comment-blocks v1.0.1
  better-comments v0.1.3
  Bookmarks v0.18.0
  c-cpp-flylint v0.5.4
  clang-format v1.6.1
  code-gnu-global v0.2.2
  code-settings-sync v2.8.6
  code-spell-checker v1.4.12
  cpplint v0.0.5
  CppSnippets v0.0.13
  cpptools v0.14.2
  divider v1.1.0
  dot v0.0.1
  doxdocgen v0.0.7
  Doxygen v1.0.0
  GBKtoUTF8 v0.0.2
  git-easy v1.9.1
  git-project-manager v1.4.0
  gitblame v2.2.0
  githd v1.0.0
  githistory v0.2.3
  gitignore v0.5.0
  gitlens v6.1.2
  Go v0.6.67
  graphviz-preview v0.0.3
  guides v0.9.1
  jupyter v1.1.4
  LogFileHighlighter v1.2.0
  markdown-all-in-one v0.11.2
  markdown-checkbox v1.1.0
  markdown-emoji v0.0.7
  markdown-preview-enhanced v0.3.0
  markdown-shortcuts v0.8.1
  markdown-toc v1.5.6
  Material-theme v2.10.23
  mdmath v2.0.7
  output-colorizer v0.1.2
  partial-diff v0.5.0
  path-intellisense v1.4.2
  pdf v0.2.0
  plantuml v2.3.3
  project-manager v0.23.0
  psi-header v1.3.4
  python v0.8.0
  regex v0.1.0
  tagged-comment v0.4.0
  vega-vscode v0.0.2
  vscode-astyle v0.7.1
  vscode-clang v0.2.2
  vscode-codetags v0.0.2
  vscode-icons v7.18.1
  vscode-markdown-paste-image v0.7.1
  vscode-markdownlint v0.12.0
  vscode-open v0.1.0
  vscode-pandoc v0.0.8
  vscode-todo-highlight v0.5.11
  vscode-wordcount-cjk v1.0.0
  wordcount v0.1.0
  xml v1.9.2
  yang-vscode v1.0.13
  yog-plantuml-highlight v0.0.5
```