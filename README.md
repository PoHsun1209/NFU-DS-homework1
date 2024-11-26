# 作業

> [!CAUTION]
> 作業規範一律以此份說明為主。

## 作業繳交重點

限定使用以下標頭檔：

> [!WARNING]
> 「作業繳交」、「上機測驗」限用以下規則、而「LeetCode 練習」、「CPE 練習」則不用。

```cpp
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
```

您需要繳交：

1. 程式碼（cpp 檔）
2. 作業報告（markdown 或 PDF）

其中您的需要有以下部分：

1. 解題說明（15%）
2. 程式實作（30%）
3. 效能分析（10%）
4. 測試與驗證（20%）
5. 申論及開發報告（25%）

## 網頁檔案上傳教學

<https://github.com/user-attachments/assets/9d627e34-8b7c-43eb-b3ba-b1aeb31238ec>

## 目錄架構

寫程式的時候通常有個共識，會根據檔案內容放在不同名稱意義的目錄下存放，以便專案的管理或協作時的方便性。

下表為本課程建議的目錄結構，大致上分為兩個區塊：

1. 作業報告檔案區
2. 持續編輯的源始碼區

```plain
HW<編號>（HW）/
├── 作業報告
└── 源始碼區（src）/
    ├── 主程式
    ├── 副程式
    └── 自訂標頭
```

考慮到大家使用的作業系統會不一樣，在此列出常見三種作業系統在建構專案時的情況如下：

> [!NOTE]
> 主程式檔名這裡示範叫 `main`，大家可根據自己的喜好調整檔名，不強制叫做 `main`。
>
> 可根據自身喜好、作業規模調整是否要建立副程式、自訂標頭來維護專案架構，不強制一定要建立。

### Windows

```plain
HW/
├── report.pdf
└── src/
    ├── main.cpp
    ├── function.cpp
    └── custom_header.h
```

### Linux/macOS

```plain
HW/
├── report.pdf
└── src/
    ├── main.cpp
    ├── function.cpp
    └── custom_header.h
```

## 參考資料

- Gilliland HE III. [What is a general C++ project structure like?](https://www.linkedin.com/pulse/what-general-c-project-structure-like-herbert-elwood-gilliland-iii). LinkedIn. Accessed July 24, 2024.
- SWLH. [C++ Project Structure and Cross-Platform Build With CMake](https://medium.com/swlh/c-project-structure-for-cmake-67d60135f6f5). Medium. Accessed July 24, 2024.
- Stack Overflow. [What's a good directory structure for larger C++ projects using Makefile? - Stack Overflow](https://stackoverflow.com/questions/2360734/whats-a-good-directory-structure-for-larger-c-projects-using-makefile). Accessed July 24, 2024.
- Reddit. [Project structure in C++!! - Reddit](https://www.reddit.com/r/cpp_questions/comments/m7k0bs/project_structure_in_c/). Accessed July 24, 2024.

### 推薦閱讀

- [markdown 語法](https://markdown.tw/)
- [Inline LaTeX 語法](https://hackmd.io/@sysprog/gnu-linux-dev/https%3A%2F%2Fhackmd.io%2Fs%2FB1RwlM85Z)

### 工具

- [目錄樹](https://tree.nathanfriend.io/)
