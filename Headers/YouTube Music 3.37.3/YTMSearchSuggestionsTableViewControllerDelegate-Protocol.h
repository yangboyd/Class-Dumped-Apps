//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTISearchboxStats, YTMSearchSuggestionsTableViewController;

@protocol YTMSearchSuggestionsTableViewControllerDelegate <NSObject>
- (void)searchSuggestionsTableViewController:(YTMSearchSuggestionsTableViewController *)arg1 didModifyText:(NSString *)arg2;
- (void)searchSuggestionsTableViewController:(YTMSearchSuggestionsTableViewController *)arg1 didSearchText:(NSString *)arg2 suggestStats:(YTISearchboxStats *)arg3;
- (void)searchSuggestionsTableViewControllerDidDismiss:(YTMSearchSuggestionsTableViewController *)arg1;
- (void)searchSuggestionsTableViewControllerDidFocus:(YTMSearchSuggestionsTableViewController *)arg1;
@end

