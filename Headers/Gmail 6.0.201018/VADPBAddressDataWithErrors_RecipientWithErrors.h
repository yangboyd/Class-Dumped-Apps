//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBEnumArray, NSString;

@interface VADPBAddressDataWithErrors_RecipientWithErrors : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRecipient; // @dynamic hasRecipient;
@property(copy, nonatomic) NSString *recipient; // @dynamic recipient;
@property(retain, nonatomic) GPBEnumArray *recipientErrorsArray; // @dynamic recipientErrorsArray;
@property(readonly, nonatomic) unsigned long long recipientErrorsArray_Count; // @dynamic recipientErrorsArray_Count;

@end

