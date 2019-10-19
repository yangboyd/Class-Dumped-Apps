//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCollectionViewUIFormatter-Protocol.h"

@class NSString;

@interface YTFlowLayoutCollectionViewUIFormatter : NSObject <YTCollectionViewUIFormatter>
{
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _sectionInsets;
}

@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)collectionViewSizeWithSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)insetForSectionAtIndex:(unsigned long long)arg1 sectionController:(id)arg2 numberOfSections:(unsigned long long)arg3;
- (void)updateSupplementaryItem:(id)arg1 kind:(id)arg2 sectionIndex:(unsigned long long)arg3 sectionController:(id)arg4 numberOfSections:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

