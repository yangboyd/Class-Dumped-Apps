//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSObject, NSString, PSPDFItemSelectionCell, UICollectionViewCell;

@protocol PSPDFItemSelectionCellDelegate <NSObject>
- (NSString *)itemSelectionCellAccessibilityValue:(PSPDFItemSelectionCell *)arg1 forItem:(NSObject *)arg2;
- (void)itemSelectionCell:(PSPDFItemSelectionCell *)arg1 configureCell:(UICollectionViewCell *)arg2 forItem:(NSObject *)arg3;
- (void)itemSelectionCell:(PSPDFItemSelectionCell *)arg1 didSelectItem:(NSObject *)arg2;
@end

