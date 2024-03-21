plugins {
    //trick: for the same plugin versions in all sub-modules
    id("com.android.library").version("8.1.1").apply(false)
    kotlin("multiplatform").version("1.9.20").apply(false)
    id("org.jetbrains.kotlin.plugin.serialization").version("1.9.20")
    id("org.jetbrains.kotlin.android") version "1.9.20" apply false
    id("maven-publish")
}


tasks.register("clean", Delete::class) {
    delete(rootProject.buildDir)
}

subprojects {
    apply {
        plugin("maven-publish")
    }

    afterEvaluate {
        plugins.withId("com.android.library") {
            publishing {
                publications {
                    register<MavenPublication>("release") {
                        groupId = "com.github.thigott"
                        version = "2.0.1"

                        afterEvaluate {
                            val source = "$buildDir/outputs/aar/${artifactId}-release.aar"
                            artifact(source)
                        }
                    }
                }
            }
        }
    }
}


