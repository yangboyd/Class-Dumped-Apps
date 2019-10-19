//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class NSString, YTIMealbarPromoRenderer;
@protocol YTMealbarPromoViewAppearanceProvider;

@interface YTMealbarResponderEvent : YTResponderEvent
{
    _Bool _enableClientImpressionThrottling;
    _Bool _shouldReplaceMealbar;
    _Bool _dismissOnTouchOutside;
    int _parentVEType;
    YTIMealbarPromoRenderer *_mealbarPromoRenderer;
    NSString *_CSN;
    id <YTMealbarPromoViewAppearanceProvider> _appearanceProvider;
}

+ (id)eventWithMealbarPromoRenderer:(id)arg1 enableClientImpressionThrottling:(_Bool)arg2 shouldReplaceMealbar:(_Bool)arg3 firstResponder:(id)arg4;
+ (id)eventWithMealbarPromoRenderer:(id)arg1 enableClientImpressionThrottling:(_Bool)arg2 firstResponder:(id)arg3;
@property(nonatomic, getter=shouldDismissOnTouchOutside) _Bool dismissOnTouchOutside; // @synthesize dismissOnTouchOutside=_dismissOnTouchOutside;
@property(retain, nonatomic) id <YTMealbarPromoViewAppearanceProvider> appearanceProvider; // @synthesize appearanceProvider=_appearanceProvider;
@property(nonatomic) int parentVEType; // @synthesize parentVEType=_parentVEType;
@property(copy, nonatomic) NSString *CSN; // @synthesize CSN=_CSN;
@property(readonly, nonatomic) _Bool shouldReplaceMealbar; // @synthesize shouldReplaceMealbar=_shouldReplaceMealbar;
@property(readonly, nonatomic) _Bool enableClientImpressionThrottling; // @synthesize enableClientImpressionThrottling=_enableClientImpressionThrottling;
@property(readonly, nonatomic) YTIMealbarPromoRenderer *mealbarPromoRenderer; // @synthesize mealbarPromoRenderer=_mealbarPromoRenderer;
- (void).cxx_destruct;
- (id)initWithMealbarPromoRenderer:(id)arg1 enableClientImpressionThrottling:(_Bool)arg2 shouldReplaceMealbar:(_Bool)arg3 firstResponder:(id)arg4;

@end

