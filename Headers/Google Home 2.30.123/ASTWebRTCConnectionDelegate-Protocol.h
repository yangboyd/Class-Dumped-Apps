//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOGRTCAudioTrack, GOOGRTCVideoTrack, NSError;
@protocol ASTWebRTCConnection;

@protocol ASTWebRTCConnectionDelegate <NSObject>
- (void)connection:(id <ASTWebRTCConnection>)arg1 closedWithError:(NSError *)arg2;
- (void)connection:(id <ASTWebRTCConnection>)arg1 establishedWithVideoTrack:(GOOGRTCVideoTrack *)arg2 audioTrack:(GOOGRTCAudioTrack *)arg3;
@end

