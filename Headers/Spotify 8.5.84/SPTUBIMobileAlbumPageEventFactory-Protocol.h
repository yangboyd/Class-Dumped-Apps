//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileAlbumPage_CopyrightEventFactory, SPTUBIMobileAlbumPage_CourtesyLineEventFactory, SPTUBIMobileAlbumPage_DeeplinkingEventFactory, SPTUBIMobileAlbumPage_HeaderEventFactory, SPTUBIMobileAlbumPage_MetadataEventFactory, SPTUBIMobileAlbumPage_OfflineSwitchEventFactory, SPTUBIMobileAlbumPage_RecommendationsEventFactory, SPTUBIMobileAlbumPage_TopContainerEventFactory, SPTUBIMobileAlbumPage_TrackCloudEventFactory, SPTUBIMobileAlbumPage_TrackListEventFactory, SPTUBIMobileAlbumPage_UnknownComponentEventFactory;

@protocol SPTUBIMobileAlbumPageEventFactory <NSObject>
- (id <SPTUBIMobileAlbumPage_DeeplinkingEventFactory>)deeplinkingFactory;
- (id <SPTUBIMobileAlbumPage_UnknownComponentEventFactory>)unknownComponentFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileAlbumPage_CopyrightEventFactory>)copyrightFactoryWithPosition:(long long)arg1;
- (id <SPTUBIMobileAlbumPage_CourtesyLineEventFactory>)courtesyLineFactory;
- (id <SPTUBIMobileAlbumPage_RecommendationsEventFactory>)recommendationsFactory;
- (id <SPTUBIMobileAlbumPage_MetadataEventFactory>)metadataFactory;
- (id <SPTUBIMobileAlbumPage_TrackCloudEventFactory>)trackCloudFactory;
- (id <SPTUBIMobileAlbumPage_TrackListEventFactory>)trackListFactory;
- (id <SPTUBIMobileAlbumPage_OfflineSwitchEventFactory>)offlineSwitchFactory;
- (id <SPTUBIMobileAlbumPage_TopContainerEventFactory>)topContainerFactory;
- (id <SPTUBIMobileAlbumPage_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

