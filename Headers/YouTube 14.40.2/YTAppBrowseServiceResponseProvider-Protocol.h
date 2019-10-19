//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, YTIBrowseRequest, YTIBrowseResponse;

@protocol YTAppBrowseServiceResponseProvider <NSObject>
- (void)didReceiveBrowseResponse:(YTIBrowseResponse *)arg1 makingRequest:(YTIBrowseRequest *)arg2;
- (void)getResponseForError:(NSError *)arg1 makingRequest:(YTIBrowseRequest *)arg2 withBrowseID:(NSString *)arg3 continuationToken:(NSString *)arg4 withProviderBlock:(void (^)(YTIBrowseResponse *))arg5;
- (void)getInitialResponseForBrowseRequest:(YTIBrowseRequest *)arg1 withBrowseID:(NSString *)arg2 continuationToken:(NSString *)arg3 withProviderBlock:(void (^)(YTIBrowseResponse *))arg4;
@end

