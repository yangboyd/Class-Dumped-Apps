//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SXDebugViewController.h"

#import "SXDebugSegmentedControlCellDelegate-Protocol.h"

@class NSString, SXDebugSegmentedControlCell, SXDebugTextViewCell;

@interface SXDebugDCMViewController : SXDebugViewController <SXDebugSegmentedControlCellDelegate>
{
    SXDebugSegmentedControlCell *_logLevelControl;
    SXDebugSegmentedControlCell *_persistentLoggingControl;
    SXDebugTextViewCell *_logViewerCell;
}

@property(retain, nonatomic) SXDebugTextViewCell *logViewerCell; // @synthesize logViewerCell=_logViewerCell;
@property(retain, nonatomic) SXDebugSegmentedControlCell *persistentLoggingControl; // @synthesize persistentLoggingControl=_persistentLoggingControl;
@property(retain, nonatomic) SXDebugSegmentedControlCell *logLevelControl; // @synthesize logLevelControl=_logLevelControl;
- (void).cxx_destruct;
- (id)logLevels;
- (void)segmentedControlCell:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadLogViewer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

