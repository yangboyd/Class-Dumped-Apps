//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTFeedDrawerService-Protocol.h"

@class NSString;
@protocol IESLiveSettings;

@interface IESLiveMTFeedDrawerServiceImpl : NSObject <IESLiveMTFeedDrawerService>
{
    id <IESLiveSettings> _settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
- (id)feedDrawerConfigs;
- (id)feedDrawerConfigForEnterFrom:(id)arg1 enterMethod:(id)arg2;
- (_Bool)containsEnterFrom:(id)arg1 enterMethod:(id)arg2;
- (id)tabConfigForEnterFrom:(id)arg1 enterMethod:(id)arg2;
- (id)tabModelForEnterFrom:(id)arg1 enterMethod:(id)arg2 enterLiveMethod:(id)arg3;
- (id)viewControllerWithEnterFrom:(id)arg1 enterMethod:(id)arg2 enterLiveMethod:(id)arg3;
- (id)viewControllerWithEnterFrom:(id)arg1 enterMethod:(id)arg2;
- (id)feedDrawer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

