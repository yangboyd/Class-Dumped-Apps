//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UITableViewController;

@protocol A9VSSNPScannerViewControllerInterface <NSObject>
- (void)updateViewsForSA9VSSNPScanPullDownRecentPayments;
- (void)updateViewsForA9VSSNPScanPullUpRecentPayments;
- (void)presentShowRecentPaymentsVC:(UITableViewController *)arg1;
- (void)openPageForURL:(NSURL *)arg1 forCodeType:(NSString *)arg2;
- (void)showServerMessage:(NSString *)arg1 forCodeType:(NSString *)arg2;
- (void)showNetworkErrorMessage;
- (void)showTimeoutMessage;
- (void)showFailureMessage;
- (void)updateViewsForA9VSSNPScanSuccess;
- (void)updateViewsForA9VSSNPScanPause;
- (void)updateViewsForA9VSSNPScanStart;
@end

