//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMPromptBlock, ASMResourceKey, NSString;

@interface ASMPromptItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *callToActionText; // @dynamic callToActionText;
@property(nonatomic) _Bool hasCallToActionText; // @dynamic hasCallToActionText;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMainBlock; // @dynamic hasMainBlock;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(retain, nonatomic) ASMPromptBlock *mainBlock; // @dynamic mainBlock;
@property(retain, nonatomic) ASMResourceKey *target; // @dynamic target;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

