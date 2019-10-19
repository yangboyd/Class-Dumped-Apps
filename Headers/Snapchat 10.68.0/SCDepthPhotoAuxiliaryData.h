//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVDepthData, AVPortraitEffectsMatte;

@interface SCDepthPhotoAuxiliaryData : NSObject
{
    AVDepthData *_depthData;
    long long _depthDataOrientation;
    AVPortraitEffectsMatte *_portraitEffectsMatte;
}

@property(readonly, nonatomic) AVPortraitEffectsMatte *portraitEffectsMatte; // @synthesize portraitEffectsMatte=_portraitEffectsMatte;
@property(readonly, nonatomic) long long depthDataOrientation; // @synthesize depthDataOrientation=_depthDataOrientation;
@property(readonly, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
- (void).cxx_destruct;
- (id)initWithDepthData:(id)arg1 depthDataOrientation:(long long)arg2 portraitEffectsMatte:(id)arg3;
- (id)initWithDepthData:(id)arg1 depthDataOrientation:(long long)arg2;

@end

