// swift-tools-version:5.7.1
import PackageDescription

let package = Package(
    name: "PuraMultiplatform",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "PuraMultiplatform",
            targets: ["PuraMultiplatform"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "PuraMultiplatform",
            path: "./PuraMultiplatform.xcframework"
        ),
    ]
)
