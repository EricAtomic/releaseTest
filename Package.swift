// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "AtomicSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "AtomicSDK",
            targets: ["AtomicSDK", "AACCore"]),
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(name: "AtomicSDK", path: "iOS/AtomicSDK.xcframework"),
        .binaryTarget(name: "AACCore", path: "core/AACCore.xcframework")
    ]
)
