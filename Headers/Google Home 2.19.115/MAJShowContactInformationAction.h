//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MAJActionPrompts, MAJContactReference, NSMutableArray;

@interface MAJShowContactInformationAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contactArray; // @dynamic contactArray;
@property(readonly, nonatomic) unsigned long long contactArray_Count; // @dynamic contactArray_Count;
@property(retain, nonatomic) MAJContactReference *contactCr; // @dynamic contactCr;
@property(nonatomic) _Bool hasContactCr; // @dynamic hasContactCr;
@property(nonatomic) _Bool hasHasMoonshineContactResults; // @dynamic hasHasMoonshineContactResults;
@property(nonatomic) _Bool hasMoonshineContactResults; // @dynamic hasMoonshineContactResults;
@property(nonatomic) _Bool hasPrompts; // @dynamic hasPrompts;
@property(nonatomic) _Bool hasSearchContactType; // @dynamic hasSearchContactType;
@property(nonatomic) _Bool hasShowEmail; // @dynamic hasShowEmail;
@property(nonatomic) _Bool hasShowPhone; // @dynamic hasShowPhone;
@property(nonatomic) _Bool hasShowPostalAddress; // @dynamic hasShowPostalAddress;
@property(retain, nonatomic) MAJActionPrompts *prompts; // @dynamic prompts;
@property(nonatomic) int searchContactType; // @dynamic searchContactType;
@property(nonatomic) _Bool showEmail; // @dynamic showEmail;
@property(nonatomic) _Bool showPhone; // @dynamic showPhone;
@property(nonatomic) _Bool showPostalAddress; // @dynamic showPostalAddress;

@end

