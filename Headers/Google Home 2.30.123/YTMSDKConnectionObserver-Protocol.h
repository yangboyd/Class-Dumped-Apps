//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YTMSDK;

@protocol YTMSDKConnectionObserver <NSObject>
- (void)YTMSDK:(YTMSDK *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)YTMSDKDidDisconnectFromYouTubeMusic:(YTMSDK *)arg1;
- (void)YTMSDKDidConnectToYouTubeMusic:(YTMSDK *)arg1;
@end

