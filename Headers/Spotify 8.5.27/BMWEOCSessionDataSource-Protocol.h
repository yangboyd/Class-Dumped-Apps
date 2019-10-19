//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BMWEOCMessage, BMWEOCSession, NSData, NSString;

@protocol BMWEOCSessionDataSource <NSObject>
- (void)didStartSession:(BMWEOCSession *)arg1;
- (_Bool)maySendMessage;
- (void)eventOccured:(NSString *)arg1;
- (void)errorDetected:(NSString *)arg1;
- (BMWEOCMessage *)receiveMessage:(BMWEOCMessage *)arg1;
- (void)writeData:(NSData *)arg1;
@end

