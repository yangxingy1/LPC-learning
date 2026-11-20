int main(object me, string arg) {
    int *nums = ({ 1, 2, 3, 4, 5 });
    int *other = ({ 4, 5, 6, 7 });

    // 1. 集合运算（非常方便）
    int *merged = nums + other;   // 拼接: ({ 1, 2, 3, 4, 5, 4, 5, 6, 7 })
    int *diff   = nums - other;   // 差集: ({ 1, 2, 3 })
    int *inter  = nums & other;   // 交集: ({ 4, 5 })

    // 2. 切片（支持负数索引，从末尾倒数）
    int *slice  = nums[1..3];     // ({ 2, 3, 4 })
    int *tail   = nums[<2..<1];   // 最后两个元素: ({ 4, 5 })

    // %O 是 FluffOS 调试神器，可以直接把任意数据结构格式化打印出来
    write(sprintf("merged = %O\n", merged));
    write(sprintf("diff   = %O\n", diff));
    write(sprintf("inter  = %O\n", inter));
    write(sprintf("slice  = %O, tail = %O\n", slice, tail));

    return 1;
}