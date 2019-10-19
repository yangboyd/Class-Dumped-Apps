//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRWALAppStoreData, GRWALIntentsKit, NSMutableArray, NSString;

@interface GRWALAppData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appDescription; // @dynamic appDescription;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) GRWALAppStoreData *appStoreData; // @dynamic appStoreData;
@property(nonatomic) unsigned int formatVersion; // @dynamic formatVersion;
@property(nonatomic) _Bool googleOwnedApp; // @dynamic googleOwnedApp;
@property(nonatomic) _Bool hasAppStoreData; // @dynamic hasAppStoreData;
@property(nonatomic) _Bool hasIntentsKit; // @dynamic hasIntentsKit;
@property(retain, nonatomic) NSMutableArray *iconsArray; // @dynamic iconsArray;
@property(readonly, nonatomic) unsigned long long iconsArray_Count; // @dynamic iconsArray_Count;
@property(retain, nonatomic) GRWALIntentsKit *intentsKit; // @dynamic intentsKit;
@property(copy, nonatomic) NSString *intentsKitJson; // @dynamic intentsKitJson;
@property(copy, nonatomic) NSString *openURLScheme; // @dynamic openURLScheme;
@property(nonatomic) _Bool promoted; // @dynamic promoted;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;

@end

