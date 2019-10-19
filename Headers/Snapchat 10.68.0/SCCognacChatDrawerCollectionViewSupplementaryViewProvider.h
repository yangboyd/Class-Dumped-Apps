//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSectionSupplementaryViewProviding-Protocol.h"
#import "SCCollectionViewSupplementaryViewModelsConfigurable-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSDictionary, NSString, SCCognacAppListSectionHeaderView, SCCognacAppListSectionHeaderViewModel, SCPreferences, SCQueuePerformer;
@protocol SCCollectionViewSectionSupplementaryViewProviderDelegate;

@interface SCCognacChatDrawerCollectionViewSupplementaryViewProvider : NSObject <SCCollectionViewSectionSupplementaryViewProviding, SCCollectionViewSupplementaryViewModelsConfigurable, SCEventListener>
{
    SCCognacAppListSectionHeaderViewModel *_viewModel;
    SCCognacAppListSectionHeaderView *_sectionHeaderView;
    SCPreferences *_preferences;
    SCQueuePerformer *_performer;
    id <SCCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
    NSDictionary *_supplementaryViewModels;
}

@property(copy, nonatomic) NSDictionary *supplementaryViewModels; // @synthesize supplementaryViewModels=_supplementaryViewModels;
@property(nonatomic) __weak id <SCCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate; // @synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate;
- (void).cxx_destruct;
- (void)_animateSectionHeaderIfNecessaryWithViewModels:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (id)viewClassesForSupplementaryViewsByElementKind;
- (struct CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3;
@property(readonly, nonatomic) long long sectionHeaderDisplayStrategy;
- (id)initWithHeaderViewModel:(id)arg1 preferences:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

