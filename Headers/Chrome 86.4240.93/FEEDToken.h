//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class GNPContentId;

@interface FEEDToken : GPBMessage
{
}

+ (id)descriptor;
+ (id)dsc_fromDomainObject:(id)arg1;
- (id)dsc_asDomainObject;
- (id)dsc_asChannelToken;

// Remaining properties
@property(nonatomic) _Bool hasParentId; // @dynamic hasParentId;
@property(retain, nonatomic) GNPContentId *parentId; // @dynamic parentId;

@end

