//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YTShortsSpeedControlSetting : NSObject
{
    NSArray *_speedControlSettings;
    NSArray *_speedControlDisplayTitles;
    unsigned long long _defaultIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
- (void)setUpSpeedControlSettings;
- (double)recordingRateForIndex:(long long)arg1;
- (id)descriptiveTitleForIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *speedControlDisplayTitles;
- (id)init;

@end

