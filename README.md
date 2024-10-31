![Caf](https://github.com/combateafraude/iOS/raw/main/images/caf_icon.png)

# Caf iOS

## Current versions

### Stable

| SDK | Framework | SPM |
| ------- | ------------- | ------- |
| [DocumentDetector](https://docs.caf.io/sdks/ios/getting-started/document-detector/v9-or-above) | `pod 'DocumentDetector', '15.0.1'` | [SPM Repository](https://github.com/combateafraude/DocumentDetector) |
| [FaceAuth](https://docs.caf.io/sdks/ios/getting-started/faceauth) | `pod 'FaceAuth', '6.1.0'` |
| [FaceLiveness](https://docs.caf.io/sdks/ios/getting-started/faceliveness) | `pod 'FaceLiveness', '6.2.0'` | [SPM Repository](https://github.com/combateafraude/FaceLiveness) |

#### Requirements

| Deployment Info | Version |
| --------------- | ------- |
| iOS Target | 13.0+ |
| Xcode | 15.4+ |
| Swift | 5.10+ |

- A valid [caf mobileToken](https://docs.caf.io/sdks/access-token).
- Cocoapods installed

#### Camera Usage Description

Make sure to add an NSCameraUsageDescription entry to your app's Info.plist file, explaining why your app requires camera access. For example: "To scan and verify identity documents."

## SPM SDK installation

[DocumentDetector](https://github.com/combateafraude/DocumentDetector/blob/main/README.md)
[FaceLiveness](https://github.com/combateafraude/FaceLiveness/blob/main/README.md)

## Cocoapods SDK installation

Ensure you have CocoaPods installed. CocoaPods is a dependency manager for Swift and Objective-C Cocoa projects. If not installed, go through this [getting started](https://guides.cocoapods.org/using/getting-started.html) guide.

To initialize CocoaPods, navigate to your project directory in the terminal and run the following command to create a Podfile, if one doesn't already exist:

```console
pod init
```

In your Podfile, you need to specify the reference to our framework. If you're adding our SDK for the first time, add the following line, replacing `<framework_name>` with the actual [name](#stable) of the framework and `<version>` with the desired [version](#stable):

```ruby
target 'your-project' do
  use_frameworks!

  pod '<framework_name>', '<version>'
```

After editing your Podfile, save it and run the following command to install the SDK along with its dependencies and update your local spec repositories:

```console
pod install --repo-update
```

For additional support and documentation, visit [CocoaPods Guides](https://guides.cocoapods.org).

## Privacy Policy and Terms & Conditions of Use

When using our SDKs, please make sure that you agree with our [Privacy Policy](https://en.caf.io/politicas/politicas-de-privacidade) and our [Terms and Conditions of Use](https://en.caf.io/politicas/termos-e-condicoes-de-uso).
