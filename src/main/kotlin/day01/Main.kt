package day01
import readFile
import java.io.File

fun calculate(numbers: MutableList<Int>) {
    var sum = 0
    for (i in numbers.indices) {
        while (numbers[i] / 3 - 2 > 0) {
            numbers[i] = numbers[i] / 3 - 2
            sum += numbers[i]
        }
    }
    println(sum)
}

fun main() {
    val numbers = mutableListOf<Int>()
    val input = File("src/main/kotlin/day01/input.txt").inputStream()
    input.bufferedReader().useLines { lines ->
        lines.forEach { line ->
            numbers.add(line.toInt())
        }
    }

    calculate(numbers)
}
