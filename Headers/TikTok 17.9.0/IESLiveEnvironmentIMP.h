//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveEnvironment-Protocol.h"

@class NSString;
@protocol IESLiveAppInfo, IESLiveDebugService;

@interface IESLiveEnvironmentIMP : NSObject <IESLiveEnvironment>
{
    id <IESLiveAppInfo> _appInfo;
    id <IESLiveDebugService> _debugService;
}

+ (unsigned long long)currentTarget;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveDebugService> debugService; // @synthesize debugService=_debugService;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
- (_Bool)isTiktok;
- (_Bool)isMusically;
- (_Bool)isMT;
- (_Bool)isI18NApp;
- (id)currentTargetName;
- (unsigned long long)currentTarget;
- (id)liveStreamProjectKeyForRoomScene:(long long)arg1;
- (id)liveSDKVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

