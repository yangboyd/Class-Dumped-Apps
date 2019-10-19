//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Award, Comment, NSString, NSURL, Post, RedditService, Subreddit;

@protocol AwardDetailsNavigatable <NSObject>
- (void)showReportConfirmationDialogForAward:(Award *)arg1 completion:(void (^)(void))arg2;
- (void)showAwardInfoForAward:(Award *)arg1 gildingTarget:(unsigned long long)arg2 subreddit:(Subreddit *)arg3;
- (void)showSelectAwardScreenForComment:(Comment *)arg1 parentPost:(Post *)arg2 service:(RedditService *)arg3 correlationId:(NSString *)arg4;
- (void)showSelectAwardScreenForPost:(Post *)arg1 service:(RedditService *)arg2 correlationId:(NSString *)arg3;
- (void)showWebPageWithURL:(NSURL *)arg1;
- (void)close;
@end

