//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class UVSPClientContext_DeviceInfo, UVSPClientContext_LibraryInfo;

@interface UVSPClientContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UVSPClientContext_DeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasLibraryInfo; // @dynamic hasLibraryInfo;
@property(retain, nonatomic) UVSPClientContext_LibraryInfo *libraryInfo; // @dynamic libraryInfo;

@end

