//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (NFLX)
+ (id)indexPathsInViewportForTableView:(id)arg1 withFilterBlock:(CDUnknownBlockType)arg2 numberOfAdditionalIndexPathsOutsideViewport:(unsigned long long)arg3;
+ (id)indexPathsInViewportForTableView:(id)arg1 withFilterBlock:(CDUnknownBlockType)arg2;
- (void)safeBatchUpdateForDataChange:(CDUnknownBlockType)arg1 updateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setReloadQueue:(id)arg1;
- (id)reloadQueue;
@end

