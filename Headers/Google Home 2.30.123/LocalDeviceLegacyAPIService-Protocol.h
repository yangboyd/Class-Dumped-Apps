//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTMSessionFetcher, NSURLRequest, SetupCastDevice;

@protocol LocalDeviceLegacyAPIService <NSObject>
- (void)refreshLATsWithCompletion:(void (^)(void))arg1;
- (GTMSessionFetcher *)fetcherForURLRequest:(NSURLRequest *)arg1 forceHTTPS:(_Bool)arg2 device:(SetupCastDevice *)arg3;
- (GTMSessionFetcher *)fetcherForURLRequest:(NSURLRequest *)arg1 device:(SetupCastDevice *)arg2;
@end

