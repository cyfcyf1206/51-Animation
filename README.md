# 51-Animation

通过51单片机实现LED8*8点阵播放动画;

1.通过3转8解码器和for循环对每一列进行扫描;

2.通过数组来储存每一列LED亮灭情况（一个元素对应一列）;

3.设置延时防止扫描过快

4.设置一个递增变量将扫描的起始列向后移动，即使显示屏右侧内容滚动到左侧。
