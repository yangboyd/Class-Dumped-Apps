//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UICollectionView;
@protocol UIAccessibilityIdentification;

@interface IGViewControllerFocusItem : NSObject
{
    id <UIAccessibilityIdentification> _item;
    UICollectionView *_collectionView;
    NSIndexPath *_indexPath;
    NSString *_accessibilityIdentifier;
}

- (void).cxx_destruct;
- (void)_doRestoreFocus;
- (void)restoreFocus;
- (id)initWithItem:(id)arg1;

@end

