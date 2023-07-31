function bubbleSort(nums) {
  const array = [...nums]
  const length = array.length

  // i 表示的是比较的轮次数，不表示比较运行的方向
  for (let i = 0; i < length - 1; i++) {
    // 如果 j 从 0 开始，则每一轮需要排好最后一个
    // 如果 j 从 i+1 开始，则每一轮需要排好第i个
    for (let j = 0; j < length - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        // 交换位置
        let temp = array[j]
        array[j] = array[j + 1]
        array[j + 1] = temp
      }
    }
  }

  return array
}

// 测试示例:
const arr = [5, 3, 8, 4, 2]
console.log(bubbleSort(arr)) // 输出 [2, 3, 4, 5, 8]
