//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SOJUAdUnlockableLongformVideoViewBuilder : NSObject
{
    NSNumber *_viewTimeSec;
    NSNumber *_mediaDurationSec;
    NSNumber *_renderedTimestampMs;
    NSNumber *_openTimestampMs;
}

+ (id)withJUAdUnlockableLongformVideoView:(id)arg1;
- (void).cxx_destruct;
- (id)setOpenTimestampMs:(id)arg1;
- (id)setRenderedTimestampMs:(id)arg1;
- (id)setMediaDurationSec:(id)arg1;
- (id)setViewTimeSec:(id)arg1;
- (id)build;
- (id)setOpenTimestampMsValue:(long long)arg1;
- (id)setRenderedTimestampMsValue:(long long)arg1;
- (id)setMediaDurationSecValue:(float)arg1;
- (id)setViewTimeSecValue:(float)arg1;

@end

