//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGSearchResultViewModel, NSString;

@protocol IGSearchResultsViewControllerType <NSObject>
- (void)handleClickForSearchResultViewModel:(IGSearchResultViewModel *)arg1;
- (void)refetchNullState;
- (void)invalidateTypeaheadCache;
- (void)searchDidEnd;
- (void)searchDidStart;
- (void)onSearchTextDidChange:(NSString *)arg1;
@end

