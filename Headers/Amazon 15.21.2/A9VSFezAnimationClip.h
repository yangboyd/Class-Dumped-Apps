//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface A9VSFezAnimationClip : NSObject
{
    _Bool _isReversed;
    NSString *_key;
    double _timeOffset;
    double _duration;
}

@property(nonatomic) _Bool isReversed; // @synthesize isReversed=_isReversed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)clipPlayerForMainPlayer:(id)arg1;
- (id)initWithKey:(id)arg1 startFrame:(int)arg2 endFrame:(int)arg3 frameRate:(int)arg4 isReversed:(_Bool)arg5;

@end

