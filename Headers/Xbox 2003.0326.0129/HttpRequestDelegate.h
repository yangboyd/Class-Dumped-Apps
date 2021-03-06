//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSHTTPURLResponse, NSString;

@interface HttpRequestDelegate : NSObject <NSURLConnectionDataDelegate>
{
    unsigned int _requestId;
    TPtr_190d98ef _pHttpManager;
    TPtr_ea703157 _pHttpResponse;
    unsigned long long _readBufferFilledSize;
    NSHTTPURLResponse *_response;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithRequestId:(unsigned int)arg1 httpManager:(const TPtr_190d98ef *)arg2 httpResponse:(const TPtr_ea703157 *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

