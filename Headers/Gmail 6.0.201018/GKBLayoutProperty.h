//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GKBLayoutProperty : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(nonatomic) _Bool hasDeviceType; // @dynamic hasDeviceType;
@property(nonatomic) _Bool hasViewId; // @dynamic hasViewId;
@property(retain, nonatomic) NSMutableArray *propertiesArray; // @dynamic propertiesArray;
@property(readonly, nonatomic) unsigned long long propertiesArray_Count; // @dynamic propertiesArray_Count;
@property(copy, nonatomic) NSString *viewId; // @dynamic viewId;

@end

