//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class EmbeddedLandingPagePage, OrchResponseContext, OrchSecureDataHeader, OrchUiError;

@interface EmbeddedLandingPageSubmitResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchResponseContext *context; // @dynamic context;
@property(retain, nonatomic) OrchUiError *error; // @dynamic error;
@property(nonatomic) int flowInstruction; // @dynamic flowInstruction;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasFlowInstruction; // @dynamic hasFlowInstruction;
@property(nonatomic) _Bool hasPage; // @dynamic hasPage;
@property(nonatomic) _Bool hasSecureHeader; // @dynamic hasSecureHeader;
@property(retain, nonatomic) EmbeddedLandingPagePage *page; // @dynamic page;
@property(retain, nonatomic) OrchSecureDataHeader *secureHeader; // @dynamic secureHeader;

@end

