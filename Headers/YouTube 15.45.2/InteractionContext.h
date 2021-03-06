//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ApprovedContext, ContentContext, SentimentContext, ViewedContext;

@interface InteractionContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ApprovedContext *approvedContext; // @dynamic approvedContext;
@property(retain, nonatomic) ContentContext *contentContext; // @dynamic contentContext;
@property(nonatomic) _Bool hasInteractionLocation; // @dynamic hasInteractionLocation;
@property(nonatomic) int interactionLocation; // @dynamic interactionLocation;
@property(retain, nonatomic) SentimentContext *sentimentContext; // @dynamic sentimentContext;
@property(readonly, nonatomic) int typeSpecificContextOneOfCase; // @dynamic typeSpecificContextOneOfCase;
@property(retain, nonatomic) ViewedContext *viewDurationContext; // @dynamic viewDurationContext;

@end

