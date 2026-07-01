//
//  ValidateWrapper.h
//  DocumentDetector
//
//  Created by caf on 30/11/23.
//  Copyright © 2023 Combate à Fraude. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <DocumentDetector/validate.h>

@interface ValidateWrapper : NSObject

NS_ASSUME_NONNULL_BEGIN

+ (e_validate_return)validateWithNumCols:(int)numCols
                                 numRows:(int)numRows
                              imageWidth:(int)imageWidth
                             imageHeight:(int)imageHeight
                                iaResult:(float *)iaResult;
NS_ASSUME_NONNULL_END

@end


