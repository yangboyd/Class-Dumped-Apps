//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseViewModel.h"

#import "AWEBaseListViewModelOverride-Protocol.h"

@class NSArray, NSString;
@protocol AWEBaseListContainerContext;

@interface AWEBaseListViewModel : AWEBaseViewModel <AWEBaseListViewModelOverride>
{
    _Bool _didFinishNetworkRequest;
    NSArray *_sectionViewModelsArray;
    long long _dataState;
    NSString *_errorMessage;
    id <AWEBaseListContainerContext> _containerContext;
}

@property(nonatomic) __weak id <AWEBaseListContainerContext> containerContext; // @synthesize containerContext=_containerContext;
@property(nonatomic) _Bool didFinishNetworkRequest; // @synthesize didFinishNetworkRequest=_didFinishNetworkRequest;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long dataState; // @synthesize dataState=_dataState;
@property(copy, nonatomic) NSArray *sectionViewModelsArray; // @synthesize sectionViewModelsArray=_sectionViewModelsArray;
- (void).cxx_destruct;
- (void)insertSectionViewModel:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)removeSectionViewModels:(id)arg1 animated:(_Bool)arg2;
- (void)appendSectionViewModels:(id)arg1 animated:(_Bool)arg2;
- (void)insertSectionViewModel:(id)arg1 atIndex:(long long)arg2;
- (void)removeSectionViewModels:(id)arg1;
- (void)appendSectionViewModels:(id)arg1;
- (void)replaceBySectionViewModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

