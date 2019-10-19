//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "SDAnimatedImage-Protocol.h"

@class NSArray, NSData, NSString;
@protocol SDAnimatedImageCoder;

@interface SDAnimatedImage : UIImage <SDAnimatedImage>
{
    _Bool _allFramesLoaded;
    long long _animatedImageFormat;
    id <SDAnimatedImageCoder> _coder;
    NSArray *_loadedAnimatedImageFrames;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 scale:(double)arg3;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)imageNamed:(id)arg1;
@property(copy) NSArray *loadedAnimatedImageFrames; // @synthesize loadedAnimatedImageFrames=_loadedAnimatedImageFrames;
@property(retain, nonatomic) id <SDAnimatedImageCoder> coder; // @synthesize coder=_coder;
@property(nonatomic, getter=isAllFramesLoaded) _Bool allFramesLoaded; // @synthesize allFramesLoaded=_allFramesLoaded;
@property(nonatomic) long long animatedImageFormat; // @synthesize animatedImageFormat=_animatedImageFormat;
- (void).cxx_destruct;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
@property(readonly, copy, nonatomic) NSData *animatedImageData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unloadAllFrames;
- (void)preloadAllFrames;
- (id)initWithAnimatedCoder:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2 options:(struct NSDictionary *)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (unsigned long long)sd_memoryCost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double scale; // @dynamic scale;
@property(readonly) Class superclass;

@end

