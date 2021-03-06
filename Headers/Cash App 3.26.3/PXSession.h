//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PXSession : NSObject
{
}

- (void)augmentMutableRequest:(id)arg1;
- (id)URLRequestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3 absolute:(_Bool)arg4 cachesResponse:(_Bool)arg5;
- (id)URLRequestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3 absolute:(_Bool)arg4;
- (id)URLRequestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3;
- (id)requestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3 waitsForLocation:(_Bool)arg4 maximumNumberOfRetries:(long long)arg5;
- (id)requestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3 waitsForLocation:(_Bool)arg4;
- (id)requestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3 locationRequirement:(long long)arg4 cachesResponse:(_Bool)arg5;
- (id)requestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3 locationRequirement:(long long)arg4;
- (id)requestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3 absolute:(_Bool)arg4;
- (id)requestWithPath:(id)arg1 parameters:(id)arg2 requestMethod:(id)arg3;
- (void)finishedRequest:(id)arg1 withResponseData:(id)arg2 response:(id)arg3 error:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSURL *baseURL; // @dynamic baseURL;

@end

