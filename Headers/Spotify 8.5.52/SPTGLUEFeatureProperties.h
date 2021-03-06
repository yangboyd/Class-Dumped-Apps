//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTGLUEFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _visrefHeadersWithGreenButtonEnabled;
    _Bool _visrefLeftAlignedSectionHeaderEnabled;
    _Bool _visrefLeftAlignedTrackCloudEnabled;
    _Bool _encoreAlbumHeaderEnabled;
}

@property(readonly, nonatomic) _Bool encoreAlbumHeaderEnabled; // @synthesize encoreAlbumHeaderEnabled=_encoreAlbumHeaderEnabled;
@property(readonly, nonatomic) _Bool visrefLeftAlignedTrackCloudEnabled; // @synthesize visrefLeftAlignedTrackCloudEnabled=_visrefLeftAlignedTrackCloudEnabled;
@property(readonly, nonatomic) _Bool visrefLeftAlignedSectionHeaderEnabled; // @synthesize visrefLeftAlignedSectionHeaderEnabled=_visrefLeftAlignedSectionHeaderEnabled;
@property(readonly, nonatomic) _Bool visrefHeadersWithGreenButtonEnabled; // @synthesize visrefHeadersWithGreenButtonEnabled=_visrefHeadersWithGreenButtonEnabled;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

