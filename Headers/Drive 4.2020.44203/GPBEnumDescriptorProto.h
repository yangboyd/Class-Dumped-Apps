//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GPBEnumOptions, NSMutableArray, NSString;

@interface GPBEnumDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBEnumOptions *options; // @dynamic options;
@property(retain, nonatomic) NSMutableArray *reservedNameArray; // @dynamic reservedNameArray;
@property(readonly, nonatomic) unsigned long long reservedNameArray_Count; // @dynamic reservedNameArray_Count;
@property(retain, nonatomic) NSMutableArray *reservedRangeArray; // @dynamic reservedRangeArray;
@property(readonly, nonatomic) unsigned long long reservedRangeArray_Count; // @dynamic reservedRangeArray_Count;
@property(retain, nonatomic) NSMutableArray *valueArray; // @dynamic valueArray;
@property(readonly, nonatomic) unsigned long long valueArray_Count; // @dynamic valueArray_Count;

@end

