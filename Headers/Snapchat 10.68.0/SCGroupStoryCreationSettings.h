//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCGroupStoryCreationSettings : NSObject
{
    _Bool _geoFenceTurnOn;
    _Bool _canAutosave;
    _Bool _autosaveTurnOn;
    NSString *_displayName;
    long long _storyType;
    NSArray *_posterIdsPermitted;
    NSArray *_viewerIdsPermitted;
    long long _geoStoryPrivacyType;
    NSString *_descriptionText;
    struct CLLocationCoordinate2D _geoFenceCenter;
}

@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) long long geoStoryPrivacyType; // @synthesize geoStoryPrivacyType=_geoStoryPrivacyType;
@property(nonatomic) struct CLLocationCoordinate2D geoFenceCenter; // @synthesize geoFenceCenter=_geoFenceCenter;
@property(nonatomic) _Bool autosaveTurnOn; // @synthesize autosaveTurnOn=_autosaveTurnOn;
@property(nonatomic) _Bool canAutosave; // @synthesize canAutosave=_canAutosave;
@property(nonatomic) _Bool geoFenceTurnOn; // @synthesize geoFenceTurnOn=_geoFenceTurnOn;
@property(copy, nonatomic) NSArray *viewerIdsPermitted; // @synthesize viewerIdsPermitted=_viewerIdsPermitted;
@property(copy, nonatomic) NSArray *posterIdsPermitted; // @synthesize posterIdsPermitted=_posterIdsPermitted;
@property(nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end

