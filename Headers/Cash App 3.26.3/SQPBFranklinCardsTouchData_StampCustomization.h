//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBFranklinCardsTouchData_Point;

@interface SQPBFranklinCardsTouchData_StampCustomization : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinCardsTouchData_Point *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasRotation; // @dynamic hasRotation;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) float height; // @dynamic height;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) float rotation; // @dynamic rotation;
@property(nonatomic) float width; // @dynamic width;

@end

