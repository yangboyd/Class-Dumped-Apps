//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWorker.h"

#import "YTWorker-Protocol.h"

@class GIMMe, NSDate, NSString, YTGlobalConfig;
@protocol YTUpgradeWorkerDelegate, YTWorkerDelegate;

@interface YTUpgradeWorker : YTBaseWorker <YTWorker>
{
    NSDate *_lastUpgradeCheckTime;
    id <YTUpgradeWorkerDelegate> _upgradeWorkerDelegate;
    _Bool _forceCheck;
    YTGlobalConfig *_globalConfig;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (_Bool)isTimeForUpgradeCheck;
- (void)setForceCheck:(_Bool)arg1;
- (long long)workerRequirements;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)initWithUpgradeWorkerDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

