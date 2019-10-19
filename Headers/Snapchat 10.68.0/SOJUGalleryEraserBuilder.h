//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUGalleryEraserBuilder : NSObject
{
    NSNumber *_totalEraseCount;
    NSNumber *_finalEraseCount;
    NSNumber *_resetCount;
    NSNumber *_eraserSessionCount;
    NSNumber *_hasInpaintedImage;
    NSString *_finalEraseSequence;
}

+ (id)withJUGalleryEraser:(id)arg1;
- (void).cxx_destruct;
- (id)setFinalEraseSequence:(id)arg1;
- (id)setHasInpaintedImage:(id)arg1;
- (id)setEraserSessionCount:(id)arg1;
- (id)setResetCount:(id)arg1;
- (id)setFinalEraseCount:(id)arg1;
- (id)setTotalEraseCount:(id)arg1;
- (id)build;
- (id)setHasInpaintedImageValue:(_Bool)arg1;
- (id)setEraserSessionCountValue:(int)arg1;
- (id)setResetCountValue:(int)arg1;
- (id)setFinalEraseCountValue:(int)arg1;
- (id)setTotalEraseCountValue:(int)arg1;

@end

