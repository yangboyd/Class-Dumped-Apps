//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXViewModel.h"

#import "SGStatsDelegate-Protocol.h"
#import "SGUserProfileDelegate-Protocol.h"

@class NSArray, NSString, SGTitleSocialLeaderboardDataModel;
@protocol SGIStatsDataModel, SGIUserDataModel, SGIUserProfileDataModel;

@interface SGTitleSocialLeaderboardViewModel : XBXViewModel <SGStatsDelegate, SGUserProfileDelegate>
{
    _Bool _isDetailEntryPoint;
    _Bool _shouldAddSpacerAboveLastRow;
    _Bool _isPendingDetailData;
    NSArray *_dataContexts;
    NSString *_listHeader;
    SGTitleSocialLeaderboardDataModel *_leaderboardDataModel;
    id <SGIUserDataModel> _userDataModel;
    NSString *_noHeroStatMessage;
    NSString *_nobodyInLeaderboardMessage;
    unsigned long long _detailRefreshCode;
}

@property(nonatomic) unsigned long long detailRefreshCode; // @synthesize detailRefreshCode=_detailRefreshCode;
@property(nonatomic) _Bool isPendingDetailData; // @synthesize isPendingDetailData=_isPendingDetailData;
@property(retain, nonatomic) NSString *nobodyInLeaderboardMessage; // @synthesize nobodyInLeaderboardMessage=_nobodyInLeaderboardMessage;
@property(retain, nonatomic) NSString *noHeroStatMessage; // @synthesize noHeroStatMessage=_noHeroStatMessage;
@property(readonly, nonatomic) __weak id <SGIUserDataModel> userDataModel; // @synthesize userDataModel=_userDataModel;
@property(retain, nonatomic) SGTitleSocialLeaderboardDataModel *leaderboardDataModel; // @synthesize leaderboardDataModel=_leaderboardDataModel;
@property(retain, nonatomic) NSString *listHeader; // @synthesize listHeader=_listHeader;
@property(nonatomic) _Bool shouldAddSpacerAboveLastRow; // @synthesize shouldAddSpacerAboveLastRow=_shouldAddSpacerAboveLastRow;
@property(nonatomic) _Bool isDetailEntryPoint; // @synthesize isDetailEntryPoint=_isDetailEntryPoint;
@property(retain, nonatomic) NSArray *dataContexts; // @synthesize dataContexts=_dataContexts;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SGIUserProfileDataModel> profileDataModel;
@property(readonly, nonatomic) __weak id <SGIStatsDataModel> statsDataModel;
- (void)unregisterFromDetailNotification;
- (void)registerForDetailNotification;
- (void)unregisterFromBundleNotification;
- (void)registerForBundleNotification;
- (id)currentUser;
- (id)getLaunchContext;
- (void)getHeroStats:(unsigned long long)arg1;
- (void)initializeLeaderboardDataModel:(id)arg1;
- (void)onUserProfileRequestFailed:(id)arg1 requestContext:(id)arg2;
- (void)onUserProfileRequestSucceeded:(id)arg1 requestContext:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onBatchStatsRequestSucceeded:(id)arg1 withRequestContext:(id)arg2;
- (void)onBatchStatsRequestFailed:(id)arg1 withRequestContext:(id)arg2;
- (void)onDetailDataAvailable:(id)arg1;
- (void)onBundleDetailDataAvailable:(id)arg1;
- (void)onItemSelected:(id)arg1;
- (void)onDestroy;
- (void)onDeactivate;
- (void)onActivate;
- (void)refreshInternal:(_Bool)arg1;
- (void)refresh;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

