//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditEffectDataSource-Protocol.h>

@class NSString;
@protocol YTEditEffectDataSourceDelegate;

@interface YTEditEffectDataSourceImpl : NSObject <YTEditEffectDataSource>
{
    _Bool _didRegisterEffectsTrayCell;
    id <YTEditEffectDataSourceDelegate> _delegate;
}

+ (id)effectsTrayCellReuseIdentifier;
@property(nonatomic) __weak id <YTEditEffectDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)registerEffectsTrayCellWithCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (unsigned long long)indexForEffectWithEffectID:(id)arg1;
- (id)effectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long displayTitleStyle;
@property(readonly, nonatomic) long long thumbnailType;
@property(readonly, nonatomic) long long totalEffects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

