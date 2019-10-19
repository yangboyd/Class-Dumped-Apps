//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUnlockerProtocol-Protocol.h"

@class NSString;
@protocol NavigationDelegate, SCFeatureLensCarousel, SCFeatureLensFeed, SCLensUnlockerProtocol;

@interface SCLensSearchUnlocker : NSObject <SCLensUnlockerProtocol>
{
    id <NavigationDelegate> _navigationDelegate;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    id <SCFeatureLensCarousel> _lensCarouselFeature;
    id <SCFeatureLensFeed> _lensFeedFeature;
}

+ (id)lensUnlockerWitUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (void).cxx_destruct;
- (void)_dismissSearchIfNeeded;
- (void)performAction:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)initWithLensUnlocker:(id)arg1 lensCarouselFeature:(id)arg2 lensFeedFeature:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1 lensUnlocker:(id)arg2 lensCarouselFeature:(id)arg3 lensFeedFeature:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

