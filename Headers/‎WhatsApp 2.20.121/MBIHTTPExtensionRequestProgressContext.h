//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBIHTTPExtensionRequestProgressContext : NSObject
{
    const struct __MCIURLRequest *_request;
    const void *_requestContext;
}

@property(readonly, nonatomic) const void *requestContext; // @synthesize requestContext=_requestContext;
@property(readonly, nonatomic) const struct __MCIURLRequest *request; // @synthesize request=_request;
- (void)dealloc;
- (id)initWithRequest:(const struct __MCIURLRequest *)arg1 requestContext:(const void *)arg2;

@end

