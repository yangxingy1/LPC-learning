void poison_tick(object me, int left_times) {
    if (!objectp(me)) return; // 防止玩家已经断线/销毁

    write(sprintf("[中毒] 你感到一阵眩晕，损失了 10 点气血！（剩余 %d 次）\n", left_times - 1));

    if (left_times > 1) {
        // 2 秒后再次回调自己
        call_out("poison_tick", 2, me, left_times - 1);
    } else {
        write("[状态] 毒素已经彻底清除。\n");
    }
}

int main(object me, string arg) {
    write("你不慎中了毒，每 2 秒发作一次，共持续 3 次...\n");
    // 2 秒后调用当前对象的 poison_tick 函数，传入参数 me 和 3
    int handle = call_out("poison_tick", 2, me, 3);
    // 可以提前结束回调
    remove_call_out(handle);
    return 1;
}