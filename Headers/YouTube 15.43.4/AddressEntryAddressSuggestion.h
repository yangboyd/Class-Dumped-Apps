//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class OrchAddressFormValue, OrchInfoMessage;

@interface AddressEntryAddressSuggestion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchAddressFormValue *address; // @dynamic address;
@property(retain, nonatomic) OrchInfoMessage *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;

@end

