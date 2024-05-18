//
// AACSVGImage.h
// ActionCardsSDK
// Copyright © 2024 Atomic.io Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// SVG image wrapper to convey related data. The parsed UIImage object is only available in iOS 13.0+;
@interface AACSVGImage : NSObject

/**
 The view box rectangle defined in the SVG image.
 */
@property (nonatomic) CGRect viewBoxRect;
/**
 `YES` if the SVG file only contains one colour.
 */
@property (nonatomic, readonly) BOOL isMonochrome;
/**
 The parsed UIImage object of the SVG image.
 If the image is monochrome, it is generated as a Bitmap, otherwise, it is a vector image.
 */
@property (nonatomic, readonly, nullable) UIImage *image API_AVAILABLE(ios(13.0));

/// Create the AACSVGImage object from binary data representing an SVG image.
/// - Parameters:
///   - data: The data representing an SVG image.
///   - proposedSize: Proposed image size when generating a Bitmap image. Not used by vector images.
- (instancetype)initWithSVGData:(NSData *)data proposedSize:(CGSize)proposedSize;

@end

NS_ASSUME_NONNULL_END
