import org.jetbrains.dokka.base.DokkaBase
import org.jetbrains.dokka.base.DokkaBaseConfiguration
import org.jetbrains.dokka.gradle.DokkaTask

plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    kotlin("plugin.serialization") version "1.9.20"
    id("com.android.library")
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
        summary = "Analytics module"
        homepage = "https://github.com/puradev/PuraMultiPlatformLibrary"
        version = "2.0.0"
        ios.deploymentTarget = "15.0"
        framework {
            baseName = "PuraAnalytics"
            isStatic = false
        }
    }
    
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(libs.bundles.koin)
                implementation(libs.kotlinSerialization)
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(libs.kotlin.test)
            }
        }
        val androidMain by getting {
            dependencies {
                implementation(libs.segment.analytics)
            }
        }
    }

    tasks.withType<DokkaTask>().configureEach {
        pluginConfiguration<DokkaBase, DokkaBaseConfiguration> {
            footerMessage = "(c) 2024 Pura"
            outputDirectory.set(rootDir.resolve("docs"))
            moduleName.set("Pura Analytics Library")
            dokkaSourceSets {
                configureEach {
                    includes.from("DokkaConfiguration.md")
                }
            }
        }
    }
}

android {
    namespace = "com.purascents.base.analytics"
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
