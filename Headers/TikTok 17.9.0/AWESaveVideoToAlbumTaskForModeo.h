//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPublishBaseTask.h"

#import "AWEPublishStageDelegate-Protocol.h"

@class AWEPlayer, AWEPublishTimeTracker, AWEPublishWaterMarkStage, NSString;

@interface AWESaveVideoToAlbumTaskForModeo : AWEPublishBaseTask <AWEPublishStageDelegate>
{
    AWEPlayer *_player;
    AWEPublishTimeTracker *_timeTracker;
    CDUnknownBlockType _progressDidChangeBlock;
    CDUnknownBlockType _didChangeStatusBlock;
    AWEPublishWaterMarkStage *_waterMarkStage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEPublishWaterMarkStage *waterMarkStage; // @synthesize waterMarkStage=_waterMarkStage;
@property(copy, nonatomic) CDUnknownBlockType didChangeStatusBlock; // @synthesize didChangeStatusBlock=_didChangeStatusBlock;
@property(copy, nonatomic) CDUnknownBlockType progressDidChangeBlock; // @synthesize progressDidChangeBlock=_progressDidChangeBlock;
- (void)setTimeTracker:(id)arg1;
- (id)timeTracker;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)publishStage:(id)arg1 updateProgress:(double)arg2;
- (void)publishStage:(id)arg1 didChangeStatus:(long long)arg2 userInfo:(id)arg3;
- (void)execute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

