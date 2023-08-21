// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FaceLivenessPackage",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "FaceLivenessPackage",
            targets: ["FaceLivenessPackage"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        .package(url: "https://github.com/iProov/ios.git", from: "11.0.0-beta2"),
    ],
    targets: [
        .target(
            name: "FaceLivenessPackage",
            dependencies: [
                .product(name: "iProov", package: "ios")
            ]
        )
    ]
)
