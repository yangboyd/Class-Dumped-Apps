//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class GMSx_GOOTableView;

@protocol GOOTableViewDismissDelegate <NSObject>
- (_Bool)tableView:(GMSx_GOOTableView *)arg1 canSwipeToDismissAtSection:(long long)arg2;

@optional
- (void)tableView:(GMSx_GOOTableView *)arg1 didCancelSwipeToDismissAtSection:(long long)arg2;
- (void)tableView:(GMSx_GOOTableView *)arg1 didEndSwipeToDismissAtSection:(long long)arg2;
- (void)tableView:(GMSx_GOOTableView *)arg1 willBeginSwipeToDismissAtSection:(long long)arg2;
@end

