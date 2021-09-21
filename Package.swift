// swift-tools-version:5.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

#if os(Windows)
let systemLibraries: [Target] = [
  .systemLibrary(
      name: "libxml2",
      path: "Modules"
  ),
]
#else
var providers: [SystemPackageProvider] = [.apt(["libxml2-dev"])]
#if swift(<5.2)
providers += [.brew(["libxml2"])]
#endif
let systemLibraries: [Target] = [
    .systemLibrary(
        name: "libxml2",
        path: "Modules",
        pkgConfig: "libxml-2.0",
        providers: providers
    )
]
#endif

let package = Package(
  name: "Fuzi",
  products: [
    .library(name: "Fuzi", targets: ["Fuzi"]),
  ],
  targets: systemLibraries + [
    .target(
      name: "Fuzi",
      path: "Sources",
      dependencies: ["libxml2"]),
    .testTarget(
      name: "FuziTests",
      dependencies: ["Fuzi"],
      path: "Tests"
    )
  ]
)
