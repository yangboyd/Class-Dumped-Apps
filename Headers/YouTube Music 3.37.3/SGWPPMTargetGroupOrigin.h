//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SGWPPMTargetGroupName, SGWPPMTargetGroupPhoto;

@interface SGWPPMTargetGroupOrigin : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPhoto; // @dynamic hasPhoto;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) SGWPPMTargetGroupName *name; // @dynamic name;
@property(retain, nonatomic) SGWPPMTargetGroupPhoto *photo; // @dynamic photo;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

