//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSPrivacyKitConfig : NSObject
{
    NSMutableDictionary *_channelConfigs;
    NSMutableDictionary *_detectorConfigs;
}

+ (id)sharedConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *detectorConfigs; // @synthesize detectorConfigs=_detectorConfigs;
@property(retain, nonatomic) NSMutableDictionary *channelConfigs; // @synthesize channelConfigs=_channelConfigs;
- (void)notifyConfigUpdate;
- (id)ruleModelOfDetector:(id)arg1;
- (void)setDetectorRule:(id)arg1 forType:(id)arg2;
- (_Bool)isChannelEnable:(id)arg1;
- (void)setChannelEnable:(_Bool)arg1 forType:(id)arg2;
- (id)init;

@end

