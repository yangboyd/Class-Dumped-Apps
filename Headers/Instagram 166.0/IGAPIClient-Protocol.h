//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGNetworking-Protocol.h>
#import <FBSharedFramework/IGSSOTokenWriterDelegate-Protocol.h>

@class IGRequestPolicy, IGURLRequest, NSArray, NSObject;
@protocol IGRequestToken, IGSystemMessageListener, OS_dispatch_queue;

@protocol IGAPIClient <IGNetworking, IGSSOTokenWriterDelegate>
@property(nonatomic) __weak id <IGSystemMessageListener> systemMessageDelegate;
- (NSArray *)APIHeadersAsCookies;
- (id <IGRequestToken>)startAPIRequest:(IGURLRequest *)arg1 policy:(IGRequestPolicy *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 cacheHandler:(void (^)(NSDate *, NSDate *, NSDate *, id))arg4 bytesSentHandler:(void (^)(long long, long long, long long))arg5 parsingHandler:(id (^)(NSDictionary *, id *))arg6 successHandler:(void (^)(IGHTTPResponse *, id))arg7 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg8;
- (id <IGRequestToken>)startAPIRequest:(IGURLRequest *)arg1 policy:(IGRequestPolicy *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 cacheHandler:(void (^)(NSDate *, NSDate *, NSDate *, id))arg4 parsingHandler:(id (^)(NSDictionary *, id *))arg5 successHandler:(void (^)(IGHTTPResponse *, id))arg6 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg7;
- (id <IGRequestToken>)startAPIRequest:(IGURLRequest *)arg1 policy:(IGRequestPolicy *)arg2 successHandler:(void (^)(IGHTTPResponse *, id))arg3 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg4;
@end

