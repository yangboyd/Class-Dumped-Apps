//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <ElectrodeContainer/RCTAnimatedImage-Protocol.h>

@class NSArray, NSString;

@interface RCTAnimatedImage : UIImage <RCTAnimatedImage>
{
    struct CGImageSource *_imageSource;
    double _scale;
    unsigned long long _loopCount;
    unsigned long long _frameCount;
    NSArray *_frames;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
- (float)frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
- (unsigned long long)imageLoopCountWithSource:(struct CGImageSource *)arg1;
- (_Bool)scanAndCheckFramesValidWithSource:(struct CGImageSource *)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

