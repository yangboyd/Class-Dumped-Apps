//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileViewerCustomViewModeBehavior-Protocol.h"

@interface DBFileViewerDBSplitViewControllerViewModeBehavior : NSObject <DBFileViewerCustomViewModeBehavior>
{
}

- (unsigned long long)viewerController:(id)arg1 nextViewModeForCurrentViewMode:(unsigned long long)arg2;
- (void)db_showMasterViewWithViewerController:(id)arg1 animated:(_Bool)arg2;
- (void)db_hideMasterViewWithViewerController:(id)arg1 animated:(_Bool)arg2;
- (void)viewerController:(id)arg1 viewModeChangeFromViewMode:(unsigned long long)arg2 toViewMode:(unsigned long long)arg3 animated:(_Bool)arg4;

@end

