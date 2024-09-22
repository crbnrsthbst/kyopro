// https://atcoder.jp/contests/abc128/tasks/abc128_c

package main

import (
	"fmt"
)

func main() {
	var numButtons, numBulbs int
	fmt.Scan(&numButtons, &numBulbs)
	bulbButtons := make([][]int, numBulbs)
	for i := 0; i < numBulbs; i++ {
		var k int
		fmt.Scan(&k)
		bulbButtons[i] = make([]int, k)
		for j := 0; j < k; j++ {
			fmt.Scan(&bulbButtons[i][j])
			bulbButtons[i][j]--
		}
	}
	onConds := make([]int, numBulbs)
	for i := 0; i < numBulbs; i++ {
		fmt.Scan(&onConds[i])
	}

	ans := 0
	for buttons := 0; buttons < (1 << numButtons); buttons++ {
		onBulbs := 0
		for i := 0; i < numBulbs; i++ {
			onButtons := 0
			for _, button := range bulbButtons[i] {
				if buttons&(1<<button) != 0 {
					onButtons++
				}
			}
			if onButtons%2 == onConds[i] {
				onBulbs++
			}
		}
		if onBulbs == numBulbs {
			ans++
		}
	}
	fmt.Println(ans)
}
