//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SGAPContactDeletionContext;

@interface SGAPContactState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SGAPContactDeletionContext *deletionContext; // @dynamic deletionContext;
@property(nonatomic) int deletionState; // @dynamic deletionState;
@property(readonly, nonatomic) int stateContextOneOfCase; // @dynamic stateContextOneOfCase;

@end

