//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileViewer-Protocol.h"
#import "QLPreviewControllerDataSource-Protocol.h"
#import "QLPreviewControllerDelegate-Protocol.h"

@class DBQLController, FileLoadingView, NSString, UIView;
@protocol DBFileEntry, DBFileViewerDelegate, DBFileViewerEventsDelegate;

@interface DBQLFileViewer : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate, DBFileViewer>
{
    DBQLController *_qlController;
    UIView *_qlControllerViewContainer;
    id <DBFileViewerDelegate> _viewerDelegate;
    id <DBFileViewerEventsDelegate> _eventsDelegate;
    id <DBFileEntry> _currentFileEntry;
    FileLoadingView *_loadingView;
}

- (void).cxx_destruct;
- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)viewerSpecificFloatingToolbarActionsWithActionRegistry:(id)arg1;
- (void)viewerDidChangeNavigationBarVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (id)fileViewerInteractionManager;
- (_Bool)isLoadingTypeFileViewer;
- (void)reloadData;
- (_Bool)viewerAlwaysShowToolbar;
- (_Bool)viewerFrameShouldAttachToTopOfBottomBar;
- (_Bool)viewerShouldShowActionId:(long long)arg1 shouldShowByDefault:(_Bool)arg2;
- (id)viewerTitle;
- (id)viewerSupportedViewModes;
- (_Bool)fileViewerOwnsViewAnalyticsEvents;
- (id)fileViewerExitAnalyticsParams;
- (void)teardownFileViewer;
- (void)db_createQLControllerConstraints;
- (id)db_createQLController;
- (void)viewerDidPresentInViewHierarchy;
- (void)setupFileViewerWithViewMode:(unsigned long long)arg1;
- (void)fileViewDidAppear;
- (id)fileViewScrollView;
- (struct UIEdgeInsets)additionalSpeedScrollerFrameInsets;
- (_Bool)supportsSpeedScroller;
- (id)fileViewController;
- (id)fileView;
- (id)currentFileEntry;
- (void)viewerResetFileViewControllerForExitingPeek;
- (_Bool)shouldRecreateForUpdatedFileWithUserExplicit:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFileEntry:(id)arg1 eventsDelegate:(id)arg2 viewerDelegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

