//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileConnectVolumeControlEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileConnectVolumeControlEventFactoryImplementation : NSObject <SPTUBIMobileConnectVolumeControlEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageIdentifier:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)systemVolumeDownFactory;
- (id)systemVolumeUpFactory;
- (id)systemVolumeSliderFactory;
- (id)volumeSliderFactory;
- (id)remoteVolumeOverlayFactory;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

