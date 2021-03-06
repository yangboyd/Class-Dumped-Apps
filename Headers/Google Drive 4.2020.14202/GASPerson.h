//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GTPDate, NSMutableArray, NSString;

@interface GASPerson : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GTPDate *birthday; // @dynamic birthday;
@property(retain, nonatomic) NSMutableArray *emailAddressesArray; // @dynamic emailAddressesArray;
@property(readonly, nonatomic) unsigned long long emailAddressesArray_Count; // @dynamic emailAddressesArray_Count;
@property(nonatomic) _Bool hasBirthday; // @dynamic hasBirthday;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *personNamesArray; // @dynamic personNamesArray;
@property(readonly, nonatomic) unsigned long long personNamesArray_Count; // @dynamic personNamesArray_Count;
@property(retain, nonatomic) NSMutableArray *photosArray; // @dynamic photosArray;
@property(readonly, nonatomic) unsigned long long photosArray_Count; // @dynamic photosArray_Count;

@end

