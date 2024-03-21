package com.purascents.base.analytics

import kotlinx.serialization.ExperimentalSerializationApi
import kotlinx.serialization.KSerializer
import kotlinx.serialization.builtins.BooleanArraySerializer
import kotlinx.serialization.builtins.ByteArraySerializer
import kotlinx.serialization.builtins.CharArraySerializer
import kotlinx.serialization.builtins.DoubleArraySerializer
import kotlinx.serialization.builtins.FloatArraySerializer
import kotlinx.serialization.builtins.IntArraySerializer
import kotlinx.serialization.builtins.LongArraySerializer
import kotlinx.serialization.builtins.ShortArraySerializer
import kotlinx.serialization.builtins.serializer
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonNull
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.buildJsonArray
import kotlinx.serialization.json.buildJsonObject
import kotlin.reflect.KClass

val String.Companion.EMPTY
    get() = ""

val emptyJsonObject = JsonObject(emptyMap())

fun Any.toJsonElement(): JsonElement {
    try {
        when (this) {
            is Map<*, *> -> {
                val value = this as Map<String, Any>
                return value.toJsonElement()
            }
            is Array<*> -> {
                val value = this as Array<Any>
                return value.toJsonElement()
            }
            is Collection<*> -> {
                val value = this as Collection<Any>
                return value.toJsonElement()
            }
            is Pair<*, *> -> {
                val value = this as Pair<Any, Any>
                return value.toJsonElement()
            }
            is Triple<*, *, *> -> {
                val value = this as Triple<Any, Any, Any>
                return value.toJsonElement()
            }
            is Map.Entry<*, *> -> {
                val value = this as Map.Entry<Any, Any>
                return value.toJsonElement()
            }
            else -> {
                serializerFor(this::class)?.let {
                    return Json.encodeToJsonElement(it, this)
                }
            }
        }
    } catch (e: Exception) {
        return JsonNull
    }

    return JsonNull
}

fun Map<String, Any>.toJsonElement(): JsonElement {
    return buildJsonObject {
        for ((key, value) in this@toJsonElement) {
            if (value is JsonElement) {
                put(key, value)
            } else {
                put(key, value.toJsonElement())
            }
        }
    }
}

fun Array<Any>.toJsonElement(): JsonArray {
    return buildJsonArray {
        for (item in this@toJsonElement) {
            if (item is JsonElement) {
                add(item)
            } else {
                add(item.toJsonElement())
            }
        }
    }
}

fun Collection<Any>.toJsonElement(): JsonArray {
    // Specifically chose Collection over Iterable, bcos
    // Iterable is more widely overriden, whereas Collection
    // is more in line with our target types eg: Lists, Sets etc
    return buildJsonArray {
        for (item in this@toJsonElement) {
            if (item is JsonElement) {
                add(item)
            } else {
                add(item.toJsonElement())
            }
        }
    }
}

fun Pair<Any, Any>.toJsonElement(): JsonElement {
    val v1 = first.toJsonElement()
    val v2 = second.toJsonElement()
    return buildJsonObject {
        put("first", v1)
        put("second", v2)
    }
}

fun Triple<Any, Any, Any>.toJsonElement(): JsonElement {
    val v1 = first.toJsonElement()
    val v2 = second.toJsonElement()
    val v3 = third.toJsonElement()
    return buildJsonObject {
        put("first", v1)
        put("second", v2)
        put("third", v3)
    }
}

fun Map.Entry<Any, Any>.toJsonElement(): JsonElement {
    val key = key.toJsonElement()
    val value = value.toJsonElement()
    return buildJsonObject {
        put("key", key)
        put("value", value)
    }
}

@OptIn(ExperimentalSerializationApi::class, ExperimentalUnsignedTypes::class)
val primitiveSerializers = mapOf(
    String::class to String.serializer(),
    Char::class to Char.serializer(),
    CharArray::class to CharArraySerializer(),
    Double::class to Double.serializer(),
    DoubleArray::class to DoubleArraySerializer(),
    Float::class to Float.serializer(),
    FloatArray::class to FloatArraySerializer(),
    Long::class to Long.serializer(),
    LongArray::class to LongArraySerializer(),
    Int::class to Int.serializer(),
    IntArray::class to IntArraySerializer(),
    Short::class to Short.serializer(),
    ShortArray::class to ShortArraySerializer(),
    Byte::class to Byte.serializer(),
    ByteArray::class to ByteArraySerializer(),
    Boolean::class to Boolean.serializer(),
    BooleanArray::class to BooleanArraySerializer(),
    Unit::class to Unit.serializer(),
    UInt::class to UInt.serializer(),
    ULong::class to ULong.serializer(),
    UByte::class to UByte.serializer(),
    UShort::class to UShort.serializer()
)

inline fun <reified T : Any> serializerFor(value: KClass<out T>): KSerializer<T>? {
    val serializer = primitiveSerializers[value] ?: return null
    return serializer as KSerializer<T>
}