package main

import "fmt"

func main() {
	fmt.Println("SHALL WE PLAY A GAME?")
	var answer string
	fmt.Scanln(&answer)
	
	if answer == "yes" {
		fmt.Println("HOW ABOUT A NICE GAME OF CHESS?")
	} else {
		fmt.Println("OKAY THEN!")
	}
}