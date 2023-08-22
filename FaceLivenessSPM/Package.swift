// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FaceLivenessSPM",
    products: [
        .library(
            name: "FaceLivenessSPM",
            targets: ["FaceLivenessSPM"]),
    ],
    dependencies: [
        .package(url: "https://github.com/iProov/ios.git", from: "11.0.0-beta2"),
    ],
    targets: [
        .target(
            name: "FaceLivenessSPM",
            dependencies: [
                .product(name: "iProov", package: "ios")
            ]),
    ]
)
