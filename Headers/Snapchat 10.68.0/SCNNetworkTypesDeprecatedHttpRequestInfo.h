//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNNetworkTypesDeprecatedHttpRequestInfo : NSObject
{
    _Bool _shouldGzipRequest;
    long long _requestType;
}

+ (id)DeprecatedHttpRequestInfoWithShouldGzipRequest:(_Bool)arg1 requestType:(long long)arg2;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) _Bool shouldGzipRequest; // @synthesize shouldGzipRequest=_shouldGzipRequest;
- (id)description;
- (id)initWithShouldGzipRequest:(_Bool)arg1 requestType:(long long)arg2;

@end

