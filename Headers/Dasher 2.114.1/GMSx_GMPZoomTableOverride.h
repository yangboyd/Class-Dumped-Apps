//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GPBInt32Array, NSMutableArray;

@interface GMSx_GMPZoomTableOverride : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *coveringTileArray; // @dynamic coveringTileArray;
@property(readonly, nonatomic) unsigned long long coveringTileArray_Count; // @dynamic coveringTileArray_Count;
@property(retain, nonatomic) GMSx_GPBInt32Array *supportedTileZoomsArray; // @dynamic supportedTileZoomsArray;
@property(readonly, nonatomic) unsigned long long supportedTileZoomsArray_Count; // @dynamic supportedTileZoomsArray_Count;

@end

