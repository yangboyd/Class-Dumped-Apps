//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGLiveBroadcast, IGLiveShoppingViewerEndScreenContentDataModel, IGStatefulNetworker, IGStatefulNetworkerFetchState, IGUserSession;
@protocol IGLiveShoppingViewerEndScreenContentDataSourceAnnouncer;

@interface IGLiveShoppingViewerEndScreenContentDataSource : NSObject
{
    IGUserSession *_userSession;
    IGStatefulNetworker *_networker;
    id <IGLiveShoppingViewerEndScreenContentDataSourceAnnouncer> _announcer;
    IGLiveShoppingViewerEndScreenContentDataModel *_dataModel;
    IGLiveBroadcast *_broadcast;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGLiveBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, nonatomic) IGLiveShoppingViewerEndScreenContentDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void)_networkFetchStateUpdated:(id)arg1;
- (void)_networkResponseLoaded:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) IGStatefulNetworkerFetchState *fetchState;
- (void)fetchContentIfNeeded;
- (id)initWithUserSession:(id)arg1 broadcast:(id)arg2;

@end

