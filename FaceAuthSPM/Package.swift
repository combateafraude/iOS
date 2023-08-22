// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FaceAuthSPM",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "FaceAuthSPM",
            targets: ["FaceAuthSPM"]),
    ],
    dependencies: [
        .package(url: "https://github.com/combateafraude/iOS/FaceLivenessSPM", branch: "releases")
    ],
    targets: [
        .target(
            name: "FaceAuthSPM",
            dependencies: []),
        .testTarget(
            name: "FaceAuthSPMTests",
            dependencies: ["FaceAuthSPM"]),
    ]
)
