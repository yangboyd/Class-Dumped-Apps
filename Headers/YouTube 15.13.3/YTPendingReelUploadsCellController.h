//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCellController.h>

#import <Module_Framework/YTPendingReelViewDelegate-Protocol.h>
#import <Module_Framework/YTUploadInnerTubeProgressObserver-Protocol.h>

@class GIMMe, NSArray, NSMutableDictionary, NSString, YTUploadTaskController;

@interface YTPendingReelUploadsCellController : YTCellController <YTUploadInnerTubeProgressObserver, YTPendingReelViewDelegate>
{
    YTUploadTaskController *_taskController;
    NSMutableDictionary *_percentageTranscoded;
    NSMutableDictionary *_percentageTransferred;
    NSMutableDictionary *_percentageProcessed;
    unsigned long long _cellTaskCount;
    NSArray *_tasks;
}

@property(retain, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
- (void).cxx_destruct;
- (void)updateReelWithFrontendUploadID:(id)arg1;
- (void)refreshIfNeeded;
- (void)updatePendingTasks;
- (void)updatePendingProgressForUploadTask:(id)arg1;
- (void)didTapActionButton:(id)arg1 withMenuRenderer:(id)arg2;
- (void)setProgressBarValueForReelsWithFrontendUploadID:(id)arg1;
- (void)didProgressProcessingForFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)didProgressTransferForFrontendUploadID:(id)arg1 progress:(id)arg2;
- (void)didProgressTranscodeForFrontendUploadID:(id)arg1 progress:(float)arg2;
- (void)uploadStatusDidChangeWithFrontendUploadID:(id)arg1 state:(long long)arg2;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

