plugins {
    //trick: for the same plugin versions in all sub-modules
    id("com.android.library").version("8.1.1").apply(false)
    kotlin("multiplatform").version("1.9.20").apply(false)
    id("org.jetbrains.kotlin.plugin.serialization").version("1.9.20")
    id("org.jetbrains.kotlin.android") version "1.9.20" apply false
    id("maven-publish")
    id("org.jetbrains.dokka") version "1.9.20"
}

buildscript {
    dependencies {
        classpath(libs.dokka)
    }
}

tasks.register("clean", Delete::class) {
    delete(rootProject.buildDir)
}


