//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDPAppPage, NSDictionary, NSString;

@protocol BDPAppPageProtocol <NSObject>

@optional
- (_Bool)appPageShouldTrackPageFrameJSLoadTime;
- (void)appPageFireEvent:(BDPAppPage *)arg1 event:(NSString *)arg2 param:(NSDictionary *)arg3;
- (void)appPagePublishMessage:(BDPAppPage *)arg1 event:(NSString *)arg2 param:(NSDictionary *)arg3;
- (void)appPageInvokeMethod:(BDPAppPage *)arg1 event:(NSString *)arg2 param:(NSDictionary *)arg3;
@end

