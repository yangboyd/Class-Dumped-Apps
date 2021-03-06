//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMJSONModel.h>

@class IMAdsConfigAssetCacheModel, IMAdsConfigIMAI_Model, IMAdsConfigMraidModel, IMAdsConfigRenderingModel, IMAdsConfigSkanModel, IMAdsConfigTimeouts, IMAdsConfigVastVideoModel, IMAdsConfigViewabilityModel, NSNumber, NSString;

@interface IMAdsConfigModel : IMJSONModel
{
    NSString *_url;
    NSString *_moatPartnercodeNativeDisplay;
    long long _minimumRefreshInterval;
    long long _defaultRefreshInterval;
    NSNumber *_showIntWithoutVC;
    NSNumber *_mediaVolumeCollectionEnabled;
    IMAdsConfigIMAI_Model *_imai;
    IMAdsConfigRenderingModel *_rendering;
    IMAdsConfigAssetCacheModel *_assetCache;
    IMAdsConfigVastVideoModel *_vastVideo;
    IMAdsConfigMraidModel *_mraid;
    IMAdsConfigViewabilityModel *_viewability;
    IMAdsConfigTimeouts *_timeouts;
    IMAdsConfigSkanModel *_skan;
}

@property(retain, nonatomic) IMAdsConfigSkanModel *skan; // @synthesize skan=_skan;
@property(retain, nonatomic) IMAdsConfigTimeouts *timeouts; // @synthesize timeouts=_timeouts;
@property(retain, nonatomic) IMAdsConfigViewabilityModel *viewability; // @synthesize viewability=_viewability;
@property(retain, nonatomic) IMAdsConfigMraidModel *mraid; // @synthesize mraid=_mraid;
@property(retain, nonatomic) IMAdsConfigVastVideoModel *vastVideo; // @synthesize vastVideo=_vastVideo;
@property(retain, nonatomic) IMAdsConfigAssetCacheModel *assetCache; // @synthesize assetCache=_assetCache;
@property(retain, nonatomic) IMAdsConfigRenderingModel *rendering; // @synthesize rendering=_rendering;
@property(retain, nonatomic) IMAdsConfigIMAI_Model *imai; // @synthesize imai=_imai;
@property(retain, nonatomic) NSNumber *mediaVolumeCollectionEnabled; // @synthesize mediaVolumeCollectionEnabled=_mediaVolumeCollectionEnabled;
@property(retain, nonatomic) NSNumber *showIntWithoutVC; // @synthesize showIntWithoutVC=_showIntWithoutVC;
@property(nonatomic) long long defaultRefreshInterval; // @synthesize defaultRefreshInterval=_defaultRefreshInterval;
@property(nonatomic) long long minimumRefreshInterval; // @synthesize minimumRefreshInterval=_minimumRefreshInterval;
@property(retain, nonatomic) NSString *moatPartnercodeNativeDisplay; // @synthesize moatPartnercodeNativeDisplay=_moatPartnercodeNativeDisplay;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end

