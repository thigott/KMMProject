plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    id("com.android.library")
    id("maven-publish")
    id("io.github.luca992.multiplatform-swiftpackage").version("2.2.0")
}

version = "2.0.0"

@OptIn(org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi::class)
kotlin {
    targetHierarchy.default()

    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }
    iosX64()
    iosArm64()
    iosSimulatorArm64()

    cocoapods {
        summary = "Main module"
        homepage = "https://github.com/puradev/PuraMultiPlatformLibrary"
        version = "2.0.0"
        ios.deploymentTarget = "15.0"
        framework {
            baseName = "PuraLibrary"
            isStatic = false
            export(project(":analytics"))
        }
    }

    multiplatformSwiftPackage {
        packageName("PuraMultiplatform")
        swiftToolsVersion("5.7.1")
        outputDirectory(File(rootDir.path))
        targetPlatforms {
            iOS { v("15") }
        }
    }
    
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(libs.bundles.koin)
                api(project(":analytics"))
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(libs.kotlin.test)
            }
        }
    }
}

dependencies {
    api(project(":analytics"))
}

publishing {
    publications {
        register<MavenPublication>("release") {
            groupId = "com.github.puradev"
            version = "2.0.0"

            afterEvaluate {
                from(components["release"])
            }
        }
    }
}

android {
    namespace = "com.purascents.puramultiplatformlibrary"
    compileSdk = 34
    defaultConfig {
        minSdk = 23
    }

    publishing {
        singleVariant("release") {
            withSourcesJar()
            withJavadocJar()
        }
    }
}
