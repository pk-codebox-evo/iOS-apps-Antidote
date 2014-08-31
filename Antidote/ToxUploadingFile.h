//
//  ToxUploadingFile.h
//  Antidote
//
//  Created by Dmitry Vorobyov on 31.08.14.
//  Copyright (c) 2014 dvor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToxUploadingFile : NSObject

@property (assign, nonatomic, readonly) uint64_t fileSize;

- (instancetype)initWithFilePath:(NSString *)filePath portionSize:(uint16_t)portionSize;

// Returns length of portion. If there is no more data returns 0.
- (uint16_t)nextPortionOfBytes:(void *)buffer;

- (void)finishUploading;

@end