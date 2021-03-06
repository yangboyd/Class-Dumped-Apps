//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXSLSRequest.h"

@class NSString;

@interface XBXSLSSocialItemsRequest : XBXSLSRequest
{
    long long _requestItemType;
    long long _requestType;
    NSString *_xuid;
    NSString *_rootPath;
    long long _maxItems;
}

+ (int)getErrorCodeForRequestType:(long long)arg1;
+ (id)requestItemTypeParamFromRequestItemType:(long long)arg1;
+ (id)requestURLWithRootPath:(id)arg1 requestItemType:(long long)arg2 maxItems:(long long)arg3 environment:(int)arg4;
+ (id)requestURLWithXuid:(id)arg1 requestItemType:(long long)arg2 batch:(_Bool)arg3 environment:(int)arg4;
+ (id)requestWithRootPath:(id)arg1 requestItemType:(long long)arg2 maxItems:(long long)arg3 environment:(int)arg4 tokenProvider:(id)arg5 delegate:(id)arg6 ignoreCache:(_Bool)arg7;
+ (id)requestWithXuid:(id)arg1 requestItemType:(long long)arg2 rootPaths:(id)arg3 environment:(int)arg4 tokenProvider:(id)arg5 delegate:(id)arg6 ignoreCache:(_Bool)arg7;
+ (id)requestWithXuid:(id)arg1 requestItemType:(long long)arg2 environment:(int)arg3 tokenProvider:(id)arg4 delegate:(id)arg5 ignoreCache:(_Bool)arg6;
@property(nonatomic) long long maxItems; // @synthesize maxItems=_maxItems;
@property(copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(copy, nonatomic) NSString *xuid; // @synthesize xuid=_xuid;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) long long requestItemType; // @synthesize requestItemType=_requestItemType;
- (void).cxx_destruct;

@end

