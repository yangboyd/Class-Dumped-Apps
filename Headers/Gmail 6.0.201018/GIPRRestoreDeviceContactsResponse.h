//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GIPRRDeviceInfo, NSMutableArray, NSString;

@interface GIPRRestoreDeviceContactsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contactArray; // @dynamic contactArray;
@property(readonly, nonatomic) unsigned long long contactArray_Count; // @dynamic contactArray_Count;
@property(retain, nonatomic) GIPRRDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;

@end

