//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSCProfile, GSCProfileConfig, NSArray, NSDictionary;

@interface PSTCardCollectionViewModel : NSObject
{
    NSDictionary *_cardProviderMap;
    NSArray *_defaultSectionModels;
    NSArray *_sectionModels;
    GSCProfile *_currentProfile;
    GSCProfileConfig *_currentConfig;
}

- (void).cxx_destruct;
- (id)runtimeSectionModelForConfigurationModel:(id)arg1 profile:(id)arg2 config:(id)arg3;
- (id)a11yLocalizedTitleForSection:(long long)arg1;
- (id)localizedTitleForSection:(long long)arg1;
- (long long)numberOfCardsInSection:(long long)arg1;
- (id)providerIdForCardAtIndexPath:(id)arg1;
- (long long)numberOfCardSections;
- (void)setProfile:(id)arg1 withConfig:(id)arg2;
- (id)initDefaultWithCardProviderMap:(id)arg1 profileServiceDependencies:(id)arg2;
- (id)initWithCardProviderMap:(id)arg1 sectionModels:(id)arg2;

@end

