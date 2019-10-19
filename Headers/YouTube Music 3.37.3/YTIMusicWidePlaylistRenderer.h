//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMOfflinePlaylistIDProtocol-Protocol.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIMusicWidePlaylistOfflineabilitySupportedRenderers, YTIMusicWidePlaylistThumbnailSupportedRenderers;

@interface YTIMusicWidePlaylistRenderer : GPBMessage <YTMOfflinePlaylistIDProtocol>
{
}

+ (id)descriptor;
- (id)ytm_playlistThumbnailOverlayRenderer;
- (_Bool)ytm_hasPlaylistThumbnailOverlayRenderer;
- (id)ytm_offlinePlaylistID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasThumbnailRenderer; // @dynamic hasThumbnailRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIMusicWidePlaylistOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIMusicWidePlaylistThumbnailSupportedRenderers *thumbnailRenderer; // @dynamic thumbnailRenderer;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

