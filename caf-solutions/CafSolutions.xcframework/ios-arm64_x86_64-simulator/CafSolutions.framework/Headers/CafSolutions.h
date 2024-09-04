#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CafSolutionsCafHttpResponse, CafSolutionsKotlinEnumCompanion, CafSolutionsKotlinEnum<E>, CafSolutionsCafEvent, CafSolutionsKotlinArray<T>, CafSolutionsCafEventType, CafSolutionsCafFeatureToggleEvent, CafSolutionsCafPlatform, CafSolutionsCafBooleanValueCompanion, CafSolutionsCafBooleanValue, CafSolutionsCafFeatureToggleFieldsCompanion, CafSolutionsCafFeatureToggleFields, CafSolutionsCafFeatureToggleResponseCompanion, CafSolutionsCafFeatureToggleResponse, CafSolutionsKotlinx_serialization_jsonJsonElement, CafSolutionsCafAPIResponsePropertiesCompanion, CafSolutionsCafAPIResponseProperties, CafSolutionsCafAppIdentifiedPropertiesCompanion, CafSolutionsCafAppIdentifiedProperties, CafSolutionsCafDefaultPropertiesCompanion, CafSolutionsCafDeviceDataPropertiesCompanion, CafSolutionsCafDeviceDataProperties, CafSolutionsCafDeviceIdentifiedPropertiesCompanion, CafSolutionsCafDeviceIdentifiedProperties, CafSolutionsCafErrorPropertiesCompanion, CafSolutionsCafErrorProperties, CafSolutionsCafMemoryInfoPropertiesCompanion, CafSolutionsCafMemoryInfoProperties, CafSolutionsCafPermissionPropertiesCompanion, CafSolutionsCafPermissionProperties, CafSolutionsCafPropertiesBaseCompanion, CafSolutionsCafSDKConfigurationPropertiesCompanion, CafSolutionsCafSDKConfigurationProperties, CafSolutionsCafSDKResultPropertiesCompanion, CafSolutionsCafSDKResultProperties, CafSolutionsCafTrackerCompanion, CafSolutionsKotlinx_serialization_jsonJsonElementCompanion, CafSolutionsKotlinThrowable, CafSolutionsKotlinException, CafSolutionsKotlinRuntimeException, CafSolutionsKotlinIllegalStateException, CafSolutionsKotlinx_serialization_coreSerializersModule, CafSolutionsKotlinx_serialization_coreSerialKind, CafSolutionsKotlinNothing;

@protocol CafSolutionsKotlinComparable, CafSolutionsKotlinx_serialization_coreKSerializer, CafSolutionsCafPropertiesBase, CafSolutionsKotlinIterator, CafSolutionsKotlinx_serialization_coreEncoder, CafSolutionsKotlinx_serialization_coreSerialDescriptor, CafSolutionsKotlinx_serialization_coreSerializationStrategy, CafSolutionsKotlinx_serialization_coreDecoder, CafSolutionsKotlinx_serialization_coreDeserializationStrategy, CafSolutionsKotlinx_serialization_coreCompositeEncoder, CafSolutionsKotlinAnnotation, CafSolutionsKotlinx_serialization_coreCompositeDecoder, CafSolutionsKotlinx_serialization_coreSerializersModuleCollector, CafSolutionsKotlinKClass, CafSolutionsKotlinKDeclarationContainer, CafSolutionsKotlinKAnnotatedElement, CafSolutionsKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CafSolutionsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CafSolutionsBase (CafSolutionsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CafSolutionsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CafSolutionsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCafSolutionsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CafSolutionsNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface CafSolutionsByte : CafSolutionsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CafSolutionsUByte : CafSolutionsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CafSolutionsShort : CafSolutionsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CafSolutionsUShort : CafSolutionsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CafSolutionsInt : CafSolutionsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CafSolutionsUInt : CafSolutionsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CafSolutionsLong : CafSolutionsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CafSolutionsULong : CafSolutionsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CafSolutionsFloat : CafSolutionsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CafSolutionsDouble : CafSolutionsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CafSolutionsBoolean : CafSolutionsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafHttpResponse")))
@interface CafSolutionsCafHttpResponse : CafSolutionsBase
- (instancetype)initWithStatusCode:(int32_t)statusCode body:(NSString * _Nullable)body __attribute__((swift_name("init(statusCode:body:)"))) __attribute__((objc_designated_initializer));
- (CafSolutionsCafHttpResponse *)doCopyStatusCode:(int32_t)statusCode body:(NSString * _Nullable)body __attribute__((swift_name("doCopy(statusCode:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol CafSolutionsKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface CafSolutionsKotlinEnum<E> : CafSolutionsBase <CafSolutionsKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafEvent")))
@interface CafSolutionsCafEvent : CafSolutionsKotlinEnum<CafSolutionsCafEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CafSolutionsCafEvent *identify __attribute__((swift_name("identify")));
@property (class, readonly) CafSolutionsCafEvent *startSdk __attribute__((swift_name("startSdk")));
@property (class, readonly) CafSolutionsCafEvent *cameraPermissionRequested __attribute__((swift_name("cameraPermissionRequested")));
@property (class, readonly) CafSolutionsCafEvent *cameraPermissionGranted __attribute__((swift_name("cameraPermissionGranted")));
@property (class, readonly) CafSolutionsCafEvent *cameraPermissionDenied __attribute__((swift_name("cameraPermissionDenied")));
@property (class, readonly) CafSolutionsCafEvent *previewScreenRetryClicked __attribute__((swift_name("previewScreenRetryClicked")));
@property (class, readonly) CafSolutionsCafEvent *previewAccepted __attribute__((swift_name("previewAccepted")));
@property (class, readonly) CafSolutionsCafEvent *firstOpen __attribute__((swift_name("firstOpen")));
@property (class, readonly) CafSolutionsCafEvent *permissionRequested __attribute__((swift_name("permissionRequested")));
@property (class, readonly) CafSolutionsCafEvent *permissionGranted __attribute__((swift_name("permissionGranted")));
@property (class, readonly) CafSolutionsCafEvent *permissionDenied __attribute__((swift_name("permissionDenied")));
@property (class, readonly) CafSolutionsCafEvent *captureScreenOpened __attribute__((swift_name("captureScreenOpened")));
@property (class, readonly) CafSolutionsCafEvent *documentFrontCaptureStarted __attribute__((swift_name("documentFrontCaptureStarted")));
@property (class, readonly) CafSolutionsCafEvent *documentBackCaptureStarted __attribute__((swift_name("documentBackCaptureStarted")));
@property (class, readonly) CafSolutionsCafEvent *documentCapturedValidated __attribute__((swift_name("documentCapturedValidated")));
@property (class, readonly) CafSolutionsCafEvent *sdkResult __attribute__((swift_name("sdkResult")));
@property (class, readonly) CafSolutionsCafEvent *sdkClosed __attribute__((swift_name("sdkClosed")));
@property (class, readonly) CafSolutionsCafEvent *sdkConfiguration __attribute__((swift_name("sdkConfiguration")));
@property (class, readonly) CafSolutionsCafEvent *appIdentified __attribute__((swift_name("appIdentified")));
@property (class, readonly) CafSolutionsCafEvent *deviceIdentified __attribute__((swift_name("deviceIdentified")));
@property (class, readonly) CafSolutionsCafEvent *deviceData __attribute__((swift_name("deviceData")));
@property (class, readonly) CafSolutionsCafEvent *captureRequested __attribute__((swift_name("captureRequested")));
@property (class, readonly) CafSolutionsCafEvent *captureTaken __attribute__((swift_name("captureTaken")));
@property (class, readonly) CafSolutionsCafEvent *captureInvalid __attribute__((swift_name("captureInvalid")));
@property (class, readonly) CafSolutionsCafEvent *captureFinished __attribute__((swift_name("captureFinished")));
@property (class, readonly) CafSolutionsCafEvent *qualityVerified __attribute__((swift_name("qualityVerified")));
@property (class, readonly) CafSolutionsCafEvent *memoryInfo __attribute__((swift_name("memoryInfo")));
@property (class, readonly) CafSolutionsCafEvent *documentValidated __attribute__((swift_name("documentValidated")));
@property (class, readonly) CafSolutionsCafEvent *documentCaptureCompleted __attribute__((swift_name("documentCaptureCompleted")));
@property (class, readonly) CafSolutionsCafEvent *previewScreenOpened __attribute__((swift_name("previewScreenOpened")));
@property (class, readonly) CafSolutionsCafEvent *attestationRouteCalled __attribute__((swift_name("attestationRouteCalled")));
@property (class, readonly) CafSolutionsCafEvent *uploadRouteCalled __attribute__((swift_name("uploadRouteCalled")));
@property (class, readonly) CafSolutionsCafEvent *validationRouteCalled __attribute__((swift_name("validationRouteCalled")));
@property (class, readonly) CafSolutionsCafEvent *imageUploadLinksRouteCalled __attribute__((swift_name("imageUploadLinksRouteCalled")));
@property (class, readonly) CafSolutionsCafEvent *apiResponse __attribute__((swift_name("apiResponse")));
@property (class, readonly) CafSolutionsCafEvent *internalError __attribute__((swift_name("internalError")));
@property (class, readonly) CafSolutionsCafEvent *serverDownError __attribute__((swift_name("serverDownError")));
@property (class, readonly) CafSolutionsCafEvent *networkError __attribute__((swift_name("networkError")));
@property (class, readonly) CafSolutionsCafEvent *serverError __attribute__((swift_name("serverError")));
@property (class, readonly) CafSolutionsCafEvent *providerInstallationError __attribute__((swift_name("providerInstallationError")));
@property (class, readonly) CafSolutionsCafEvent *securityError __attribute__((swift_name("securityError")));
@property (class, readonly) CafSolutionsCafEvent *crash __attribute__((swift_name("crash")));
+ (CafSolutionsKotlinArray<CafSolutionsCafEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CafSolutionsCafEvent *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafEventType")))
@interface CafSolutionsCafEventType : CafSolutionsKotlinEnum<CafSolutionsCafEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CafSolutionsCafEventType *userInteraction __attribute__((swift_name("userInteraction")));
@property (class, readonly) CafSolutionsCafEventType *apiCall __attribute__((swift_name("apiCall")));
@property (class, readonly) CafSolutionsCafEventType *sdkStep __attribute__((swift_name("sdkStep")));
@property (class, readonly) CafSolutionsCafEventType *sdkFlow __attribute__((swift_name("sdkFlow")));
@property (class, readonly) CafSolutionsCafEventType *sdkError __attribute__((swift_name("sdkError")));
@property (class, readonly) CafSolutionsCafEventType *identify __attribute__((swift_name("identify")));
@property (class, readonly) CafSolutionsCafEventType *deviceInfo __attribute__((swift_name("deviceInfo")));
@property (class, readonly) CafSolutionsCafEventType *crash __attribute__((swift_name("crash")));
+ (CafSolutionsKotlinArray<CafSolutionsCafEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CafSolutionsCafEventType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *eventTypeName __attribute__((swift_name("eventTypeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafFeatureToggleEvent")))
@interface CafSolutionsCafFeatureToggleEvent : CafSolutionsKotlinEnum<CafSolutionsCafFeatureToggleEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CafSolutionsCafFeatureToggleEvent *crashlytics __attribute__((swift_name("crashlytics")));
@property (class, readonly) CafSolutionsCafFeatureToggleEvent *analytics __attribute__((swift_name("analytics")));
+ (CafSolutionsKotlinArray<CafSolutionsCafFeatureToggleEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CafSolutionsCafFeatureToggleEvent *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *featureName __attribute__((swift_name("featureName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafPlatform")))
@interface CafSolutionsCafPlatform : CafSolutionsKotlinEnum<CafSolutionsCafPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CafSolutionsCafPlatform *nativeAndroid __attribute__((swift_name("nativeAndroid")));
@property (class, readonly) CafSolutionsCafPlatform *nativeIos __attribute__((swift_name("nativeIos")));
@property (class, readonly) CafSolutionsCafPlatform *flutterAndroid __attribute__((swift_name("flutterAndroid")));
@property (class, readonly) CafSolutionsCafPlatform *flutterIos __attribute__((swift_name("flutterIos")));
@property (class, readonly) CafSolutionsCafPlatform *reactNativeAndroid __attribute__((swift_name("reactNativeAndroid")));
@property (class, readonly) CafSolutionsCafPlatform *reactNativeIos __attribute__((swift_name("reactNativeIos")));
+ (CafSolutionsKotlinArray<CafSolutionsCafPlatform *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CafSolutionsCafPlatform *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *platformName __attribute__((swift_name("platformName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafBooleanValue")))
@interface CafSolutionsCafBooleanValue : CafSolutionsBase
- (instancetype)initWithBooleanValue:(BOOL)booleanValue __attribute__((swift_name("init(booleanValue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafBooleanValueCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafBooleanValue *)doCopyBooleanValue:(BOOL)booleanValue __attribute__((swift_name("doCopy(booleanValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL booleanValue __attribute__((swift_name("booleanValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafBooleanValue.Companion")))
@interface CafSolutionsCafBooleanValueCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafBooleanValueCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafFeatureToggleFields")))
@interface CafSolutionsCafFeatureToggleFields : CafSolutionsBase
- (instancetype)initWithEnabled:(CafSolutionsCafBooleanValue *)enabled __attribute__((swift_name("init(enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafFeatureToggleFieldsCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafFeatureToggleFields *)doCopyEnabled:(CafSolutionsCafBooleanValue *)enabled __attribute__((swift_name("doCopy(enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CafSolutionsCafBooleanValue *enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafFeatureToggleFields.Companion")))
@interface CafSolutionsCafFeatureToggleFieldsCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafFeatureToggleFieldsCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafFeatureToggleResponse")))
@interface CafSolutionsCafFeatureToggleResponse : CafSolutionsBase
- (instancetype)initWithFields:(CafSolutionsCafFeatureToggleFields *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafFeatureToggleResponseCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafFeatureToggleResponse *)doCopyFields:(CafSolutionsCafFeatureToggleFields *)fields __attribute__((swift_name("doCopy(fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CafSolutionsCafFeatureToggleFields *fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafFeatureToggleResponse.Companion")))
@interface CafSolutionsCafFeatureToggleResponseCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafFeatureToggleResponseCompanion *shared __attribute__((swift_name("shared")));
- (CafSolutionsCafFeatureToggleResponse *)fromJsonJson:(NSString *)json __attribute__((swift_name("fromJson(json:)")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CafPropertiesBase")))
@protocol CafSolutionsCafPropertiesBase
@required
- (CafSolutionsKotlinx_serialization_jsonJsonElement *)toJsonElement __attribute__((swift_name("toJsonElement()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *personId __attribute__((swift_name("personId")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafAPIResponseProperties")))
@interface CafSolutionsCafAPIResponseProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithApiEndpoint:(NSString *)apiEndpoint responseCode:(NSString *)responseCode responseTime:(NSString *)responseTime responseData:(NSString *)responseData __attribute__((swift_name("init(apiEndpoint:responseCode:responseTime:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithApiEndpoint:(NSString *)apiEndpoint responseCode:(NSString *)responseCode responseTime:(NSString *)responseTime responseData:(NSString *)responseData requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(apiEndpoint:responseCode:responseTime:responseData:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafAPIResponsePropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafAPIResponseProperties *)doCopyApiEndpoint:(NSString *)apiEndpoint responseCode:(NSString *)responseCode responseTime:(NSString *)responseTime responseData:(NSString *)responseData requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(apiEndpoint:responseCode:responseTime:responseData:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiEndpoint __attribute__((swift_name("apiEndpoint")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@property (readonly) NSString *responseCode __attribute__((swift_name("responseCode")));
@property (readonly) NSString *responseData __attribute__((swift_name("responseData")));
@property (readonly) NSString *responseTime __attribute__((swift_name("responseTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafAPIResponseProperties.Companion")))
@interface CafSolutionsCafAPIResponsePropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafAPIResponsePropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafAppIdentifiedProperties")))
@interface CafSolutionsCafAppIdentifiedProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithAppName:(NSString *)appName appVersion:(NSString *)appVersion __attribute__((swift_name("init(appName:appVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAppName:(NSString *)appName appVersion:(NSString *)appVersion requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(appName:appVersion:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafAppIdentifiedPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafAppIdentifiedProperties *)doCopyAppName:(NSString *)appName appVersion:(NSString *)appVersion requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(appName:appVersion:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appName __attribute__((swift_name("appName")));
@property (readonly) NSString *appVersion __attribute__((swift_name("appVersion")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafAppIdentifiedProperties.Companion")))
@interface CafSolutionsCafAppIdentifiedPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafAppIdentifiedPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CafDefaultProperties")))
@interface CafSolutionsCafDefaultProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithRequestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafDefaultPropertiesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafDefaultProperties.Companion")))
@interface CafSolutionsCafDefaultPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafDefaultPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafDeviceDataProperties")))
@interface CafSolutionsCafDeviceDataProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithDeviceData:(NSString *)deviceData __attribute__((swift_name("init(deviceData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDeviceData:(NSString *)deviceData requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(deviceData:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafDeviceDataPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafDeviceDataProperties *)doCopyDeviceData:(NSString *)deviceData requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(deviceData:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deviceData __attribute__((swift_name("deviceData")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafDeviceDataProperties.Companion")))
@interface CafSolutionsCafDeviceDataPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafDeviceDataPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafDeviceIdentifiedProperties")))
@interface CafSolutionsCafDeviceIdentifiedProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithDeviceId:(NSString *)deviceId __attribute__((swift_name("init(deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDeviceId:(NSString *)deviceId requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(deviceId:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafDeviceIdentifiedPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafDeviceIdentifiedProperties *)doCopyDeviceId:(NSString *)deviceId requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(deviceId:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafDeviceIdentifiedProperties.Companion")))
@interface CafSolutionsCafDeviceIdentifiedPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafDeviceIdentifiedPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafErrorProperties")))
@interface CafSolutionsCafErrorProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithErrorCode:(NSString *)errorCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorCode:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithErrorCode:(NSString *)errorCode errorMessage:(NSString *)errorMessage requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(errorCode:errorMessage:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafErrorPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafErrorProperties *)doCopyErrorCode:(NSString *)errorCode errorMessage:(NSString *)errorMessage requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(errorCode:errorMessage:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafErrorProperties.Companion")))
@interface CafSolutionsCafErrorPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafErrorPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafMemoryInfoProperties")))
@interface CafSolutionsCafMemoryInfoProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithMemoryUsedInMB:(NSString *)memoryUsedInMB freeMemoryInMB:(NSString *)freeMemoryInMB __attribute__((swift_name("init(memoryUsedInMB:freeMemoryInMB:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemoryUsedInMB:(NSString *)memoryUsedInMB freeMemoryInMB:(NSString *)freeMemoryInMB requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(memoryUsedInMB:freeMemoryInMB:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafMemoryInfoPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafMemoryInfoProperties *)doCopyMemoryUsedInMB:(NSString *)memoryUsedInMB freeMemoryInMB:(NSString *)freeMemoryInMB requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(memoryUsedInMB:freeMemoryInMB:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *freeMemoryInMB __attribute__((swift_name("freeMemoryInMB")));
@property (readonly) NSString *memoryUsedInMB __attribute__((swift_name("memoryUsedInMB")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafMemoryInfoProperties.Companion")))
@interface CafSolutionsCafMemoryInfoPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafMemoryInfoPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafPermissionProperties")))
@interface CafSolutionsCafPermissionProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithPermissions:(NSArray<NSString *> *)permissions __attribute__((swift_name("init(permissions:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPermissions:(NSArray<NSString *> *)permissions requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(permissions:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafPermissionPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafPermissionProperties *)doCopyPermissions:(NSArray<NSString *> *)permissions requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(permissions:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *permissions __attribute__((swift_name("permissions")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafPermissionProperties.Companion")))
@interface CafSolutionsCafPermissionPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafPermissionPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafPropertiesBaseCompanion")))
@interface CafSolutionsCafPropertiesBaseCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafPropertiesBaseCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(CafSolutionsKotlinArray<id<CafSolutionsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafSDKConfigurationProperties")))
@interface CafSolutionsCafSDKConfigurationProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithConfiguration:(NSString *)configuration __attribute__((swift_name("init(configuration:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfiguration:(NSString *)configuration requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(configuration:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafSDKConfigurationPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafSDKConfigurationProperties *)doCopyConfiguration:(NSString *)configuration requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(configuration:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *configuration __attribute__((swift_name("configuration")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafSDKConfigurationProperties.Companion")))
@interface CafSolutionsCafSDKConfigurationPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafSDKConfigurationPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafSDKResultProperties")))
@interface CafSolutionsCafSDKResultProperties : CafSolutionsBase <CafSolutionsCafPropertiesBase>
- (instancetype)initWithResult:(NSString *)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithResult:(NSString *)result requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("init(result:requestParams:requestBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafSDKResultPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (CafSolutionsCafSDKResultProperties *)doCopyResult:(NSString *)result requestParams:(NSDictionary<NSString *, NSString *> * _Nullable)requestParams requestBody:(NSString * _Nullable)requestBody __attribute__((swift_name("doCopy(result:requestParams:requestBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable requestBody __attribute__((swift_name("requestBody")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable requestParams __attribute__((swift_name("requestParams")));
@property (readonly) NSString *result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafSDKResultProperties.Companion")))
@interface CafSolutionsCafSDKResultPropertiesCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafSDKResultPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafTracker")))
@interface CafSolutionsCafTracker : CafSolutionsBase
- (instancetype)initWithSessionId:(NSString *)sessionId platform:(CafSolutionsCafPlatform *)platform clientId:(NSString *)clientId personId:(NSString *)personId __attribute__((swift_name("init(sessionId:platform:clientId:personId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CafSolutionsCafTrackerCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendCrashlyticsStackTrace:(NSString *)stackTrace onFinished:(void (^)(CafSolutionsBoolean *))onFinished completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendCrashlytics(stackTrace:onFinished:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendEventEvent:(CafSolutionsCafEvent *)event properties:(id<CafSolutionsCafPropertiesBase>)properties completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("sendEvent(event:properties:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafTracker.Companion")))
@interface CafSolutionsCafTrackerCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsCafTrackerCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CafMapExtensionsKt")))
@interface CafSolutionsCafMapExtensionsKt : CafSolutionsBase
+ (NSDictionary<NSString *, CafSolutionsKotlinx_serialization_jsonJsonElement *> *)toJsonObject:(NSDictionary<NSString *, CafSolutionsKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toJsonObject(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CafSolutionsKotlinEnumCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CafSolutionsKotlinArray<T> : CafSolutionsBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CafSolutionsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CafSolutionsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CafSolutionsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CafSolutionsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CafSolutionsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CafSolutionsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CafSolutionsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CafSolutionsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CafSolutionsKotlinx_serialization_coreKSerializer <CafSolutionsKotlinx_serialization_coreSerializationStrategy, CafSolutionsKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface CafSolutionsKotlinx_serialization_jsonJsonElement : CafSolutionsBase
@property (class, readonly, getter=companion) CafSolutionsKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface CafSolutionsKotlinThrowable : CafSolutionsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (CafSolutionsKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CafSolutionsKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface CafSolutionsKotlinException : CafSolutionsKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface CafSolutionsKotlinRuntimeException : CafSolutionsKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CafSolutionsKotlinIllegalStateException : CafSolutionsKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface CafSolutionsKotlinCancellationException : CafSolutionsKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CafSolutionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CafSolutionsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CafSolutionsKotlinx_serialization_coreEncoder
@required
- (id<CafSolutionsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CafSolutionsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CafSolutionsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<CafSolutionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CafSolutionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CafSolutionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CafSolutionsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<CafSolutionsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<CafSolutionsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) CafSolutionsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CafSolutionsKotlinx_serialization_coreDecoder
@required
- (id<CafSolutionsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CafSolutionsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (CafSolutionsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CafSolutionsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CafSolutionsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CafSolutionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface CafSolutionsKotlinx_serialization_jsonJsonElementCompanion : CafSolutionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CafSolutionsKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CafSolutionsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CafSolutionsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CafSolutionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CafSolutionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CafSolutionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CafSolutionsKotlinx_serialization_coreSerializersModule : CafSolutionsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<CafSolutionsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CafSolutionsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CafSolutionsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CafSolutionsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CafSolutionsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CafSolutionsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CafSolutionsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CafSolutionsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol CafSolutionsKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CafSolutionsKotlinx_serialization_coreSerialKind : CafSolutionsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CafSolutionsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CafSolutionsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CafSolutionsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CafSolutionsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CafSolutionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CafSolutionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CafSolutionsKotlinNothing : CafSolutionsBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CafSolutionsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CafSolutionsKotlinKClass>)kClass provider:(id<CafSolutionsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CafSolutionsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CafSolutionsKotlinKClass>)kClass serializer:(id<CafSolutionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CafSolutionsKotlinKClass>)baseClass actualClass:(id<CafSolutionsKotlinKClass>)actualClass actualSerializer:(id<CafSolutionsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CafSolutionsKotlinKClass>)baseClass defaultDeserializerProvider:(id<CafSolutionsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<CafSolutionsKotlinKClass>)baseClass defaultDeserializerProvider:(id<CafSolutionsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<CafSolutionsKotlinKClass>)baseClass defaultSerializerProvider:(id<CafSolutionsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CafSolutionsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CafSolutionsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol CafSolutionsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol CafSolutionsKotlinKClass <CafSolutionsKotlinKDeclarationContainer, CafSolutionsKotlinKAnnotatedElement, CafSolutionsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
