//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString;

@interface YTIChannelAboutMetadataFlaggingMenuRenderer_ChannelFlaggingMenuItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *confirmationMessageAdditionalText; // @dynamic confirmationMessageAdditionalText;
@property(retain, nonatomic) YTIFormattedString *confirmationMessageText; // @dynamic confirmationMessageText;
@property(copy, nonatomic) NSString *flaggingAction; // @dynamic flaggingAction;
@property(nonatomic) _Bool hasConfirmationMessageAdditionalText; // @dynamic hasConfirmationMessageAdditionalText;
@property(nonatomic) _Bool hasConfirmationMessageText; // @dynamic hasConfirmationMessageText;
@property(nonatomic) _Bool hasFlaggingAction; // @dynamic hasFlaggingAction;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;

@end

