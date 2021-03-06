//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEIronManModuleService-Protocol.h"

@class NSString;

@interface AWEIronManModuleService : HTSService <AWEIronManModuleService>
{
}

- (void)clearDiskWithCompletion:(CDUnknownBlockType)arg1;
- (id)timorSchemaCodecWithSchema:(id)arg1 scene:(id)arg2 bdpLog:(id)arg3 customParams:(id)arg4;
- (id)timorSchemaCodecWithSchema:(id)arg1 externalParams:(id)arg2;
- (void)preloadIronManWithAppID:(id)arg1;
- (void)preloadIronManWithSchema:(id)arg1;
- (void)preloadTimorWithURL:(id)arg1 priority:(long long)arg2;
- (void)closeTimorViewController:(id)arg1;
- (_Bool)isIronManUsing;
- (id)baseNavigationController;
- (_Bool)isIronManURLString:(id)arg1;
- (void)getShareInfoForShareChannel:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
- (id)platformChannelWithShareType:(id)arg1;
@property(nonatomic) long long ironManPublishStatus;
- (id)gameModelIronManCenter;
- (_Bool)isIronManOrSpiderManPresenting;
- (id)ironManShareSchemeFromURL:(id)arg1;
- (void)visitAppWithAppSchema:(id)arg1;
- (id)appIDFromSchema:(id)arg1;
- (id)sceneQueryStringWithShareType:(long long)arg1;
- (id)getPlatformChannel:(long long)arg1;
- (long long)ironManTypeForURLString:(id)arg1;
- (void)trackIronManWithSchema:(id)arg1 event:(id)arg2 refer:(id)arg3 tagID:(id)arg4;
- (void)trackIronMan:(id)arg1 event:(id)arg2 refer:(id)arg3 carrier:(id)arg4 groupId:(id)arg5 authorId:(id)arg6;
- (void)registerJSSDKVersion;
- (id)currentLibVersion;
- (void)excuteAfterLaunch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

