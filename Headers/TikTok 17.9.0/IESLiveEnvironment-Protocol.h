//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IESLiveEnvironment <NSObject>
- (_Bool)isI18NApp;
- (_Bool)isMT;
- (_Bool)isMusically;
- (_Bool)isTiktok;
- (NSString *)liveStreamProjectKeyForRoomScene:(long long)arg1;
- (NSString *)currentTargetName;
- (unsigned long long)currentTarget;
- (NSString *)liveSDKVersion;
@end

