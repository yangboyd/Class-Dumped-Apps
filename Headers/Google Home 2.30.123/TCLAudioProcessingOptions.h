//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TCLAudioProcessingOptions : NSObject
{
    _Bool _enableAutoGainControl;
    _Bool _enableEchoCancellation;
    _Bool _enableHighpassFilter;
    _Bool _enableNoiseSuppression;
}

+ (id)audioProcessingOptionsWithEnableAutoGainControl:(_Bool)arg1 enableEchoCancellation:(_Bool)arg2 enableHighpassFilter:(_Bool)arg3 enableNoiseSuppression:(_Bool)arg4;
@property(readonly, nonatomic) _Bool enableNoiseSuppression; // @synthesize enableNoiseSuppression=_enableNoiseSuppression;
@property(readonly, nonatomic) _Bool enableHighpassFilter; // @synthesize enableHighpassFilter=_enableHighpassFilter;
@property(readonly, nonatomic) _Bool enableEchoCancellation; // @synthesize enableEchoCancellation=_enableEchoCancellation;
@property(readonly, nonatomic) _Bool enableAutoGainControl; // @synthesize enableAutoGainControl=_enableAutoGainControl;
- (id)description;
- (id)initWithEnableAutoGainControl:(_Bool)arg1 enableEchoCancellation:(_Bool)arg2 enableHighpassFilter:(_Bool)arg3 enableNoiseSuppression:(_Bool)arg4;

@end

