//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTISubscribeButtonRenderer, YTSubscribeSwitch;

@interface YTMusicPassPromoSubscribeSwitchMapping : NSObject
{
    YTISubscribeButtonRenderer *_subscribeButtonRenderer;
    YTSubscribeSwitch *_subscribeSwitch;
}

+ (id)subscribeSwitchMappingWithRenderer:(id)arg1 subscribeSwitch:(id)arg2;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
@property(readonly, nonatomic) YTISubscribeButtonRenderer *subscribeButtonRenderer; // @synthesize subscribeButtonRenderer=_subscribeButtonRenderer;
- (void).cxx_destruct;
- (id)initWithRenderer:(id)arg1 subscribeSwitch:(id)arg2;

@end

