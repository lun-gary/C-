#include <stdio.h>
// MinGW 下用 _setmode 配置 UTF-8 输出
#include <fcntl.h>
#include <io.h>

int main() {
    // 关键：设置标准输出为 UTF-8 编码
    _setmode(_fileno(stdout), _O_U8TEXT);
    
    // 输出中文（字符串前加 L 表示宽字符，适配 UTF-8）
    wprintf(L"====================\n");
    wprintf(L"UTF-8 编码的中文正常啦！\n");
    wprintf(L"====================\n");
    wprintf(L"\n按任意键退出...");
    getwchar(); // 宽字符版本的暂停（对应 wprintf）
    return 0;
}