

package day01
import readFile
import java.io.File

/*fun main(args: Array<String>) {
    val input = readFile("src/main/kotlin/day01/input.txt")
    val ints = input.map { it.toInt() }
    var sum = 0
    val dividedInt = ints.map {
        var value = it
        while (value > 0) {
            value = (value / 3) - 2
            val value1: Int = value
            sum += value1
            
        }
        value
    }

}*/

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
