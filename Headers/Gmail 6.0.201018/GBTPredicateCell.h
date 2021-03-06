//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTEditableCell.h"

@class GBTIconButton, GBTPlainButton, UIAccessibilityElement;
@protocol GBTPredicateCellDelegate, HUBColorScheme, JBTClusterFilter_Predicate_PBuilder;

@interface GBTPredicateCell : GBTEditableCell
{
    GBTIconButton *_deleteButton;
    GBTPlainButton *_typeButton;
    UIAccessibilityElement *_typeButtonAccessibilityElement;
    id <HUBColorScheme> _colorScheme;
    _Bool _showDeleteButton;
    id <GBTPredicateCellDelegate> _cellDelegate;
    id <JBTClusterFilter_Predicate_PBuilder> _predicate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showDeleteButton; // @synthesize showDeleteButton=_showDeleteButton;
@property(retain, nonatomic) id <JBTClusterFilter_Predicate_PBuilder> predicate; // @synthesize predicate=_predicate;
@property(nonatomic) __weak id <GBTPredicateCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (id)textFieldAccessibilityIdentifier;
- (id)textFieldAccessibilityLabel;
- (void)typeButtonTapped:(id)arg1;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)deleteButtonTapped:(id)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1 colorScheme:(id)arg2;

@end

