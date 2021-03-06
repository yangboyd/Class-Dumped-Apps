//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCHNotificationProtocol-Protocol.h"

@class NSData, NSString, NSURL;

@interface RCHNotification : NSObject <RCHNotificationProtocol>
{
    NSString *_identifier;
    NSString *_threadID;
    NSString *_typeID;
    long long _iReachReadState;
    NSString *_title;
    NSString *_text;
    NSURL *_iconURL;
    long long _lastUpdatedVersion;
    long long _lastNotificationVersion;
    NSData *_payloadData;
    NSString *_payloadType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(readonly, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(readonly, nonatomic) long long lastNotificationVersion; // @synthesize lastNotificationVersion=_lastNotificationVersion;
@property(readonly, nonatomic) long long lastUpdatedVersion; // @synthesize lastUpdatedVersion=_lastUpdatedVersion;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long iReachReadState; // @synthesize iReachReadState=_iReachReadState;
@property(readonly, copy, nonatomic) NSString *typeID; // @synthesize typeID=_typeID;
@property(readonly, copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 threadID:(id)arg2 typeID:(id)arg3 readState:(long long)arg4 title:(id)arg5 text:(id)arg6 iconURL:(id)arg7 lastUpdatedVersion:(long long)arg8 lastNotificationVersion:(long long)arg9 payloadData:(id)arg10 payloadType:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

