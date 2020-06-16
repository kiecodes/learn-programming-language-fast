package main

import "fmt"

func main() {
	fmt.Println("what is your name?")

	var name string
	fmt.Scanln(&name)
	
    fmt.Println("hello", name)
}