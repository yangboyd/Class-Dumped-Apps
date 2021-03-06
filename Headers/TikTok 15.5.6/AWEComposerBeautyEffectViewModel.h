//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEComposerBeautyCacheViewModel, AWEComposerBeautyEffectKeys, AWEComposerBeautyEffectWrapper, IESEffectModel, NSArray, NSMutableArray, NSString;

@interface AWEComposerBeautyEffectViewModel : NSObject
{
    _Bool _isRequestOnAir;
    _Bool _composerDataReady;
    _Bool _clearCachedSelectionOnFirstLoad;
    AWEComposerBeautyCacheViewModel *_cacheObj;
    NSString *_panelName;
    NSMutableArray *_appliedEffects;
    NSMutableArray *_tagsForAppliedEffects;
    long long _currentGender;
    AWEComposerBeautyEffectWrapper *_placeHolderEffectForFilter;
    IESEffectModel *_appliedFilter;
    long long _cameraPosition;
    AWEComposerBeautyEffectKeys *_effectKeysObj;
}

@property(retain, nonatomic) AWEComposerBeautyEffectKeys *effectKeysObj; // @synthesize effectKeysObj=_effectKeysObj;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) _Bool clearCachedSelectionOnFirstLoad; // @synthesize clearCachedSelectionOnFirstLoad=_clearCachedSelectionOnFirstLoad;
@property(nonatomic) _Bool composerDataReady; // @synthesize composerDataReady=_composerDataReady;
@property(retain, nonatomic) IESEffectModel *appliedFilter; // @synthesize appliedFilter=_appliedFilter;
@property(retain, nonatomic) AWEComposerBeautyEffectWrapper *placeHolderEffectForFilter; // @synthesize placeHolderEffectForFilter=_placeHolderEffectForFilter;
@property(nonatomic) long long currentGender; // @synthesize currentGender=_currentGender;
@property(retain, nonatomic) NSMutableArray *tagsForAppliedEffects; // @synthesize tagsForAppliedEffects=_tagsForAppliedEffects;
@property(retain, nonatomic) NSMutableArray *appliedEffects; // @synthesize appliedEffects=_appliedEffects;
@property(readonly, nonatomic) NSString *panelName; // @synthesize panelName=_panelName;
@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(retain, nonatomic) AWEComposerBeautyCacheViewModel *cacheObj; // @synthesize cacheObj=_cacheObj;
- (void).cxx_destruct;
- (void)updateAppliedFilter:(id)arg1;
- (void)updateSelectedEffect:(id)arg1 forCategory:(id)arg2;
- (void)removeEffectWrapperFromAppliedEffects:(id)arg1;
- (void)bringEffectWrapperToEnd:(id)arg1;
- (void)addEffectWrapperToAppliedEffects:(id)arg1;
- (void)updateAppliedChildEffect:(id)arg1 forEffect:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *effectsBeforeFilter;
@property(readonly, copy, nonatomic) NSArray *effectsAfterFilter;
- (void)clearAppliedEffects;
@property(readonly, copy, nonatomic) NSArray *currentEffects;
- (void)updateAppliedEffectsWithCategories:(id)arg1;
- (void)p_updateCategoriesWithResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_fetchCategoriesAndEffectsWithStartTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadEffects:(id)arg1;
- (id)selectEffects:(id)arg1 forGroup:(long long)arg2;
- (void)filterCategories:(id)arg1 withGender:(long long)arg2 cameraPosition:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)effectsWithResponse:(id)arg1;
- (_Bool)availabilityForEffectWrapper:(id)arg1 withCamera:(id)arg2;
- (void)updateAvailabilityForEffectsInCategories:(id)arg1 withCamera:(id)arg2;
- (void)fetchUpdatedEffectsWithCompletion:(CDUnknownBlockType)arg1;
- (void)cacheAppliedEffects;
- (void)updateWithGender:(long long)arg1 cameraPosition:(long long)arg2;
- (void)loadCachedEffectsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCacheViewModel:(id)arg1 panelName:(id)arg2;
- (void)dealloc;

@end

