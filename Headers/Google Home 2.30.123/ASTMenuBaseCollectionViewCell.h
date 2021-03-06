//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSObject;
@protocol UIAccessibilityIdentification;

@interface ASTMenuBaseCollectionViewCell : UICollectionViewCell
{
    NSObject<UIAccessibilityIdentification> *_accessibilityAttributeObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<UIAccessibilityIdentification> *accessibilityAttributeObject; // @synthesize accessibilityAttributeObject=_accessibilityAttributeObject;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)addCustomSubViews;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityElementsHidden;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)setUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

