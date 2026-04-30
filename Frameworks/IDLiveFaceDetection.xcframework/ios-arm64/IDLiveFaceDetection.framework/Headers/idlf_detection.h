// Copyright 2024 ID R&D Inc. All Rights Reserved.

#import <Foundation/Foundation.h>

#define IDLFD_OBJC_API __attribute__((visibility("default")))

NS_ASSUME_NONNULL_BEGIN

/*!
 @brief Defines a subset of characteristics that the face analysis should be sensitive to.
        Correctly specified domain leads to more precise analysis results.
 */
typedef NS_ENUM(NSUInteger, IDLFDDomain) {
    /**
     * @brief General case. Used by default.
     */
    IDLFDDomainGeneral,

    /**
     * @brief Targets images taken via the desktop web-camera.
     */
    IDLFDDomainDesktop
};

/*!
 * @brief The bounding box around the face.
 */
IDLFD_OBJC_API
@interface IDLFDBoundingBox : NSObject
/*!
 * @brief The x coordinate of the top-left point.
 */
@property(assign) int32_t x;
/*!
 * @brief The y coordinate of the top-left point.
 */
@property(assign) int32_t y;

/*!
 * @brief The width of the box.
 */
@property(assign) int32_t width;

/*!
 * @brief The height of the box.
 */
@property(assign) int32_t height;

- (NSString*)description;

@end

/*!
 * @brief The roll, pitch and yaw angles of the head, in degrees.
 */
IDLFD_OBJC_API
@interface IDLFDHeadPose : NSObject
/*!
 * @brief The roll angle, ranges from -180 to 180.
 */
@property(assign) float roll;

/*!
 * @brief The pitch angle, ranges from -180 to 180.
 */
@property(assign) float pitch;

/*!
 * @brief The yaw angle, ranges from -180 to 180.
 */
@property(assign) float yaw;

- (NSString*)description;

@end

/*!
 @brief All possible criteria the image is being validated on.
 */
typedef NS_ENUM(NSUInteger, IDLFDValidation) {
    /**
     * @brief No faces are found on the image.
     */
    IDLFDValidationFaceNotFound,

    /**
     * @brief There is more than one face on the image.
     */
    IDLFDValidationTooManyFaces,

    /**
     * @brief The face box is too small.
     */
    IDLFDValidationSmallFaceSize,

    /**
     * @brief The face relative size is too small.
     */
    IDLFDValidationSmallRelativeFaceSize,

    /**
     * @brief The distance between pupils on the face is too small.
     */
    IDLFDValidationSmallPupillaryDistance,

    /**
     * @brief The rotation angle of the head (inc. roll, pitch an yaw) is too big.
     */
    IDLFDValidationLargeFaceRotationAngle,

    /**
     * @brief The face is too close to the camera.
     */
    IDLFDValidationFaceTooClose,

    /**
     * @brief The face is too close to one or more image borders.
     */
    IDLFDValidationFaceCloseToBorder,

    /**
     * @brief The face is cropped.
     */
    IDLFDValidationFaceCropped,

    /**
     * @brief The face is occluded, for example with a medical mask.
     */
    IDLFDValidationFaceOccluded,

    /**
     * @brief The eyes are closed.
     */
    IDLFDValidationEyesClosed,

    /**
     * @brief The image is too dark.
     */
    IDLFDValidationDarkImage,

    /**
     * @brief The face is too blurry.
     */
    IDLFDValidationFaceBlurry,

    /**
     * @brief The mouth is open.
     */
    IDLFDValidationMouthOpen,

    /**
     * @brief Sunglasses are detected.
     */
    IDLFDValidationSunglassesDetected
};

/*!
 * @brief IDLiveFace Detection license.
 */
IDLFD_OBJC_API
@interface IDLFDLicense : NSObject

/*!
 * @brief Sets the license. Setting license is only needed once per application lifetime.
 * @param license License string.
 * @param error Pointer to NSError for error reporting.
 * @return YES on success, NO otherwise.
 */
+ (BOOL)setLicense:(NSString*)license error:(NSError**)error;

@end

/*!
 * @brief Information about the IDLive Face Detection release.
 */
IDLFD_OBJC_API
@interface IDLFDReleaseInfo : NSObject

/*!
 * @brief Returns IDLFDReleaseInfo containing information about this IDLive Face Detection release.
 * @param error Pointer to NSError for error reporting.
 */
+ (IDLFDReleaseInfo* _Nullable)getReleaseInfo:(NSError**)error;

/*!
 * @brief The IDLive Face Detection version.
 */
@property(strong) NSString* version;

/*!
 * @brief The license expiration date.
 *        The format is the ISO-8601 instant, such as 2023-12-03T23:59:59Z.
 */
@property(strong) NSString* expirationDate;

- (NSString*)description;

@end

/*!
 * @brief Contains the content of the image.
 */
IDLFD_OBJC_API
@interface IDLFDImage : NSObject

/*!
 * \brief Creates the image from a buffer containing raw data in RGB888 format.
 * @param data row-major buffer of size `width*height*3`.
 * @param width Image width.
 * @param height Image height.
 * @param error Pointer to NSError for error reporting.
 */
- (instancetype _Nullable)initWithDataRGB888:(NSData*)data
                                       width:(int32_t)width
                                      height:(int32_t)height
                                       error:(NSError**)error;

/*!
 * \brief Creates the image from a buffers containing raw data in YUV420_888 (YCbCr420_888) format.
 * @param dataY row-major buffer of size `width * height` containing Y (luminance/brightness) component data.
 * @param dataU row-major buffer of size `((width + 1)/2)*((height + 1)/2)` containing
 *              U (Cb/chrominance/blue-difference) component data.
 * @param dataV row-major buffer of size `((width + 1)/2)*((height + 1)/2)` containing
 *              V (Cr/chrominance/red-difference) component data.
 * @param width Image width.
 * @param height Image height.
 * @param error Pointer to NSError for error reporting.
 */
- (instancetype _Nullable)initWithDataY:(NSData*)dataY
                                  dataU:(NSData*)dataU
                                  dataV:(NSData*)dataV
                                  width:(int32_t)width
                                 height:(int32_t)height
                                  error:(NSError**)error;

@end

/*!
 * @brief The information about the detected face.
 */
IDLFD_OBJC_API
@interface IDLFDDetectedFace : NSObject

/*!
 * @brief The bounding box around the face.
 */
@property(strong) IDLFDBoundingBox* box;

/*!
 * @brief The roll, pitch and yaw rotation angles of the head.
 */
@property(strong) IDLFDHeadPose* headPose;

/*!
 * @brief The orientation of the face, in degrees.
 *        It's a roll angle rounded to a nearest multiply of 90. Can be -90, 0, 90 or 180.
 */
@property(assign) int32_t orientation;

/*!
 * @brief The distance between the centers of pupils, in pixels.
 */
@property(assign) int32_t pupillaryDistance;

/*!
 * @brief The probability that the face is occluded (for example with medical mask),
 *        from 0 (not occluded) to 1 (occluded).
 */
@property(assign) float occlusion;

/*!
 * @brief The probability that the eyes are closed, from 0 (open) to 1 (closed).
 */
@property(assign) float eyesClosed;

/*!
 * @brief How blurry the face is, from 0 (normal) to 1 (too blurry).
 */
@property(assign) float blurriness;

/*!
 * @brief The probability that the mouth is open, from 0 (closed) to 1 (open).
 */
@property(assign) float mouthOpen;

/*!
 * @brief The probability that sunglasses are present, from 0 (no sunglasses) to 1 (sunglasses present).
 */
@property(assign) float sunglasses;

/*!
 * @brief Validations that are failed to pass for this particular face.
 *        Contains raw integer values corresponding to the IDLFDValidation values.
 */
@property(strong) NSArray<NSNumber*>* failedValidations;

- (NSString*)description;

@end

/*!
 * @brief The result of the face detection.
 */
IDLFD_OBJC_API
@interface IDLFDFaceDetectionResult : NSObject

/*!
 * @brief The detected faces.
 *        When no faces are detected, array will be empty and the failedValidations
 *        will contain IDLFDValidation::IDLFDValidationFaceNotFound.
 */
@property(strong) NSArray<IDLFDDetectedFace*>* faces;

/*!
 * @brief How dark the image is, from 0 (normal) to 1 (too dark).
 */
@property(assign) float underexposure;

/*!
 * @brief All failed validations i.e. global failed validations and ones from all the faces.
 *        Contains raw integer values corresponding to the IDLFDValidation values.
 */
@property(strong) NSArray<NSNumber*>* failedValidations;

- (NSString*)description;

@end

/*!
 * @brief Detects and validates faces and their attributes.
 */
IDLFD_OBJC_API
@interface IDLFDFaceDetector : NSObject

/*!
 * @brief Creates a new face detector.
 * @param error Pointer to NSError for error reporting.
 */
- (instancetype _Nullable)initWithError:(NSError**)error NS_SWIFT_NAME(init());

/*!
 * @brief Sets the analysis domain.
 * @param domain Analysis domain.
 * @param error Pointer to NSError for error reporting.
 * @return YES on success, NO otherwise.
 */
- (BOOL)setDomain:(IDLFDDomain)domain error:(NSError**)error;

/*!
 * @brief Runs the face detection.
 * @param image Source image.
 * @param error Pointer to NSError for error reporting.
 */
- (IDLFDFaceDetectionResult* _Nullable)detectFaces:(IDLFDImage*)image error:(NSError**)error;

@end

NS_ASSUME_NONNULL_END