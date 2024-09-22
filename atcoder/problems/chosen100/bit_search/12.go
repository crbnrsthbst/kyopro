package main

import (
	"fmt"
)

func main() {
	var numPeople, numRelations int
	fmt.Scan(&numPeople, &numRelations)
	relations := [12][12]bool{}
	for i := 0; i < numRelations; i++ {
		var p1, p2 int
		fmt.Scan(&p1, &p2)
		p1--
		p2--
		relations[p1][p2] = true
		relations[p2][p1] = true
	}

	maxNumMembers := 0
	for group := 0; group < (1 << numPeople); group++ {
		isValid := true
		numMembers := 0
		for i := 0; i < numPeople; i++ {
			if group&(1<<i) != 0 {
				numMembers++
				for j := i + 1; j < numPeople; j++ {
					if group&(1<<j) != 0 && !relations[i][j] {
						isValid = false
					}
				}
			}
		}
		if isValid {
			// maxNumMembers = max(maxNumMembers, numMembers)
			if(numMembers > maxNumMembers){
				maxNumMembers = numMembers
			}
		}
	}
	fmt.Println(maxNumMembers)
}