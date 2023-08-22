# FaceLivenessSPM

Smart camera that captures a reliable selfie of your user using artificial intelligence, capable of detecting and disapproving snapshots and recordings. Ideal for your onboarding.

## **Required permissions**

In the **`info.plist`** file, add the permissions below:

| **Permission**                           | **Reason**                 | **Required?** |
| ---------------------------------------- | -------------------------- | ------------- |
| **`Privacy - Camera Usage Description`** | To capture the user selfie | Yes           |

## **Utilization**

First, instantiate an object of type **`FaceLivenessSDK`**: 

```swift
let faceLiveness = FaceLivenessSDK.Builder()
    // see the table below
    .build()
```

|   |
| - |

### **FaceLivenessSDK.Builder**

<table data-header-hidden><thead><tr><th width="519"></th><th></th></tr></thead><tbody><tr><td><strong>Parameter</strong></td><td><strong>Required?</td></tr><tr><td><p><strong>.setCredentials(token: String, personId: String)</strong></p><p>token: Usage token associated with your CAF account
</p><p> personId: identifier of the user in which is registered the face of the user who will perform the facematch. Currently, this value only accepts the user's CPF.</p></td><td>Yes</td></tr>
<tr><td><p><strong>.setFilter(filter: Filter)</strong></p><p>filter: Camera filter type, if not placed return lineDrawing as a default filter
</p></td><td>No</td></tr>
</tbody></table>


|   |
| - |

## **Getting the result**

To get the result, you must implement the **`FaceLivenessDelegate`** delegate in your class:

```swift
faceLivenessSDK?.delegate = self
```

|   |
| - |

### **FaceLivenessResult**

<table data-header-hidden><thead><tr><th width="530"></th><th></th></tr></thead><tbody><tr><td><strong>Parameter</strong></td><td><strong>Can it be null?</strong></td></tr><tr><td><p><strong><code>signedResponse: String</code></strong></p><p>Signed response from the CAF server confirming that the captured selfie has a real face. This parameter is used to get an extra layer of security, checking that the signature of the response is not broken, or caused by request interception. If it is broken, there is a strong indication of request interception.|.</p></td><td>No</td></tr><tr><td><p><strong><p><strong><code>errorMessage: String</code></strong></p><p>The identifier that informs if an error has occurred.</p></td><td>Yes</td></tr><tr><td><p><strong></td></tr></tbody></table>
