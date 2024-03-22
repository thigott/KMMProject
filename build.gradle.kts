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
    apply(plugin = "maven-publish")

    val javadocJar by tasks.registering(Jar::class) {
        archiveClassifier.set("javadoc")
    }

    afterEvaluate {
        plugins.withId("com.android.library") {
            publishing {
                publications {
                    create<MavenPublication>("release") {
                        groupId = project.group.toString()
                        version = project.version.toString()
                        artifactId = project.name

                        afterEvaluate {
                            artifact("$buildDir/outputs/aar/${artifactId}-release.aar")
                        }
                    }
                }
            }
        }
    }
}


