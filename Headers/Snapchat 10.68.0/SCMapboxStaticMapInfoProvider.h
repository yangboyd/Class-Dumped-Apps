//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCMapFSNService, SCPreferences, SCQueuePerformer, SCStaticMapAuthValues;

@interface SCMapboxStaticMapInfoProvider : NSObject
{
    NSString *_userId;
    SCMapFSNService *_mapFSNService;
    SCQueuePerformer *_performer;
    _Bool _didUnarchiveAuthValues;
    SCStaticMapAuthValues *_authValues;
    SCPreferences *_userPreferences;
}

- (void).cxx_destruct;
- (void)_fetchStaticMapInfoFromRemoteWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshDataIfNeeded;
- (void)_archiveAuthValues:(id)arg1;
- (void)_unarchiveAuthValues;
- (void)setAuthValues:(id)arg1;
- (void)forceRefreshMapboxStaticMapData;
- (id)accessToken;
- (id)authValues;
- (id)staticMapStyleId;
- (id)staticMapUsername;
- (void)staticMapAccessTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)warmupStaticMapInfoProvider;
- (id)initWithUserId:(id)arg1 mapFSNService:(id)arg2 userPreferences:(id)arg3;

@end

