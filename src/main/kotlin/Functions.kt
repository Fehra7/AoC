import java.io.File
import java.io.InputStream

fun readFile(fileName: String): List<String> {
    val inputStream: InputStream = File(fileName).inputStream()
    val lineList = mutableListOf<String>()
    inputStream.bufferedReader().forEachLine { lineList.add(it) }
    return lineList
}

fun List<Int>.printList() = forEach { println(it) }
