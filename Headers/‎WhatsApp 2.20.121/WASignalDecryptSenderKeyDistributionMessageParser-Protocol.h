//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class WAJID, WASignalDecryptParsedMessage;
@protocol WASignalGroupCipherJID;

@protocol WASignalDecryptSenderKeyDistributionMessageParser <NSObject>
- (_Bool)parsedFastRatchetSenderKeyDistributionMessage:(WASignalDecryptParsedMessage *)arg1 getSenderKeyData:(out id *)arg2 error:(out id *)arg3;
- (_Bool)parsedMessageContainsFastRatchetSenderKeyDistributionMessage:(WASignalDecryptParsedMessage *)arg1;
- (_Bool)parsedSenderKeyDistributionMessage:(WASignalDecryptParsedMessage *)arg1 groupJID:(WAJID<WASignalGroupCipherJID> *)arg2 getSenderKeyData:(out id *)arg3 error:(out id *)arg4;
- (_Bool)parsedMessageContainsSenderKeyDistributionMessage:(WASignalDecryptParsedMessage *)arg1;
@end

