//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCBoltPubSubCallback, SCBoltSqsCallback;

@interface SCBoltIngestContentCallback : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int callbackOneOfCase; // @dynamic callbackOneOfCase;
@property(retain, nonatomic) SCBoltPubSubCallback *pubSubCallback; // @dynamic pubSubCallback;
@property(retain, nonatomic) SCBoltSqsCallback *sqsCallback; // @dynamic sqsCallback;

@end

