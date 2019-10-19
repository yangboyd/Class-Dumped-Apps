//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewContextImageClassificationListener-Protocol.h"
#import "SCPreviewFilterDataProvider-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnlockablesControllerListener-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCAltitude, SCArSegmentationImageGenerator, SCCarouselGroupConfigParser, SCFuture, SCLocationServicesDataStore, SCPreviewFilterDataProviderContextData, SCSnapCommonLoggingParameters, SCSpeed, SCTimestampMetadata, SCUnlockableDataStore, SCUnlockablesContextBasedSelector, SCUserSession, SCVenueFilterSelector, SCVenueInfoSticker, SCWeather;
@protocol SCPreviewFeatureContextImageClassifier, SCPreviewFilterDataProviderDelegate;

@interface SCPreviewDefaultFilterDataProvider : NSObject <SCPreviewContextImageClassificationListener, SCUnlockablesControllerListener, SCTraceEnabled, SCPreviewFilterDataProvider>
{
    _Bool _updating;
    long long _snapSource;
    SCFuture *_fullScreenImageFuture;
    long long _mediaOrientation;
    SCUserSession *_userSession;
    SCLocationServicesDataStore *_locationServicesDataStore;
    SCUnlockableDataStore *_unlockFilterStore;
    SCArSegmentationImageGenerator *_arSegmentationImageGenerator;
    NSDate *_initialSpeedCaptureDate;
    NSDate *_initialAltitudeCaptureDate;
    NSMutableDictionary *_activeGeofilters;
    NSMutableDictionary *_geoFilterImages;
    NSMutableDictionary *_geoFilterAppearanceSettings;
    NSMutableSet *_requestedGeoFilterIds;
    NSMutableSet *_requestedGeoFilterImageLoadingKeys;
    _Bool _isGeoFilterLoaded;
    _Bool _isVenueFilterSelected;
    _Bool _hasUserUnlockedFilter;
    id <SCPreviewFilterDataProviderDelegate> _delegate;
    SCVenueFilterSelector *_venueFilterSelector;
    SCVenueInfoSticker *_venueInfo;
    SCSpeed *_speed;
    SCTimestampMetadata *_timestamp;
    SCWeather *_weather;
    unsigned long long _batteryStatus;
    NSString *_userUnlockedFilterId;
    SCAltitude *_altitude;
    long long _streakCount;
    SCUnlockablesContextBasedSelector *_geofilterContextBasedSelector;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCPreviewFilterDataProviderContextData *_filterContextData;
    SCCarouselGroupConfigParser *_carouselGroupConfigParser;
    NSString *_selectedVisualFilterName;
    id <SCPreviewFeatureContextImageClassifier> _contextImageClassifier;
}

@property(retain, nonatomic) id <SCPreviewFeatureContextImageClassifier> contextImageClassifier; // @synthesize contextImageClassifier=_contextImageClassifier;
@property(readonly, copy, nonatomic) NSString *selectedVisualFilterName; // @synthesize selectedVisualFilterName=_selectedVisualFilterName;
@property(readonly, nonatomic) SCCarouselGroupConfigParser *carouselGroupConfigParser; // @synthesize carouselGroupConfigParser=_carouselGroupConfigParser;
@property(retain, nonatomic) SCPreviewFilterDataProviderContextData *filterContextData; // @synthesize filterContextData=_filterContextData;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(retain, nonatomic) SCUnlockablesContextBasedSelector *geofilterContextBasedSelector; // @synthesize geofilterContextBasedSelector=_geofilterContextBasedSelector;
@property(readonly, nonatomic) _Bool hasUserUnlockedFilter; // @synthesize hasUserUnlockedFilter=_hasUserUnlockedFilter;
@property(readonly, nonatomic) long long streakCount; // @synthesize streakCount=_streakCount;
@property(readonly, nonatomic) SCAltitude *altitude; // @synthesize altitude=_altitude;
@property(readonly, copy, nonatomic) NSString *userUnlockedFilterId; // @synthesize userUnlockedFilterId=_userUnlockedFilterId;
@property(readonly, nonatomic) unsigned long long batteryStatus; // @synthesize batteryStatus=_batteryStatus;
@property(readonly, nonatomic) SCWeather *weather; // @synthesize weather=_weather;
@property(readonly, nonatomic) SCTimestampMetadata *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) SCSpeed *speed; // @synthesize speed=_speed;
@property(readonly, nonatomic) SCVenueInfoSticker *venueInfo; // @synthesize venueInfo=_venueInfo;
@property(readonly, nonatomic) _Bool isVenueFilterSelected; // @synthesize isVenueFilterSelected=_isVenueFilterSelected;
@property(readonly, nonatomic) SCVenueFilterSelector *venueFilterSelector; // @synthesize venueFilterSelector=_venueFilterSelector;
@property(nonatomic) __weak id <SCPreviewFilterDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *visualFilterNames;
- (void)_checkUserUnlockedFilter;
- (void)_locationServicesDataStoreDidUpdate:(id)arg1;
- (void)_unlockDataStoreDidUpdate:(id)arg1;
- (void)_startUpdatingWeatherData;
- (void)_updateWeatherDataWithLocation:(id)arg1;
- (void)startUpdatingVenueStickerData;
- (void)_startUpdatingVenueFilter;
- (void)_startUpdatingVenueData;
- (void)_updateActiveGeofilters;
@property(readonly, copy, nonatomic) NSArray *unlockFilters;
- (void)didUpdateGeoFilters:(id)arg1;
- (_Bool)shouldFilterDataProviderRequestToUseLocation;
- (void)updateWeatherViewType:(id)arg1;
- (void)updateAltitudeType:(id)arg1;
- (void)updateGeoFilter:(id)arg1;
- (void)_generateArSegmentationImageForGeofilterImage:(id)arg1 appearanceSetting:(id)arg2;
- (unsigned long long)_getBatteryStatus;
- (void)stopUpdatingFilterData;
- (void)startUpdatingFilterData;
- (void)startUpdatingInfoStickerData;
@property(readonly, nonatomic) _Bool isStreakFilterSelected;
@property(readonly, nonatomic) _Bool isReverseMotionFilterSelected;
@property(readonly, nonatomic) long long selectedGeoFilterMediaSubType;
@property(readonly, copy, nonatomic) NSArray *selectedGeoFilterIds;
@property(readonly, copy, nonatomic) NSString *selectedGeoFilterId;
@property(readonly, copy, nonatomic) NSString *selectedSpeedMotionFilterName;
- (id)selectedMotionFilterName;
@property(readonly, copy, nonatomic) NSString *selectedSmartFilterName;
@property(readonly, copy, nonatomic) NSString *selectedContextFilterId;
@property(readonly, copy, nonatomic) NSDictionary *reverseMotionFilterConfig;
@property(readonly, copy, nonatomic) NSArray *speedMotionFilterConfigs;
- (_Bool)fromDiscoverShare;
@property(readonly, copy, nonatomic) NSArray *venues;
@property(readonly, copy, nonatomic) NSDictionary *geoFilterAppearanceSettingsDictionary;
@property(readonly, copy, nonatomic) NSArray *geoFilterImages;
@property(readonly, copy, nonatomic) NSArray *geoFilters;
@property(readonly, nonatomic) unsigned long long updateMode;
- (void)didClassifyImage:(id)arg1;
- (void)userDidInteractWithHostView;
- (void)startPreviewContextImageClassification;
- (void)clear;
- (id)initWithSnapSource:(long long)arg1 unlockableDataStore:(id)arg2 streakCount:(long long)arg3 userSession:(id)arg4 fullScreenImageFuture:(id)arg5 mediaOrientation:(long long)arg6 filterContextData:(id)arg7 selectedVisualFilterName:(id)arg8;
- (id)initWithSnapSource:(long long)arg1 userSession:(id)arg2 unlockableDataStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

