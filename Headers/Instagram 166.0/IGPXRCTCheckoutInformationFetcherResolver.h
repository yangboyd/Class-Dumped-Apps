//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface IGPXRCTCheckoutInformationFetcherResolver : NSObject
{
    NSDictionary *_networkResponse;
    NSError *_networkError;
    CDUnknownBlockType _resolver;
    CDUnknownBlockType _rejecter;
}

- (void).cxx_destruct;
- (void)invalidateNetworkResponse;
- (_Bool)resolveWithPromiseResolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (_Bool)resolveWithNetworkError:(id)arg1;
- (_Bool)resolveWithNetworkResponse:(id)arg1;

@end

