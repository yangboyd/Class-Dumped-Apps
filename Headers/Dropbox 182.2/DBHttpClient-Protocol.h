//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBHttpRequestCallbacks, DBHttpRequestFileCallbacks, NSData, NSDictionary, NSString;
@protocol DBHttpTask;

@protocol DBHttpClient
- (void)shutdown;
- (id <DBHttpTask>)requestWithCustomTimeout:(NSString *)arg1 headers:(NSDictionary *)arg2 postdata:(NSData *)arg3 timeoutMilliseconds:(int)arg4 callbacks:(DBHttpRequestCallbacks *)arg5;
- (id <DBHttpTask>)putFile:(NSString *)arg1 headers:(NSDictionary *)arg2 path:(NSString *)arg3 callbacks:(DBHttpRequestCallbacks *)arg4;
- (id <DBHttpTask>)getToFile:(NSString *)arg1 headers:(NSDictionary *)arg2 path:(NSString *)arg3 callbacks:(DBHttpRequestFileCallbacks *)arg4;
- (id <DBHttpTask>)request:(NSString *)arg1 headers:(NSDictionary *)arg2 postdata:(NSData *)arg3 callbacks:(DBHttpRequestCallbacks *)arg4;
@end

