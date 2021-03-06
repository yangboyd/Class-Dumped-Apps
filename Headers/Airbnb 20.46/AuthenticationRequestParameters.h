//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AuthenticationRequestParameters : NSObject
{
    NSString *_sdkTransactionID;
    NSString *_deviceData;
    NSString *_sdkEphemeralPublicKey;
    NSString *_sdkAppID;
    NSString *_sdkReferenceNumber;
    NSString *_messageVersion;
}

@property(readonly, nonatomic) NSString *messageVersion; // @synthesize messageVersion=_messageVersion;
@property(readonly, nonatomic) NSString *sdkReferenceNumber; // @synthesize sdkReferenceNumber=_sdkReferenceNumber;
@property(readonly, nonatomic) NSString *sdkAppID; // @synthesize sdkAppID=_sdkAppID;
@property(readonly, nonatomic) NSString *sdkEphemeralPublicKey; // @synthesize sdkEphemeralPublicKey=_sdkEphemeralPublicKey;
@property(readonly, nonatomic) NSString *deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) NSString *sdkTransactionID; // @synthesize sdkTransactionID=_sdkTransactionID;
- (void).cxx_destruct;
- (void)wipeAll;
- (id)getMessageVersion;
- (id)getSDKEphemeralPublicKey;
- (id)getSDKReferenceNumber;
- (id)getSDKAppID;
- (id)getSDKTransactionID;
- (id)getDeviceData;
- (id)initWithSDKTransactionId:(id)arg1 deviceData:(id)arg2 sdkEphemeralPublicKey:(id)arg3 sdkAppID:(id)arg4 sdkReferenceNumber:(id)arg5 messageVersion:(id)arg6;

@end

