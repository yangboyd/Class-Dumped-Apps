//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface GIMLogsDuoGroupCallEndOfCallFrameEncryptorStats_SframeEncryptorStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cipherNotSupportedCount; // @dynamic cipherNotSupportedCount;
@property(nonatomic) int ciphertextBufferInvalidSizeCount; // @dynamic ciphertextBufferInvalidSizeCount;
@property(nonatomic) int csrcsListInvalidCount; // @dynamic csrcsListInvalidCount;
@property(nonatomic) int emptyKeySlidingWindowCount; // @dynamic emptyKeySlidingWindowCount;
@property(nonatomic) int encryptCount; // @dynamic encryptCount;
@property(nonatomic) int failedToVerifyMacCount; // @dynamic failedToVerifyMacCount;
@property(nonatomic) int frameCounterCollisionCount; // @dynamic frameCounterCollisionCount;
@property(nonatomic) int frameCounterMaxedCount; // @dynamic frameCounterMaxedCount;
@property(nonatomic) int frameCounterStaleCount; // @dynamic frameCounterStaleCount;
@property(nonatomic) int internalErrorCount; // @dynamic internalErrorCount;
@property(nonatomic) int invalidConfigurationCount; // @dynamic invalidConfigurationCount;
@property(nonatomic) int keyBufferInvalidSizeCount; // @dynamic keyBufferInvalidSizeCount;
@property(nonatomic) int keyOutOfOrderCount; // @dynamic keyOutOfOrderCount;
@property(nonatomic) int keyRatchetMaxedCount; // @dynamic keyRatchetMaxedCount;
@property(nonatomic) int keyRotationCount; // @dynamic keyRotationCount;
@property(nonatomic) int noKeyFoundCount; // @dynamic noKeyFoundCount;
@property(nonatomic) int payloadVersionNotSupportedCount; // @dynamic payloadVersionNotSupportedCount;
@property(nonatomic) int plaintextBufferInvalidSizeCount; // @dynamic plaintextBufferInvalidSizeCount;
@property(nonatomic) int ssrcToSrcidMappingFullCount; // @dynamic ssrcToSrcidMappingFullCount;
@property(nonatomic) int successfulEncryptCount; // @dynamic successfulEncryptCount;

@end

