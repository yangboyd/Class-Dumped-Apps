//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ListingStateController, UIControl, _TtC8RedditUI17RUIRefreshControl;
@protocol LoadingSpinner;

@protocol ListingStateControllerDelegate <NSObject>
- (void)listingStateController:(ListingStateController *)arg1 didPullToRefresh:(_TtC8RedditUI17RUIRefreshControl *)arg2;
- (void)listingStateController:(ListingStateController *)arg1 didTapLoadingSpinner:(UIControl<LoadingSpinner> *)arg2;
@end

