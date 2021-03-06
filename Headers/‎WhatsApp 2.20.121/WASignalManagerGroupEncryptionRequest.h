//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WASignalManagerEncryptionRequest.h>

@class NSData, NSSet, NSString, WAJID;
@protocol WASignalGroupCipherJID;

@interface WASignalManagerGroupEncryptionRequest : WASignalManagerEncryptionRequest
{
    NSSet *_deviceJIDsNeedingSenderKeys;
    NSData *_senderKeyData;
    WAJID<WASignalGroupCipherJID> *_chatJID;
    NSSet *_pendingPeerDeviceJIDs;
    NSString *_recipientPhashForUserJIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *recipientPhashForUserJIDs; // @synthesize recipientPhashForUserJIDs=_recipientPhashForUserJIDs;
@property(readonly, nonatomic) NSSet *pendingPeerDeviceJIDs; // @synthesize pendingPeerDeviceJIDs=_pendingPeerDeviceJIDs;
@property(readonly, nonatomic) WAJID<WASignalGroupCipherJID> *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, nonatomic) NSData *senderKeyData; // @synthesize senderKeyData=_senderKeyData;
@property(readonly, nonatomic) NSSet *deviceJIDsNeedingSenderKeys; // @synthesize deviceJIDsNeedingSenderKeys=_deviceJIDsNeedingSenderKeys;
- (id)initWithMessageData:(id)arg1 groupCipherJID:(id)arg2 deviceJIDsNeedingSenderKeys:(id)arg3 senderKeyData:(id)arg4 pendingPeerDeviceJIDs:(id)arg5 recipientPhashForUserJIDs:(id)arg6;

@end

