//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBannerItem-Protocol.h"
#import "SPTBannerItemCustomView-Protocol.h"

@class NSString, SPTBannerView, UIView;

@interface SPTInAppMessageSDKBannerItem : NSObject <SPTBannerItem, SPTBannerItemCustomView>
{
    _Bool shownOnTopOfModals;
    double presentationDuration;
    unsigned long long priority;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic, getter=isShownOnTopOfModals) _Bool shownOnTopOfModals; // @synthesize shownOnTopOfModals;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority;
@property(readonly, nonatomic) double presentationDuration; // @synthesize presentationDuration;
@property(readonly, nonatomic) SPTBannerView *bannerView;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

