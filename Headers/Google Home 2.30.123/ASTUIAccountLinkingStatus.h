//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ASTUIAccountLinkingStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *errorHint; // @dynamic errorHint;
@property(nonatomic) _Bool hasErrorHint; // @dynamic hasErrorHint;
@property(nonatomic) _Bool hasIsReadyForLinking; // @dynamic hasIsReadyForLinking;
@property(nonatomic) _Bool isReadyForLinking; // @dynamic isReadyForLinking;

@end

