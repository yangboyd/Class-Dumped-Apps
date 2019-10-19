//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface WrappedSenderKey : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIv; // @dynamic hasIv;
@property(nonatomic) _Bool hasKeyExpiry; // @dynamic hasKeyExpiry;
@property(nonatomic) _Bool hasMillisecondsToExpiry; // @dynamic hasMillisecondsToExpiry;
@property(nonatomic) _Bool hasWrappedSenderKeyData; // @dynamic hasWrappedSenderKeyData;
@property(copy, nonatomic) NSData *iv; // @dynamic iv;
@property(nonatomic) unsigned long long keyExpiry; // @dynamic keyExpiry;
@property(nonatomic) unsigned long long millisecondsToExpiry; // @dynamic millisecondsToExpiry;
@property(copy, nonatomic) NSData *wrappedSenderKeyData; // @dynamic wrappedSenderKeyData;

@end

