// swift-tools-version:5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

// Starting with Xcode 12, we don't need to depend on our own libxml2 target (unless on Linux)
#if os(Linux)
let dependencies: [Target.Dependency] = ["libxml2"]
#else
let dependencies: [Target.Dependency] = []
#endif

let package = Package(
  name: "Fuzi",
  products: [
    .library(name: "Fuzi", targets: ["Fuzi"]),
  ],
  targets: [
    .systemLibrary(
      name: "libxml2",
      path: "Modules",
      providers: [
          .apt(["libxml2-dev"])
      ]),
    .target(
      name: "Fuzi",
      dependencies: dependencies,
      path: "Sources"),
    .testTarget(
      name: "FuziTests",
      dependencies: ["Fuzi"],
      path: "Tests")
  ]
)
