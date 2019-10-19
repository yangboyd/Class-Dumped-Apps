//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIFeedViewControllerModelProtocol-Protocol.h"

@class NFUICollectionViewCellManager, NSString, NavigationBarAppearanceManager;

@interface NFUIDisplayPageDataModel : NSObject <NFUIFeedViewControllerModelProtocol>
{
    long long _selectedSection;
}

@property(nonatomic) long long selectedSection; // @synthesize selectedSection=_selectedSection;
- (void)registerListTypes:(id)arg1;
- (id)typeForIndexPath:(id)arg1 withKind:(id)arg2;
- (double)minimumInterItemSpacingForSection:(long long)arg1;
- (double)minimumLineSpacingForSection:(long long)arg1;
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;
- (id)modelForIndexPath:(id)arg1 forKind:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;

// Remaining properties
@property(retain, nonatomic) NFUICollectionViewCellManager *cellManager;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NavigationBarAppearanceManager *navBarManager;
@property(readonly) Class superclass;

@end

