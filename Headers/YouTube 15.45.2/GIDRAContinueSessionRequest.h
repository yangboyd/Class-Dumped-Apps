//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GIDRAClientProposalReply, NSString;

@interface GIDRAContinueSessionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) int challengeId; // @dynamic challengeId;
@property(nonatomic) _Bool hasProposalResponse; // @dynamic hasProposalResponse;
@property(retain, nonatomic) GIDRAClientProposalReply *proposalResponse; // @dynamic proposalResponse;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) long long userId; // @dynamic userId;

@end

