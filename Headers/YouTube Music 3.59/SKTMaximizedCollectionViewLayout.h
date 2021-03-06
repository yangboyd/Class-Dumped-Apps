//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTContactsCollectionViewLayout.h"

@class NSIndexPath, SKTSelectedContactsViewController;

@interface SKTMaximizedCollectionViewLayout : SKTContactsCollectionViewLayout
{
    SKTSelectedContactsViewController *_selectedContactsVC;
    NSIndexPath *_headerIndexPath;
}

@property(retain, nonatomic) NSIndexPath *headerIndexPath; // @synthesize headerIndexPath=_headerIndexPath;
@property(readonly, nonatomic) SKTSelectedContactsViewController *selectedContactsVC; // @synthesize selectedContactsVC=_selectedContactsVC;
- (void).cxx_destruct;
- (void)updateHeaderAttributes:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (double)stickyHeaderMaximumHiddenHeight;
- (double)stickyHeaderVisibleHeight;
- (id)initWithSelectedContactsVC:(id)arg1 headerIndexPath:(id)arg2;

@end

