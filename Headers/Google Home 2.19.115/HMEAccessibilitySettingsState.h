//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTLRCastSetup_AssistantAccessibilityMode;

@interface HMEAccessibilitySettingsState : NSObject
{
    GTLRCastSetup_AssistantAccessibilityMode *_accessibilityState;
    long long _captionStyle;
}

+ (id)persistedCustomCaptionStyle;
+ (long long)persistedCaptionStyle;
+ (void)persistCaptionStyle:(long long)arg1;
@property(nonatomic) long long captionStyle; // @synthesize captionStyle=_captionStyle;
@property(readonly, nonatomic) GTLRCastSetup_AssistantAccessibilityMode *accessibilityState; // @synthesize accessibilityState=_accessibilityState;
- (void).cxx_destruct;
- (void)updateAccessibilityState:(id)arg1 captionStyle:(long long)arg2;
- (id)initWithAccessibilityState:(id)arg1;

@end

