//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileAdsBookmarkButtonEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileAdsBookmarkButtonEventFactoryImplementation : NSObject <SPTUBIMobileAdsBookmarkButtonEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2 parentAbsoluteLocation:(id)arg3;
+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitRemoveBookmarkAdWithAdId:(id)arg1 adUri:(id)arg2;
- (id)hitBookmarkAdWithAdId:(id)arg1 adUri:(id)arg2;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1 pageUri:(id)arg2 parentAbsoluteLocation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

