//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GRWSAndroidIntentTarget : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *action; // @dynamic action;
@property(copy, nonatomic) NSString *className_p; // @dynamic className_p;
@property(copy, nonatomic) NSString *data_p; // @dynamic data_p;
@property(retain, nonatomic) NSMutableArray *extraDataArray; // @dynamic extraDataArray;
@property(readonly, nonatomic) unsigned long long extraDataArray_Count; // @dynamic extraDataArray_Count;
@property(nonatomic) int flags; // @dynamic flags;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasClassName_p; // @dynamic hasClassName_p;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(nonatomic) _Bool hasFlags; // @dynamic hasFlags;
@property(nonatomic) _Bool hasIntentType; // @dynamic hasIntentType;
@property(nonatomic) _Bool hasPackageName; // @dynamic hasPackageName;
@property(nonatomic) int intentType; // @dynamic intentType;
@property(copy, nonatomic) NSString *packageName; // @dynamic packageName;

@end

