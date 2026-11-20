int main(object me, string arg) {
    string item;
    int count;

    if (!arg || arg == "") {
        write("用法: learn6 <物品名> <数量>  例如: learn6 金疮药 5\n");
        return 1;
    }

    // 尝试匹配 "字符串 + 空格 + 整数"
    if (sscanf(arg, "%s %d", item, count) == 2) {
        write(sprintf("解析成功 -> 物品: [%s], 数量: [%d]\n", item, count));
    } else {
        write("参数格式不对！请按 'learn6 物品名 数量' 的格式输入。\n");
    }

    return 1;
}