//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DetailSwipeController, GBTNugget, NSIndexPath;
@protocol JBTId;

@protocol DetailSwipeControllerDelegate <NSObject>
- (void)detailSwipeControllerLoadMore:(DetailSwipeController *)arg1;
- (_Bool)detailSwipeControllerCanLoadMore:(DetailSwipeController *)arg1;
- (NSIndexPath *)detailSwipeController:(DetailSwipeController *)arg1 indexPathForItemId:(id <JBTId>)arg2;
- (GBTNugget *)detailSwipeController:(DetailSwipeController *)arg1 objectAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)detailSwipeController:(DetailSwipeController *)arg1 nextIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)detailSwipeController:(DetailSwipeController *)arg1 previousIndexPath:(NSIndexPath *)arg2;
@end

