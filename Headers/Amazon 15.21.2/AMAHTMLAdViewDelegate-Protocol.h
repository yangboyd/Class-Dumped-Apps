//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMAHTMLAdView, NSError, NSURL;

@protocol AMAHTMLAdViewDelegate <NSObject>
- (void)HTMLView:(AMAHTMLAdView *)arg1 failedLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoadForHTMLView:(AMAHTMLAdView *)arg1;
- (void)openSharedAppURLForHTMLView:(NSURL *)arg1;
- (void)openURLForHTMLView:(NSURL *)arg1;
- (void)openPrivateURL:(NSURL *)arg1 ForHTMLView:(AMAHTMLAdView *)arg2;
@end

