//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, ORCH2ImageContent;

@interface ORCH2ButtonData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasInitialTextClientRenderingTemplateSubstitutionKey; // @dynamic hasInitialTextClientRenderingTemplateSubstitutionKey;
@property(retain, nonatomic) ORCH2ImageContent *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *initialTextClientRenderingTemplateSubstitutionKey; // @dynamic initialTextClientRenderingTemplateSubstitutionKey;

@end

