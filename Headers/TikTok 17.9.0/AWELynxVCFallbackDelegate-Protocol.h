//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWELynxViewController, NSDictionary, NSError;

@protocol AWELynxVCFallbackDelegate <NSObject>

@optional
- (void)lynxViewController:(AWELynxViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)lynxViewController:(AWELynxViewController *)arg1 didReceiveFirstLoad:(double)arg2;
- (void)lynxViewControllerDidFinishLoad:(AWELynxViewController *)arg1;
- (void)lynxViewControllerDidMount:(AWELynxViewController *)arg1;
- (void)lynxViewController:(AWELynxViewController *)arg1 didFallbackWithError:(NSError *)arg2;
- (_Bool)lynxViewController:(AWELynxViewController *)arg1 shouldHandleFallbackOutsideWithError:(NSDictionary *)arg2;
- (void)lynxViewControllerDidClose:(AWELynxViewController *)arg1;
@end

