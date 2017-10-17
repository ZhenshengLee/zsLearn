# zsLearn
Code learning Using MinGW

## 环境

### cpplint

```shell
pip install cpplint
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
    "c-cpp-flylint.clang.enable": true,
    "c-cpp-flylint.cppcheck.enable": false,
    "c-cpp-flylint.flexelint.enable": false,
    "c-cpp-flylint.flexelint.executable": "D:\\lint\\lint-nt.exe",
    "c-cpp-flylint.flexelint.configFile": "std.lnt",
    "c-cpp-flylint.standard": [
        "c99",
        "c++11"
    ],
    "c-cpp-flylint.run": "onType",
    "c-cpp-flylint.includePaths": [
        "usr/include",
        "usr/local/include",
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
    "sync.lastUpload": "2017-10-17T15:59:19.262Z",
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
    "sync.askGistName": false
```

#### 插件

```s
arm - Version :0.1.2
auto-close-tag - Version :0.5.1
auto-comment-blocks - Version :1.0.1
better-comments - Version :0.1.3
Bookmarks - Version :0.16.0
c-cpp-flylint - Version :0.4.3
clang-format - Version :1.6.0
cmake - Version :0.0.17
cmake-tools - Version :0.10.2
code-runner - Version :0.7.3
code-settings-sync - Version :2.8.3
code-spell-checker - Version :1.4.10
comment - Version :5.0.0
cpplint - Version :0.0.5
CppSnippets - Version :0.0.12
cpptools - Version :0.13.1
dot - Version :0.0.1
GBKtoUTF8 - Version :0.0.2
git-easy - Version :1.9.1
git-project-manager - Version :1.4.0
gitblame - Version :2.2.0
githd - Version :0.10.0
githistory - Version :0.2.3
gitignore - Version :0.5.0
gitlens - Version :5.6.5
Go - Version :0.6.66
graphviz-preview - Version :0.0.3
guides - Version :0.9.0
latex-workshop - Version :3.5.5
LogFileHighlighter - Version :1.2.0
markdown-all-in-one - Version :0.10.3
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
plantuml - Version :2.3.1
project-manager - Version :0.21.1
psi-header - Version :1.0.0
regex - Version :0.1.0
vscode-clang - Version :0.2.2
vscode-icons - Version :7.15.0
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