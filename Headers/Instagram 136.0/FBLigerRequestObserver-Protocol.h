//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSHTTPURLResponse, NSURLRequest;

@protocol FBLigerRequestObserver
- (void)request:(NSURLRequest *)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 wasCancelledWithEvents:(const vector_31c84f95 *)arg3;
- (void)request:(NSURLRequest *)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 failedWithError:(NSError *)arg3 events:(const vector_31c84f95 *)arg4;
- (void)request:(NSURLRequest *)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2 completedWithResponse:(NSHTTPURLResponse *)arg3 events:(const vector_31c84f95 *)arg4;
- (void)requestStartedLoading:(NSURLRequest *)arg1 requestProperties:(const struct FBLigerRequestProperties *)arg2;
@end

