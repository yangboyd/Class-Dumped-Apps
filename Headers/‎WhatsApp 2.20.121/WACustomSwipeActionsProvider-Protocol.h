//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableView, WACustomSwipeActionController, WACustomSwipeActionTableViewCell, WACustomSwipeActionsConfiguration;

@protocol WACustomSwipeActionsProvider <NSObject>
- (WACustomSwipeActionsConfiguration *)controller:(WACustomSwipeActionController *)arg1 trailingSwipeActionsConfigurationForCell:(WACustomSwipeActionTableViewCell *)arg2 inTableView:(UITableView *)arg3;
- (WACustomSwipeActionsConfiguration *)controller:(WACustomSwipeActionController *)arg1 leadingSwipeActionsConfigurationForCell:(WACustomSwipeActionTableViewCell *)arg2 inTableView:(UITableView *)arg3;
@end

