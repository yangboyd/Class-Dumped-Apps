//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTMealbarPromoViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTICommand, YTIMealbarPromoRenderer;
@protocol YTResponder;

@interface YTMealbarPromoController : NSObject <YTGraftingViewController, YTMealbarPromoViewDelegate, YTResponder>
{
    YTICommand *_navEndpoint;
    id <YTResponder> _mealbarParentResponder;
    id <YTResponder> _promoControllerResponder;
    GIMMe *_gimme;
    YTIMealbarPromoRenderer *_promoRenderer;
    NSMutableArray *_thumbnailControllers;
}

@property(retain, nonatomic) NSMutableArray *thumbnailControllers; // @synthesize thumbnailControllers=_thumbnailControllers;
@property(readonly, nonatomic) YTIMealbarPromoRenderer *promoRenderer; // @synthesize promoRenderer=_promoRenderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)clearThumbnailControllers;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void)loadThumbnailsForMappings:(id)arg1;
- (void)dismissMealbarPromoFromButton:(id)arg1 renderer:(id)arg2;
- (void)didTouchOutsideMealbarPromoView:(id)arg1;
- (void)didTapDismissButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)didDisplayMealbar;
- (id)navEndpoint;
- (void)dismissMealbarWithPromoRenderer:(id)arg1;
- (void)dismissMealbarPromo;
- (void)showMealbarPromoWithEvent:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

