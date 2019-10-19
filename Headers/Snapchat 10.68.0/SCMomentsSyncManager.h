//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSessionRequestManager, SCWeakTimer;
@protocol SCMomentsSyncManagerDelegate;

@interface SCMomentsSyncManager : NSObject
{
    NSString *_storyId;
    SCSessionRequestManager *_requestManager;
    int _pollIntervalSecs;
    long long _endTimeSecs;
    SCWeakTimer *_syncTimer;
    _Bool _shouldSync;
    id <SCMomentsSyncManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMomentsSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleSyncData:(id)arg1;
- (void)sendSyncRequest;
- (void)_setupTimer;
- (void)stopSync;
- (void)startSync;
- (id)initWithStoryId:(id)arg1 requestManager:(id)arg2 pollIntervalSecs:(int)arg3 endTimeSecs:(long long)arg4;

@end

