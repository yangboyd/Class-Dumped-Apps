//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionDataTask.h>

#import <Funny/FBAdNetworkingCancellable-Protocol.h>

@class NSString;

@interface NSURLSessionDataTask (FBAdNetworkingCancellable) <FBAdNetworkingCancellable>
- (void)adnw_cancel;
- (_Bool)adnw_isRunning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

